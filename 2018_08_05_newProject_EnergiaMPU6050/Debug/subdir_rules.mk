################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
2018_08_05_newProject_EnergiaMPU6050.cpp: ../2018_08_05_newProject_EnergiaMPU6050.ino
	@echo 'Building file: "$<"'
	@echo 'Invoking: Resource Custom Build Step'
	
	@echo 'Finished building: "$<"'
	@echo ' '

%.o: ./%.cpp $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/Users/Admin/workspace_v8/energia-1.6.10E18/hardware/tools/msp430/bin/msp430-gcc.exe" -c -mmcu=msp430g2553 -fno-exceptions -DF_CPU=16000000L -DENERGIA_MSP-EXP430G2553LP -DENERGIA_ARCH_MSP430 -DENERGIA=18 -DARDUINO=10610 -I"C:/Users/Admin/workspace_v8/energia-1.6.10E18/hardware/energia/msp430/cores/msp430" -I"C:/Users/Admin/workspace_v8/energia-1.6.10E18/hardware/energia/msp430/variants/MSP-EXP430G2553LP" -I"C:/Users/Admin/workspace_v8/2018_08_05_newProject_EnergiaMPU6050" -I"C:/Users/Admin/workspace_v8/energia-1.6.10E18/hardware/energia/msp430/libraries/Wire" -I"C:/Users/Admin/Documents/Energia/libraries/Arduino-MPU6050-master" -I"C:/Users/Admin/workspace_v8/energia-1.6.10E18/hardware/energia/msp430/libraries/Servo" -I"C:/Users/Admin/workspace_v8/energia-1.6.10E18/hardware/tools/msp430/msp430/include" -O2 -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -w -Wall -fno-threadsafe-statics -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


