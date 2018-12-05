#include <msp430.h>


#ifndef I2C_USCI_H
#define I2C_USCI_H

// Address
#define MPU6050_ADDRESS 0x68
#define BQ32000_ADDRESS 0x68
#define DS1307_ADDRESS  0x68
#define LM92_ADDRESS    0x48
/******************************************************************************\
*                   Prototype                              *
\******************************************************************************/
void I2C_USCI_Init(unsigned char addr); //Init I2C
void I2C_USCI_Set_Address(unsigned char addr);  //Change Slave's  Address
unsigned char I2C_USCI_Read_Byte(unsigned char address);    //Read 1 byte
//Read many Byte
unsigned char I2C_USCI_Read_Word(unsigned char Addr_Data,unsigned char *Data, unsigned char Length);
//Write 1 Byte
unsigned char I2C_USCI_Write_Byte(unsigned char address, unsigned char Data);
/******************************************************************************\
*                   Function                            *
\******************************************************************************/


void I2C_USCI_Init(unsigned char addr)
{
    P1SEL |= BIT6 + BIT7;                     // Assign I2C pins to USCI_B0

    UCB0CTL1 |= UCSWRST;                      // Enable SW reset
    UCB0CTL0 = UCMST+UCMODE_3+UCSYNC;         // I2C Master, synchronous mode
    UCB0CTL1 = UCSSEL_2+UCSWRST;              // Use SMCLK, keep SW reset
    UCB0BR0 = 40;                             // fSCL = SMCLK/40 = ~400kHz
    UCB0BR1 = 0;
    UCB0I2CSA = addr;                         // Set slave address
    UCB0CTL1 &= ~UCSWRST;                     // Clear SW reset, resume operation
}

void I2C_USCI_Set_Address(unsigned char addr)
{
    UCB0CTL1 |= UCSWRST;
    UCB0I2CSA = addr;                           // Set slave address
    UCB0CTL1 &= ~UCSWRST;                       // Clear SW reset, resume operation
}

unsigned char I2C_USCI_Read_Byte(unsigned char address)
{
    while (UCB0CTL1 & UCTXSTP);
    UCB0CTL1 |= UCTR + UCTXSTT;                 // I2C TX,START

    while (!(IFG2 & UCB0TXIFG));
    UCB0TXBUF = address;

    while (!(IFG2 & UCB0TXIFG));

    UCB0CTL1 &= ~UCTR;                      // I2C RX
    UCB0CTL1 |= UCTXSTT;                    // I2C RESTART
    IFG2 &= ~UCB0TXIFG;

    while (UCB0CTL1 & UCTXSTT);
    UCB0CTL1 |= UCTXSTP;
    return UCB0RXBUF;
}

unsigned char I2C_USCI_Read_Word(unsigned char Addr_Data,unsigned char *Data, unsigned char Length)
{
    unsigned char i=0;
    while (UCB0CTL1 & UCTXSTP);             // Loop until I2C STT is sent
    UCB0CTL1 |= UCTR + UCTXSTT;             // I2C TX, start condition

    while (!(IFG2&UCB0TXIFG));
    IFG2 &= ~UCB0TXIFG;                     // Clear USCI_B0 TX int flag
    if(UCB0STAT & UCNACKIFG) return UCB0STAT;
    UCB0TXBUF = Addr_Data;

    while (!(IFG2&UCB0TXIFG));
    if(UCB0STAT & UCNACKIFG) return UCB0STAT;

    UCB0CTL1 &= ~UCTR;                      // I2C RX
    UCB0CTL1 |= UCTXSTT;                    // I2C start condition
    IFG2 &= ~UCB0TXIFG;                     // Clear USCI_B0 TX int flag
    while (UCB0CTL1 & UCTXSTT);             // Loop until I2C STT is sent
    for(i=0;i<(Length-1);i++)
    {
        while (!(IFG2&UCB0RXIFG));
        IFG2 &= ~UCB0TXIFG;                     // Clear USCI_B0 TX int flag
        Data[i] = UCB0RXBUF;
    }
    while (!(IFG2&UCB0RXIFG));
    IFG2 &= ~UCB0TXIFG;                     // Clear USCI_B0 TX int flag
    UCB0CTL1 |= UCTXSTP;                    // I2C stop condition after 1st TX
    Data[Length-1] = UCB0RXBUF;
    IFG2 &= ~UCB0TXIFG;                     // Clear USCI_B0 TX int flag
    return 0;
}

unsigned char I2C_USCI_Write_Byte(unsigned char address, unsigned char data)
{
    while (UCB0CTL1 & UCTXSTP);
    UCB0CTL1 |= UCTR + UCTXSTT;

    while (!(IFG2&UCB0TXIFG));
    if(UCB0STAT & UCNACKIFG) return UCB0STAT;
    UCB0TXBUF = address;


    while (!(IFG2&UCB0TXIFG));
    if(UCB0STAT & UCNACKIFG) return UCB0STAT;
    UCB0TXBUF = data;

    while (!(IFG2&UCB0TXIFG));
    if(UCB0STAT & UCNACKIFG) return UCB0STAT;
    UCB0CTL1 |= UCTXSTP;
    IFG2 &= ~UCB0TXIFG;
    return 0;
}
#endif  /* I2C_USCI */
