/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-D28
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/msp430/ClockFreqs.h>
#include <ti/sysbios/family/msp430/Hwi.h>
#include <ti/sysbios/family/msp430/IntrinsicsSupport.h>
#include <ti/sysbios/family/msp430/TaskSupport.h>
#include <ti/sysbios/family/msp430/Timer.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#ifdef __ti__
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_msp430_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_msp430_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_msp430_Hwi_Module__ ti_sysbios_family_msp430_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_msp430_Hwi_Object__ {
    const ti_sysbios_family_msp430_Hwi_Fxns__ *__fxns;
    xdc_Int intNum;
    ti_sysbios_family_msp430_Hwi_Irp irp;
    __TA_ti_sysbios_family_msp430_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_msp430_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_msp430_Hwi_Object__ obj;
} ti_sysbios_family_msp430_Hwi_Object2__;


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_msp430_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_msp430_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_msp430_Timer_Module__ ti_sysbios_family_msp430_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_msp430_Timer_Object__ {
    const ti_sysbios_family_msp430_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    xdc_UInt controlRegInit;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_msp430_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz frequency;
    ti_sysbios_family_msp430_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt savedCurrCount;
    xdc_UInt32 rollovers;
    xdc_Bool synchronous;
    xdc_UInt inputDivider;
    xdc_UInt inputDividerExp;
} ti_sysbios_family_msp430_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_msp430_Timer_Object__ obj;
} ti_sysbios_family_msp430_Timer_Object2__;


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_msp430_Hwi_Object */

/* Object */
typedef ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_msp430_Timer_Object */

/* Object */
typedef ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_Bool privileged;
    xdc_Ptr domain;
    xdc_UInt32 checkValue;
    xdc_Ptr tls;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_msp430_IntrinsicsSupport_Fxns__ ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C = {
    &ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_msp430_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8014, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8022, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8023, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8027, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_family_msp430_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_msp430_Hwi_Module_State__ {
    xdc_Char *taskSP;
    xdc_Char *isrStack;
} ti_sysbios_family_msp430_Hwi_Module_State__;

/* Module__state__V */
ti_sysbios_family_msp430_Hwi_Module_State__ ti_sysbios_family_msp430_Hwi_Module__state__V;


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_family_msp430_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_msp430_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_msp430_Timer_Module_State__device device;
    __TA_ti_sysbios_family_msp430_Timer_Module_State__handles handles;
} ti_sysbios_family_msp430_Timer_Module_State__;

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__device ti_sysbios_family_msp430_Timer_Module_State_0_device__A[4];

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__handles ti_sysbios_family_msp430_Timer_Module_State_0_handles__A[4];

/* Module__state__V */
ti_sysbios_family_msp430_Timer_Module_State__ ti_sysbios_family_msp430_Timer_Module__state__V;


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[1536];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[1536] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    xdc_Bool curTaskPrivileged;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_msp430_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_msp430_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_msp430_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_msp430_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[8];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[8];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5867];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[40];


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/Admin/workspace_v8/task_MSP430F5529/Debug/configPkg/package/cfg/mutex_pe430X");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 430X");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.msp430");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.msp430.elf.MSP430X");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */

xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    ~0, /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    0,  /* msg */
    {
        0,  /* mod */
        0,  /* file */
        0   /* line */
    }
};

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_family_msp430_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_msp430_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_family_msp430_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_msp430_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[8];
    xdc_runtime_Startup_startModsFxn__C(state, 8);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif

extern xdc_Void ti_catalog_msp430_init_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_catalog_msp430_init_Boot_init();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || ((xdc_UInt)printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_CString stack[5];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.msp430.init.Boot TEMPLATE ========
 */

    extern xdc_Void ti_catalog_msp430_init_Boot_disableWatchdog(xdc_UInt address);
    extern xdc_Void ti_catalog_msp430_init_Boot_configureDCO(xdc_Void);
    extern xdc_Void ti_catalog_msp430_init_Boot_configureDCO_CS_A(xdc_Void);
    extern xdc_Void ti_catalog_msp430_init_Boot_configureDCO_CS_A_useLFXT(xdc_Void);

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_msp430_init_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_msp430_init_Boot_init ========
 */
#if defined(__ICC430__)
    #pragma location="CSTART"
#endif
xdc_Void ti_catalog_msp430_init_Boot_init(xdc_Void)
{
    ti_catalog_msp430_init_Boot_disableWatchdog(348);


    ti_catalog_msp430_init_Boot_configureDCO();


}


/*
 * ======== ti.sysbios.family.msp430.Hwi TEMPLATE ========
 */



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_msp430_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_msp430_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}


/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif


/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;



/*
 *  ======== ti_sysbios_rts_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    if (size == 0) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x7d0000,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* mpeEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_mpeEnabled__C, ".const:ti_sysbios_BIOS_mpeEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x7d0000,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* defaultKernelHeapInstance__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_defaultKernelHeapInstance__C, ".const:ti_sysbios_BIOS_defaultKernelHeapInstance__C");
__FAR__ const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C = 0;

/* kernelHeapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSize__C, ".const:ti_sysbios_BIOS_kernelHeapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C = (xdc_SizeT)0x1000;

/* kernelHeapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSection__C, ".const:ti_sysbios_BIOS_kernelHeapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C = ".kernel_heap";

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x600;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__gateObj ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__id__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__id ti_sysbios_family_msp430_ClockFreqs_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__count__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__count ti_sysbios_family_msp430_ClockFreqs_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__heap__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__heap ti_sysbios_family_msp430_ClockFreqs_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__sizeof ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__table__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__table ti_sysbios_family_msp430_ClockFreqs_Object__table__C = 0;

/* ACLK__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_ACLK__C, ".const:ti_sysbios_family_msp430_ClockFreqs_ACLK__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_ACLK ti_sysbios_family_msp430_ClockFreqs_ACLK__C = (xdc_UInt32)0x8000;

/* SMCLK__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_SMCLK__C, ".const:ti_sysbios_family_msp430_ClockFreqs_SMCLK__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_SMCLK ti_sysbios_family_msp430_ClockFreqs_SMCLK__C = (xdc_UInt32)0x7d0000;


/*
 * ======== ti.sysbios.family.msp430.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_msp430_Hwi_Params ti_sysbios_family_msp430_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_msp430_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_msp430_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_ALL,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_msp430_Hwi_Module__ ti_sysbios_family_msp430_Hwi_Module__root__V = {
    {&ti_sysbios_family_msp430_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_msp430_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_family_msp430_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (xdc_Int)0x35,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_msp430_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_msp430_Hwi_Module_State__ ti_sysbios_family_msp430_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_msp430_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_msp430_Hwi_Module_State__ ti_sysbios_family_msp430_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsEnabled ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsIncluded ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsMask ti_sysbios_family_msp430_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_msp430_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__gateObj ti_sysbios_family_msp430_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__gatePrms ti_sysbios_family_msp430_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__id__C, ".const:ti_sysbios_family_msp430_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__id ti_sysbios_family_msp430_Hwi_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerDefined ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerObj ti_sysbios_family_msp430_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn0 ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn1 ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn2 ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn4 ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn8 ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__count__C, ".const:ti_sysbios_family_msp430_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__count ti_sysbios_family_msp430_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__heap__C, ".const:ti_sysbios_family_msp430_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__heap ti_sysbios_family_msp430_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_msp430_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__sizeof ti_sysbios_family_msp430_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_msp430_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__table__C, ".const:ti_sysbios_family_msp430_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__table ti_sysbios_family_msp430_Hwi_Object__table__C = ti_sysbios_family_msp430_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0x40;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_LM_begin__C, ".const:ti_sysbios_family_msp430_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_LM_begin ti_sysbios_family_msp430_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)4683) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_LD_end__C, ".const:ti_sysbios_family_msp430_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_LD_end ti_sysbios_family_msp430_Hwi_LD_end__C = (((xdc_runtime_Log_Event)4753) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_E_alreadyDefined ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3562) << 16 | 0);

/* E_notImplemented__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_E_notImplemented__C, ".const:ti_sysbios_family_msp430_Hwi_E_notImplemented__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_E_notImplemented ti_sysbios_family_msp430_Hwi_E_notImplemented__C = (((xdc_runtime_Error_Id)3610) << 16 | 0);

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_hooks__C, ".const:ti_sysbios_family_msp430_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_hooks ti_sysbios_family_msp430_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__id ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__count ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__table ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.msp430.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsMask ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__gateObj ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__gatePrms ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__id__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__id ti_sysbios_family_msp430_TaskSupport_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerObj ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__count__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__count ti_sysbios_family_msp430_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__heap ti_sysbios_family_msp430_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__sizeof ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__table__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__table ti_sysbios_family_msp430_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_defaultStackSize ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x200;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_msp430_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_stackAlignment ti_sysbios_family_msp430_TaskSupport_stackAlignment__C = (xdc_UInt)0x2;


/*
 * ======== ti.sysbios.family.msp430.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_msp430_Timer_Params ti_sysbios_family_msp430_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_msp430_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_msp430_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_msp430_Hwi_Params*)0),  /* hwiParams */
    ti_sysbios_family_msp430_Timer_Source_ACLK,  /* clockSource */
    0,  /* synchronous */
    ti_sysbios_family_msp430_Timer_ID_1,  /* inputDivider */
    ti_sysbios_family_msp430_Timer_IDEX_1,  /* inputDividerExp */
    0,  /* nesting */
    (xdc_UInt)0x0,  /* prevThreshold */
    (xdc_UInt)0x100,  /* controlRegInit */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_msp430_Timer_Module__ ti_sysbios_family_msp430_Timer_Module__root__V = {
    {&ti_sysbios_family_msp430_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_msp430_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_family_msp430_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        (xdc_UInt)0x100,  /* controlRegInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x20,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x35,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x8000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_msp430_Hwi_Handle)&ti_sysbios_family_msp430_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0x0,  /* prevThreshold */
        (xdc_UInt)0x0,  /* savedCurrCount */
        (xdc_UInt32)0x0,  /* rollovers */
        0,  /* synchronous */
        (xdc_UInt)0x0,  /* inputDivider */
        (xdc_UInt)0x0,  /* inputDividerExp */
    },
};

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__device ti_sysbios_family_msp430_Timer_Module_State_0_device__A[4] = {
    {
        (xdc_UInt)0x35,  /* intNum */
        ((xdc_Ptr)(0x340)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x31,  /* intNum */
        ((xdc_Ptr)(0x380)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x2c,  /* intNum */
        ((xdc_Ptr)(0x400)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x3b,  /* intNum */
        ((xdc_Ptr)(0x3c0)),  /* baseAddr */
    },  /* [3] */
};

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__handles ti_sysbios_family_msp430_Timer_Module_State_0_handles__A[4] = {
    (ti_sysbios_family_msp430_Timer_Handle)&ti_sysbios_family_msp430_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_msp430_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_msp430_Timer_Module_State__ ti_sysbios_family_msp430_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_msp430_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_msp430_Timer_Module_State__ ti_sysbios_family_msp430_Timer_Module__state__V = {
    (xdc_UInt)0xe,  /* availMask */
    ((void*)ti_sysbios_family_msp430_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_msp430_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsEnabled ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsIncluded ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsMask ti_sysbios_family_msp430_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__gateObj__C, ".const:ti_sysbios_family_msp430_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__gateObj ti_sysbios_family_msp430_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__gatePrms ti_sysbios_family_msp430_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__id__C, ".const:ti_sysbios_family_msp430_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__id ti_sysbios_family_msp430_Timer_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerDefined ti_sysbios_family_msp430_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerObj ti_sysbios_family_msp430_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn0 ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn1 ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn2 ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn4 ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn8 ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__count__C, ".const:ti_sysbios_family_msp430_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__count ti_sysbios_family_msp430_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__heap__C, ".const:ti_sysbios_family_msp430_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__heap ti_sysbios_family_msp430_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__sizeof__C, ".const:ti_sysbios_family_msp430_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__sizeof ti_sysbios_family_msp430_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_msp430_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__table__C, ".const:ti_sysbios_family_msp430_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__table ti_sysbios_family_msp430_Timer_Object__table__C = ti_sysbios_family_msp430_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_msp430_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_invalidTimer ti_sysbios_family_msp430_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)3657) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_notAvailable__C, ".const:ti_sysbios_family_msp430_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_notAvailable ti_sysbios_family_msp430_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)3693) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_msp430_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_cannotSupport ti_sysbios_family_msp430_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)3732) << 16 | 0);

/* E_runtimeCreate__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_runtimeCreate__C, ".const:ti_sysbios_family_msp430_Timer_E_runtimeCreate__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_runtimeCreate ti_sysbios_family_msp430_Timer_E_runtimeCreate__C = (((xdc_runtime_Error_Id)3790) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_anyMask__C, ".const:ti_sysbios_family_msp430_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_anyMask ti_sysbios_family_msp430_Timer_anyMask__C = (xdc_UInt)0xf;

/* keepAwake__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_keepAwake__C, ".const:ti_sysbios_family_msp430_Timer_keepAwake__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_keepAwake ti_sysbios_family_msp430_Timer_keepAwake__C = 0;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_startupNeeded__C, ".const:ti_sysbios_family_msp430_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_startupNeeded ti_sysbios_family_msp430_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_numTimerDevices__C, ".const:ti_sysbios_family_msp430_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_numTimerDevices ti_sysbios_family_msp430_Timer_numTimerDevices__C = (xdc_Int)0x4;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2293) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_ALL,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4386) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[1536];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x600)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2979) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3015) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3060) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4471) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2951) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)0);

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)0);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_msp430_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4771) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4793) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)4811) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)453) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)534) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1] = {
    (xdc_UInt)0x0,  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {1, ((__T1_ti_sysbios_knl_Idle_coreList *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)4843) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)4873) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)944) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)999) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)733) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1064) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1118) << 16 | 16);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C, ".const:ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)3926) << 16 | 0);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)4916) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)4963) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)4981) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1212) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1269) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    1,  /* privileged */
    ((xdc_Ptr)0),  /* domain */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    0,  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    1,  /* curTaskPrivileged */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = 0;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5021) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5089) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5134) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5175) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5207) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5255) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5311) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5342) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5425) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5511) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4005) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4048) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4099) << 16 | 0);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".const:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)4130) << 16 | 0);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".const:ti_sysbios_knl_Task_E_objectCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)4203) << 16 | 0);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectNotInKernelSpace__C, ".const:ti_sysbios_knl_Task_E_objectNotInKernelSpace__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4270) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1318) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1387) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1441) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1495) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1558) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1608) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1643) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1676) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1760) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x200;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)((xdc_Fxn)ti_sysbios_knl_Idle_run__E));

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".const:ti_sysbios_knl_Task_objectCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".const:ti_sysbios_knl_Task_objectCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".const:ti_sysbios_knl_Task_objectCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3322) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3344) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3348) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3382) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4507) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4531) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4552) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4571) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4588) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4602) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4618) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4625) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4636) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4646) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4665) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x2,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[8] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_msp430_Hwi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_msp430_Timer_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [7] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[8] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x200;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[4] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x4;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5867] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x75,  /* [402] */
    (xdc_Char)0x6e,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x75,  /* [405] */
    (xdc_Char)0x70,  /* [406] */
    (xdc_Char)0x70,  /* [407] */
    (xdc_Char)0x6f,  /* [408] */
    (xdc_Char)0x72,  /* [409] */
    (xdc_Char)0x74,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x64,  /* [412] */
    (xdc_Char)0x4d,  /* [413] */
    (xdc_Char)0x61,  /* [414] */
    (xdc_Char)0x73,  /* [415] */
    (xdc_Char)0x6b,  /* [416] */
    (xdc_Char)0x69,  /* [417] */
    (xdc_Char)0x6e,  /* [418] */
    (xdc_Char)0x67,  /* [419] */
    (xdc_Char)0x4f,  /* [420] */
    (xdc_Char)0x70,  /* [421] */
    (xdc_Char)0x74,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x6f,  /* [424] */
    (xdc_Char)0x6e,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x75,  /* [428] */
    (xdc_Char)0x6e,  /* [429] */
    (xdc_Char)0x73,  /* [430] */
    (xdc_Char)0x75,  /* [431] */
    (xdc_Char)0x70,  /* [432] */
    (xdc_Char)0x70,  /* [433] */
    (xdc_Char)0x6f,  /* [434] */
    (xdc_Char)0x72,  /* [435] */
    (xdc_Char)0x74,  /* [436] */
    (xdc_Char)0x65,  /* [437] */
    (xdc_Char)0x64,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x6d,  /* [440] */
    (xdc_Char)0x61,  /* [441] */
    (xdc_Char)0x73,  /* [442] */
    (xdc_Char)0x6b,  /* [443] */
    (xdc_Char)0x53,  /* [444] */
    (xdc_Char)0x65,  /* [445] */
    (xdc_Char)0x74,  /* [446] */
    (xdc_Char)0x74,  /* [447] */
    (xdc_Char)0x69,  /* [448] */
    (xdc_Char)0x6e,  /* [449] */
    (xdc_Char)0x67,  /* [450] */
    (xdc_Char)0x2e,  /* [451] */
    (xdc_Char)0x0,  /* [452] */
    (xdc_Char)0x41,  /* [453] */
    (xdc_Char)0x5f,  /* [454] */
    (xdc_Char)0x63,  /* [455] */
    (xdc_Char)0x6c,  /* [456] */
    (xdc_Char)0x6f,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x6b,  /* [459] */
    (xdc_Char)0x44,  /* [460] */
    (xdc_Char)0x69,  /* [461] */
    (xdc_Char)0x73,  /* [462] */
    (xdc_Char)0x61,  /* [463] */
    (xdc_Char)0x62,  /* [464] */
    (xdc_Char)0x6c,  /* [465] */
    (xdc_Char)0x65,  /* [466] */
    (xdc_Char)0x64,  /* [467] */
    (xdc_Char)0x3a,  /* [468] */
    (xdc_Char)0x20,  /* [469] */
    (xdc_Char)0x43,  /* [470] */
    (xdc_Char)0x61,  /* [471] */
    (xdc_Char)0x6e,  /* [472] */
    (xdc_Char)0x6e,  /* [473] */
    (xdc_Char)0x6f,  /* [474] */
    (xdc_Char)0x74,  /* [475] */
    (xdc_Char)0x20,  /* [476] */
    (xdc_Char)0x63,  /* [477] */
    (xdc_Char)0x72,  /* [478] */
    (xdc_Char)0x65,  /* [479] */
    (xdc_Char)0x61,  /* [480] */
    (xdc_Char)0x74,  /* [481] */
    (xdc_Char)0x65,  /* [482] */
    (xdc_Char)0x20,  /* [483] */
    (xdc_Char)0x61,  /* [484] */
    (xdc_Char)0x20,  /* [485] */
    (xdc_Char)0x63,  /* [486] */
    (xdc_Char)0x6c,  /* [487] */
    (xdc_Char)0x6f,  /* [488] */
    (xdc_Char)0x63,  /* [489] */
    (xdc_Char)0x6b,  /* [490] */
    (xdc_Char)0x20,  /* [491] */
    (xdc_Char)0x69,  /* [492] */
    (xdc_Char)0x6e,  /* [493] */
    (xdc_Char)0x73,  /* [494] */
    (xdc_Char)0x74,  /* [495] */
    (xdc_Char)0x61,  /* [496] */
    (xdc_Char)0x6e,  /* [497] */
    (xdc_Char)0x63,  /* [498] */
    (xdc_Char)0x65,  /* [499] */
    (xdc_Char)0x20,  /* [500] */
    (xdc_Char)0x77,  /* [501] */
    (xdc_Char)0x68,  /* [502] */
    (xdc_Char)0x65,  /* [503] */
    (xdc_Char)0x6e,  /* [504] */
    (xdc_Char)0x20,  /* [505] */
    (xdc_Char)0x42,  /* [506] */
    (xdc_Char)0x49,  /* [507] */
    (xdc_Char)0x4f,  /* [508] */
    (xdc_Char)0x53,  /* [509] */
    (xdc_Char)0x2e,  /* [510] */
    (xdc_Char)0x63,  /* [511] */
    (xdc_Char)0x6c,  /* [512] */
    (xdc_Char)0x6f,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x6b,  /* [515] */
    (xdc_Char)0x45,  /* [516] */
    (xdc_Char)0x6e,  /* [517] */
    (xdc_Char)0x61,  /* [518] */
    (xdc_Char)0x62,  /* [519] */
    (xdc_Char)0x6c,  /* [520] */
    (xdc_Char)0x65,  /* [521] */
    (xdc_Char)0x64,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x69,  /* [524] */
    (xdc_Char)0x73,  /* [525] */
    (xdc_Char)0x20,  /* [526] */
    (xdc_Char)0x66,  /* [527] */
    (xdc_Char)0x61,  /* [528] */
    (xdc_Char)0x6c,  /* [529] */
    (xdc_Char)0x73,  /* [530] */
    (xdc_Char)0x65,  /* [531] */
    (xdc_Char)0x2e,  /* [532] */
    (xdc_Char)0x0,  /* [533] */
    (xdc_Char)0x41,  /* [534] */
    (xdc_Char)0x5f,  /* [535] */
    (xdc_Char)0x62,  /* [536] */
    (xdc_Char)0x61,  /* [537] */
    (xdc_Char)0x64,  /* [538] */
    (xdc_Char)0x54,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x72,  /* [541] */
    (xdc_Char)0x65,  /* [542] */
    (xdc_Char)0x61,  /* [543] */
    (xdc_Char)0x64,  /* [544] */
    (xdc_Char)0x54,  /* [545] */
    (xdc_Char)0x79,  /* [546] */
    (xdc_Char)0x70,  /* [547] */
    (xdc_Char)0x65,  /* [548] */
    (xdc_Char)0x3a,  /* [549] */
    (xdc_Char)0x20,  /* [550] */
    (xdc_Char)0x43,  /* [551] */
    (xdc_Char)0x61,  /* [552] */
    (xdc_Char)0x6e,  /* [553] */
    (xdc_Char)0x6e,  /* [554] */
    (xdc_Char)0x6f,  /* [555] */
    (xdc_Char)0x74,  /* [556] */
    (xdc_Char)0x20,  /* [557] */
    (xdc_Char)0x63,  /* [558] */
    (xdc_Char)0x72,  /* [559] */
    (xdc_Char)0x65,  /* [560] */
    (xdc_Char)0x61,  /* [561] */
    (xdc_Char)0x74,  /* [562] */
    (xdc_Char)0x65,  /* [563] */
    (xdc_Char)0x2f,  /* [564] */
    (xdc_Char)0x64,  /* [565] */
    (xdc_Char)0x65,  /* [566] */
    (xdc_Char)0x6c,  /* [567] */
    (xdc_Char)0x65,  /* [568] */
    (xdc_Char)0x74,  /* [569] */
    (xdc_Char)0x65,  /* [570] */
    (xdc_Char)0x20,  /* [571] */
    (xdc_Char)0x61,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x43,  /* [574] */
    (xdc_Char)0x6c,  /* [575] */
    (xdc_Char)0x6f,  /* [576] */
    (xdc_Char)0x63,  /* [577] */
    (xdc_Char)0x6b,  /* [578] */
    (xdc_Char)0x20,  /* [579] */
    (xdc_Char)0x66,  /* [580] */
    (xdc_Char)0x72,  /* [581] */
    (xdc_Char)0x6f,  /* [582] */
    (xdc_Char)0x6d,  /* [583] */
    (xdc_Char)0x20,  /* [584] */
    (xdc_Char)0x48,  /* [585] */
    (xdc_Char)0x77,  /* [586] */
    (xdc_Char)0x69,  /* [587] */
    (xdc_Char)0x20,  /* [588] */
    (xdc_Char)0x6f,  /* [589] */
    (xdc_Char)0x72,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x53,  /* [592] */
    (xdc_Char)0x77,  /* [593] */
    (xdc_Char)0x69,  /* [594] */
    (xdc_Char)0x20,  /* [595] */
    (xdc_Char)0x74,  /* [596] */
    (xdc_Char)0x68,  /* [597] */
    (xdc_Char)0x72,  /* [598] */
    (xdc_Char)0x65,  /* [599] */
    (xdc_Char)0x61,  /* [600] */
    (xdc_Char)0x64,  /* [601] */
    (xdc_Char)0x2e,  /* [602] */
    (xdc_Char)0x0,  /* [603] */
    (xdc_Char)0x41,  /* [604] */
    (xdc_Char)0x5f,  /* [605] */
    (xdc_Char)0x6e,  /* [606] */
    (xdc_Char)0x75,  /* [607] */
    (xdc_Char)0x6c,  /* [608] */
    (xdc_Char)0x6c,  /* [609] */
    (xdc_Char)0x45,  /* [610] */
    (xdc_Char)0x76,  /* [611] */
    (xdc_Char)0x65,  /* [612] */
    (xdc_Char)0x6e,  /* [613] */
    (xdc_Char)0x74,  /* [614] */
    (xdc_Char)0x4d,  /* [615] */
    (xdc_Char)0x61,  /* [616] */
    (xdc_Char)0x73,  /* [617] */
    (xdc_Char)0x6b,  /* [618] */
    (xdc_Char)0x73,  /* [619] */
    (xdc_Char)0x3a,  /* [620] */
    (xdc_Char)0x20,  /* [621] */
    (xdc_Char)0x6f,  /* [622] */
    (xdc_Char)0x72,  /* [623] */
    (xdc_Char)0x4d,  /* [624] */
    (xdc_Char)0x61,  /* [625] */
    (xdc_Char)0x73,  /* [626] */
    (xdc_Char)0x6b,  /* [627] */
    (xdc_Char)0x20,  /* [628] */
    (xdc_Char)0x61,  /* [629] */
    (xdc_Char)0x6e,  /* [630] */
    (xdc_Char)0x64,  /* [631] */
    (xdc_Char)0x20,  /* [632] */
    (xdc_Char)0x61,  /* [633] */
    (xdc_Char)0x6e,  /* [634] */
    (xdc_Char)0x64,  /* [635] */
    (xdc_Char)0x4d,  /* [636] */
    (xdc_Char)0x61,  /* [637] */
    (xdc_Char)0x73,  /* [638] */
    (xdc_Char)0x6b,  /* [639] */
    (xdc_Char)0x20,  /* [640] */
    (xdc_Char)0x61,  /* [641] */
    (xdc_Char)0x72,  /* [642] */
    (xdc_Char)0x65,  /* [643] */
    (xdc_Char)0x20,  /* [644] */
    (xdc_Char)0x6e,  /* [645] */
    (xdc_Char)0x75,  /* [646] */
    (xdc_Char)0x6c,  /* [647] */
    (xdc_Char)0x6c,  /* [648] */
    (xdc_Char)0x2e,  /* [649] */
    (xdc_Char)0x0,  /* [650] */
    (xdc_Char)0x41,  /* [651] */
    (xdc_Char)0x5f,  /* [652] */
    (xdc_Char)0x6e,  /* [653] */
    (xdc_Char)0x75,  /* [654] */
    (xdc_Char)0x6c,  /* [655] */
    (xdc_Char)0x6c,  /* [656] */
    (xdc_Char)0x45,  /* [657] */
    (xdc_Char)0x76,  /* [658] */
    (xdc_Char)0x65,  /* [659] */
    (xdc_Char)0x6e,  /* [660] */
    (xdc_Char)0x74,  /* [661] */
    (xdc_Char)0x49,  /* [662] */
    (xdc_Char)0x64,  /* [663] */
    (xdc_Char)0x3a,  /* [664] */
    (xdc_Char)0x20,  /* [665] */
    (xdc_Char)0x70,  /* [666] */
    (xdc_Char)0x6f,  /* [667] */
    (xdc_Char)0x73,  /* [668] */
    (xdc_Char)0x74,  /* [669] */
    (xdc_Char)0x65,  /* [670] */
    (xdc_Char)0x64,  /* [671] */
    (xdc_Char)0x20,  /* [672] */
    (xdc_Char)0x65,  /* [673] */
    (xdc_Char)0x76,  /* [674] */
    (xdc_Char)0x65,  /* [675] */
    (xdc_Char)0x6e,  /* [676] */
    (xdc_Char)0x74,  /* [677] */
    (xdc_Char)0x49,  /* [678] */
    (xdc_Char)0x64,  /* [679] */
    (xdc_Char)0x20,  /* [680] */
    (xdc_Char)0x69,  /* [681] */
    (xdc_Char)0x73,  /* [682] */
    (xdc_Char)0x20,  /* [683] */
    (xdc_Char)0x6e,  /* [684] */
    (xdc_Char)0x75,  /* [685] */
    (xdc_Char)0x6c,  /* [686] */
    (xdc_Char)0x6c,  /* [687] */
    (xdc_Char)0x2e,  /* [688] */
    (xdc_Char)0x0,  /* [689] */
    (xdc_Char)0x41,  /* [690] */
    (xdc_Char)0x5f,  /* [691] */
    (xdc_Char)0x65,  /* [692] */
    (xdc_Char)0x76,  /* [693] */
    (xdc_Char)0x65,  /* [694] */
    (xdc_Char)0x6e,  /* [695] */
    (xdc_Char)0x74,  /* [696] */
    (xdc_Char)0x49,  /* [697] */
    (xdc_Char)0x6e,  /* [698] */
    (xdc_Char)0x55,  /* [699] */
    (xdc_Char)0x73,  /* [700] */
    (xdc_Char)0x65,  /* [701] */
    (xdc_Char)0x3a,  /* [702] */
    (xdc_Char)0x20,  /* [703] */
    (xdc_Char)0x45,  /* [704] */
    (xdc_Char)0x76,  /* [705] */
    (xdc_Char)0x65,  /* [706] */
    (xdc_Char)0x6e,  /* [707] */
    (xdc_Char)0x74,  /* [708] */
    (xdc_Char)0x20,  /* [709] */
    (xdc_Char)0x6f,  /* [710] */
    (xdc_Char)0x62,  /* [711] */
    (xdc_Char)0x6a,  /* [712] */
    (xdc_Char)0x65,  /* [713] */
    (xdc_Char)0x63,  /* [714] */
    (xdc_Char)0x74,  /* [715] */
    (xdc_Char)0x20,  /* [716] */
    (xdc_Char)0x61,  /* [717] */
    (xdc_Char)0x6c,  /* [718] */
    (xdc_Char)0x72,  /* [719] */
    (xdc_Char)0x65,  /* [720] */
    (xdc_Char)0x61,  /* [721] */
    (xdc_Char)0x64,  /* [722] */
    (xdc_Char)0x79,  /* [723] */
    (xdc_Char)0x20,  /* [724] */
    (xdc_Char)0x69,  /* [725] */
    (xdc_Char)0x6e,  /* [726] */
    (xdc_Char)0x20,  /* [727] */
    (xdc_Char)0x75,  /* [728] */
    (xdc_Char)0x73,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x2e,  /* [731] */
    (xdc_Char)0x0,  /* [732] */
    (xdc_Char)0x41,  /* [733] */
    (xdc_Char)0x5f,  /* [734] */
    (xdc_Char)0x62,  /* [735] */
    (xdc_Char)0x61,  /* [736] */
    (xdc_Char)0x64,  /* [737] */
    (xdc_Char)0x43,  /* [738] */
    (xdc_Char)0x6f,  /* [739] */
    (xdc_Char)0x6e,  /* [740] */
    (xdc_Char)0x74,  /* [741] */
    (xdc_Char)0x65,  /* [742] */
    (xdc_Char)0x78,  /* [743] */
    (xdc_Char)0x74,  /* [744] */
    (xdc_Char)0x3a,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x62,  /* [747] */
    (xdc_Char)0x61,  /* [748] */
    (xdc_Char)0x64,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x63,  /* [751] */
    (xdc_Char)0x61,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x6c,  /* [754] */
    (xdc_Char)0x69,  /* [755] */
    (xdc_Char)0x6e,  /* [756] */
    (xdc_Char)0x67,  /* [757] */
    (xdc_Char)0x20,  /* [758] */
    (xdc_Char)0x63,  /* [759] */
    (xdc_Char)0x6f,  /* [760] */
    (xdc_Char)0x6e,  /* [761] */
    (xdc_Char)0x74,  /* [762] */
    (xdc_Char)0x65,  /* [763] */
    (xdc_Char)0x78,  /* [764] */
    (xdc_Char)0x74,  /* [765] */
    (xdc_Char)0x2e,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x4d,  /* [768] */
    (xdc_Char)0x75,  /* [769] */
    (xdc_Char)0x73,  /* [770] */
    (xdc_Char)0x74,  /* [771] */
    (xdc_Char)0x20,  /* [772] */
    (xdc_Char)0x62,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x20,  /* [775] */
    (xdc_Char)0x63,  /* [776] */
    (xdc_Char)0x61,  /* [777] */
    (xdc_Char)0x6c,  /* [778] */
    (xdc_Char)0x6c,  /* [779] */
    (xdc_Char)0x65,  /* [780] */
    (xdc_Char)0x64,  /* [781] */
    (xdc_Char)0x20,  /* [782] */
    (xdc_Char)0x66,  /* [783] */
    (xdc_Char)0x72,  /* [784] */
    (xdc_Char)0x6f,  /* [785] */
    (xdc_Char)0x6d,  /* [786] */
    (xdc_Char)0x20,  /* [787] */
    (xdc_Char)0x61,  /* [788] */
    (xdc_Char)0x20,  /* [789] */
    (xdc_Char)0x54,  /* [790] */
    (xdc_Char)0x61,  /* [791] */
    (xdc_Char)0x73,  /* [792] */
    (xdc_Char)0x6b,  /* [793] */
    (xdc_Char)0x2e,  /* [794] */
    (xdc_Char)0x0,  /* [795] */
    (xdc_Char)0x41,  /* [796] */
    (xdc_Char)0x5f,  /* [797] */
    (xdc_Char)0x70,  /* [798] */
    (xdc_Char)0x65,  /* [799] */
    (xdc_Char)0x6e,  /* [800] */
    (xdc_Char)0x64,  /* [801] */
    (xdc_Char)0x54,  /* [802] */
    (xdc_Char)0x61,  /* [803] */
    (xdc_Char)0x73,  /* [804] */
    (xdc_Char)0x6b,  /* [805] */
    (xdc_Char)0x44,  /* [806] */
    (xdc_Char)0x69,  /* [807] */
    (xdc_Char)0x73,  /* [808] */
    (xdc_Char)0x61,  /* [809] */
    (xdc_Char)0x62,  /* [810] */
    (xdc_Char)0x6c,  /* [811] */
    (xdc_Char)0x65,  /* [812] */
    (xdc_Char)0x64,  /* [813] */
    (xdc_Char)0x3a,  /* [814] */
    (xdc_Char)0x20,  /* [815] */
    (xdc_Char)0x43,  /* [816] */
    (xdc_Char)0x61,  /* [817] */
    (xdc_Char)0x6e,  /* [818] */
    (xdc_Char)0x6e,  /* [819] */
    (xdc_Char)0x6f,  /* [820] */
    (xdc_Char)0x74,  /* [821] */
    (xdc_Char)0x20,  /* [822] */
    (xdc_Char)0x63,  /* [823] */
    (xdc_Char)0x61,  /* [824] */
    (xdc_Char)0x6c,  /* [825] */
    (xdc_Char)0x6c,  /* [826] */
    (xdc_Char)0x20,  /* [827] */
    (xdc_Char)0x45,  /* [828] */
    (xdc_Char)0x76,  /* [829] */
    (xdc_Char)0x65,  /* [830] */
    (xdc_Char)0x6e,  /* [831] */
    (xdc_Char)0x74,  /* [832] */
    (xdc_Char)0x5f,  /* [833] */
    (xdc_Char)0x70,  /* [834] */
    (xdc_Char)0x65,  /* [835] */
    (xdc_Char)0x6e,  /* [836] */
    (xdc_Char)0x64,  /* [837] */
    (xdc_Char)0x28,  /* [838] */
    (xdc_Char)0x29,  /* [839] */
    (xdc_Char)0x20,  /* [840] */
    (xdc_Char)0x77,  /* [841] */
    (xdc_Char)0x68,  /* [842] */
    (xdc_Char)0x69,  /* [843] */
    (xdc_Char)0x6c,  /* [844] */
    (xdc_Char)0x65,  /* [845] */
    (xdc_Char)0x20,  /* [846] */
    (xdc_Char)0x74,  /* [847] */
    (xdc_Char)0x68,  /* [848] */
    (xdc_Char)0x65,  /* [849] */
    (xdc_Char)0x20,  /* [850] */
    (xdc_Char)0x54,  /* [851] */
    (xdc_Char)0x61,  /* [852] */
    (xdc_Char)0x73,  /* [853] */
    (xdc_Char)0x6b,  /* [854] */
    (xdc_Char)0x20,  /* [855] */
    (xdc_Char)0x6f,  /* [856] */
    (xdc_Char)0x72,  /* [857] */
    (xdc_Char)0x20,  /* [858] */
    (xdc_Char)0x53,  /* [859] */
    (xdc_Char)0x77,  /* [860] */
    (xdc_Char)0x69,  /* [861] */
    (xdc_Char)0x20,  /* [862] */
    (xdc_Char)0x73,  /* [863] */
    (xdc_Char)0x63,  /* [864] */
    (xdc_Char)0x68,  /* [865] */
    (xdc_Char)0x65,  /* [866] */
    (xdc_Char)0x64,  /* [867] */
    (xdc_Char)0x75,  /* [868] */
    (xdc_Char)0x6c,  /* [869] */
    (xdc_Char)0x65,  /* [870] */
    (xdc_Char)0x72,  /* [871] */
    (xdc_Char)0x20,  /* [872] */
    (xdc_Char)0x69,  /* [873] */
    (xdc_Char)0x73,  /* [874] */
    (xdc_Char)0x20,  /* [875] */
    (xdc_Char)0x64,  /* [876] */
    (xdc_Char)0x69,  /* [877] */
    (xdc_Char)0x73,  /* [878] */
    (xdc_Char)0x61,  /* [879] */
    (xdc_Char)0x62,  /* [880] */
    (xdc_Char)0x6c,  /* [881] */
    (xdc_Char)0x65,  /* [882] */
    (xdc_Char)0x64,  /* [883] */
    (xdc_Char)0x2e,  /* [884] */
    (xdc_Char)0x0,  /* [885] */
    (xdc_Char)0x4d,  /* [886] */
    (xdc_Char)0x61,  /* [887] */
    (xdc_Char)0x69,  /* [888] */
    (xdc_Char)0x6c,  /* [889] */
    (xdc_Char)0x62,  /* [890] */
    (xdc_Char)0x6f,  /* [891] */
    (xdc_Char)0x78,  /* [892] */
    (xdc_Char)0x5f,  /* [893] */
    (xdc_Char)0x63,  /* [894] */
    (xdc_Char)0x72,  /* [895] */
    (xdc_Char)0x65,  /* [896] */
    (xdc_Char)0x61,  /* [897] */
    (xdc_Char)0x74,  /* [898] */
    (xdc_Char)0x65,  /* [899] */
    (xdc_Char)0x27,  /* [900] */
    (xdc_Char)0x73,  /* [901] */
    (xdc_Char)0x20,  /* [902] */
    (xdc_Char)0x62,  /* [903] */
    (xdc_Char)0x75,  /* [904] */
    (xdc_Char)0x66,  /* [905] */
    (xdc_Char)0x53,  /* [906] */
    (xdc_Char)0x69,  /* [907] */
    (xdc_Char)0x7a,  /* [908] */
    (xdc_Char)0x65,  /* [909] */
    (xdc_Char)0x20,  /* [910] */
    (xdc_Char)0x70,  /* [911] */
    (xdc_Char)0x61,  /* [912] */
    (xdc_Char)0x72,  /* [913] */
    (xdc_Char)0x61,  /* [914] */
    (xdc_Char)0x6d,  /* [915] */
    (xdc_Char)0x65,  /* [916] */
    (xdc_Char)0x74,  /* [917] */
    (xdc_Char)0x65,  /* [918] */
    (xdc_Char)0x72,  /* [919] */
    (xdc_Char)0x20,  /* [920] */
    (xdc_Char)0x69,  /* [921] */
    (xdc_Char)0x73,  /* [922] */
    (xdc_Char)0x20,  /* [923] */
    (xdc_Char)0x69,  /* [924] */
    (xdc_Char)0x6e,  /* [925] */
    (xdc_Char)0x76,  /* [926] */
    (xdc_Char)0x61,  /* [927] */
    (xdc_Char)0x6c,  /* [928] */
    (xdc_Char)0x69,  /* [929] */
    (xdc_Char)0x64,  /* [930] */
    (xdc_Char)0x20,  /* [931] */
    (xdc_Char)0x28,  /* [932] */
    (xdc_Char)0x74,  /* [933] */
    (xdc_Char)0x6f,  /* [934] */
    (xdc_Char)0x6f,  /* [935] */
    (xdc_Char)0x20,  /* [936] */
    (xdc_Char)0x73,  /* [937] */
    (xdc_Char)0x6d,  /* [938] */
    (xdc_Char)0x61,  /* [939] */
    (xdc_Char)0x6c,  /* [940] */
    (xdc_Char)0x6c,  /* [941] */
    (xdc_Char)0x29,  /* [942] */
    (xdc_Char)0x0,  /* [943] */
    (xdc_Char)0x41,  /* [944] */
    (xdc_Char)0x5f,  /* [945] */
    (xdc_Char)0x6e,  /* [946] */
    (xdc_Char)0x6f,  /* [947] */
    (xdc_Char)0x45,  /* [948] */
    (xdc_Char)0x76,  /* [949] */
    (xdc_Char)0x65,  /* [950] */
    (xdc_Char)0x6e,  /* [951] */
    (xdc_Char)0x74,  /* [952] */
    (xdc_Char)0x73,  /* [953] */
    (xdc_Char)0x3a,  /* [954] */
    (xdc_Char)0x20,  /* [955] */
    (xdc_Char)0x54,  /* [956] */
    (xdc_Char)0x68,  /* [957] */
    (xdc_Char)0x65,  /* [958] */
    (xdc_Char)0x20,  /* [959] */
    (xdc_Char)0x45,  /* [960] */
    (xdc_Char)0x76,  /* [961] */
    (xdc_Char)0x65,  /* [962] */
    (xdc_Char)0x6e,  /* [963] */
    (xdc_Char)0x74,  /* [964] */
    (xdc_Char)0x2e,  /* [965] */
    (xdc_Char)0x73,  /* [966] */
    (xdc_Char)0x75,  /* [967] */
    (xdc_Char)0x70,  /* [968] */
    (xdc_Char)0x70,  /* [969] */
    (xdc_Char)0x6f,  /* [970] */
    (xdc_Char)0x72,  /* [971] */
    (xdc_Char)0x74,  /* [972] */
    (xdc_Char)0x73,  /* [973] */
    (xdc_Char)0x45,  /* [974] */
    (xdc_Char)0x76,  /* [975] */
    (xdc_Char)0x65,  /* [976] */
    (xdc_Char)0x6e,  /* [977] */
    (xdc_Char)0x74,  /* [978] */
    (xdc_Char)0x73,  /* [979] */
    (xdc_Char)0x20,  /* [980] */
    (xdc_Char)0x66,  /* [981] */
    (xdc_Char)0x6c,  /* [982] */
    (xdc_Char)0x61,  /* [983] */
    (xdc_Char)0x67,  /* [984] */
    (xdc_Char)0x20,  /* [985] */
    (xdc_Char)0x69,  /* [986] */
    (xdc_Char)0x73,  /* [987] */
    (xdc_Char)0x20,  /* [988] */
    (xdc_Char)0x64,  /* [989] */
    (xdc_Char)0x69,  /* [990] */
    (xdc_Char)0x73,  /* [991] */
    (xdc_Char)0x61,  /* [992] */
    (xdc_Char)0x62,  /* [993] */
    (xdc_Char)0x6c,  /* [994] */
    (xdc_Char)0x65,  /* [995] */
    (xdc_Char)0x64,  /* [996] */
    (xdc_Char)0x2e,  /* [997] */
    (xdc_Char)0x0,  /* [998] */
    (xdc_Char)0x41,  /* [999] */
    (xdc_Char)0x5f,  /* [1000] */
    (xdc_Char)0x69,  /* [1001] */
    (xdc_Char)0x6e,  /* [1002] */
    (xdc_Char)0x76,  /* [1003] */
    (xdc_Char)0x54,  /* [1004] */
    (xdc_Char)0x69,  /* [1005] */
    (xdc_Char)0x6d,  /* [1006] */
    (xdc_Char)0x65,  /* [1007] */
    (xdc_Char)0x6f,  /* [1008] */
    (xdc_Char)0x75,  /* [1009] */
    (xdc_Char)0x74,  /* [1010] */
    (xdc_Char)0x3a,  /* [1011] */
    (xdc_Char)0x20,  /* [1012] */
    (xdc_Char)0x43,  /* [1013] */
    (xdc_Char)0x61,  /* [1014] */
    (xdc_Char)0x6e,  /* [1015] */
    (xdc_Char)0x27,  /* [1016] */
    (xdc_Char)0x74,  /* [1017] */
    (xdc_Char)0x20,  /* [1018] */
    (xdc_Char)0x75,  /* [1019] */
    (xdc_Char)0x73,  /* [1020] */
    (xdc_Char)0x65,  /* [1021] */
    (xdc_Char)0x20,  /* [1022] */
    (xdc_Char)0x42,  /* [1023] */
    (xdc_Char)0x49,  /* [1024] */
    (xdc_Char)0x4f,  /* [1025] */
    (xdc_Char)0x53,  /* [1026] */
    (xdc_Char)0x5f,  /* [1027] */
    (xdc_Char)0x45,  /* [1028] */
    (xdc_Char)0x56,  /* [1029] */
    (xdc_Char)0x45,  /* [1030] */
    (xdc_Char)0x4e,  /* [1031] */
    (xdc_Char)0x54,  /* [1032] */
    (xdc_Char)0x5f,  /* [1033] */
    (xdc_Char)0x41,  /* [1034] */
    (xdc_Char)0x43,  /* [1035] */
    (xdc_Char)0x51,  /* [1036] */
    (xdc_Char)0x55,  /* [1037] */
    (xdc_Char)0x49,  /* [1038] */
    (xdc_Char)0x52,  /* [1039] */
    (xdc_Char)0x45,  /* [1040] */
    (xdc_Char)0x44,  /* [1041] */
    (xdc_Char)0x20,  /* [1042] */
    (xdc_Char)0x77,  /* [1043] */
    (xdc_Char)0x69,  /* [1044] */
    (xdc_Char)0x74,  /* [1045] */
    (xdc_Char)0x68,  /* [1046] */
    (xdc_Char)0x20,  /* [1047] */
    (xdc_Char)0x74,  /* [1048] */
    (xdc_Char)0x68,  /* [1049] */
    (xdc_Char)0x69,  /* [1050] */
    (xdc_Char)0x73,  /* [1051] */
    (xdc_Char)0x20,  /* [1052] */
    (xdc_Char)0x53,  /* [1053] */
    (xdc_Char)0x65,  /* [1054] */
    (xdc_Char)0x6d,  /* [1055] */
    (xdc_Char)0x61,  /* [1056] */
    (xdc_Char)0x70,  /* [1057] */
    (xdc_Char)0x68,  /* [1058] */
    (xdc_Char)0x6f,  /* [1059] */
    (xdc_Char)0x72,  /* [1060] */
    (xdc_Char)0x65,  /* [1061] */
    (xdc_Char)0x2e,  /* [1062] */
    (xdc_Char)0x0,  /* [1063] */
    (xdc_Char)0x41,  /* [1064] */
    (xdc_Char)0x5f,  /* [1065] */
    (xdc_Char)0x6f,  /* [1066] */
    (xdc_Char)0x76,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x72,  /* [1069] */
    (xdc_Char)0x66,  /* [1070] */
    (xdc_Char)0x6c,  /* [1071] */
    (xdc_Char)0x6f,  /* [1072] */
    (xdc_Char)0x77,  /* [1073] */
    (xdc_Char)0x3a,  /* [1074] */
    (xdc_Char)0x20,  /* [1075] */
    (xdc_Char)0x43,  /* [1076] */
    (xdc_Char)0x6f,  /* [1077] */
    (xdc_Char)0x75,  /* [1078] */
    (xdc_Char)0x6e,  /* [1079] */
    (xdc_Char)0x74,  /* [1080] */
    (xdc_Char)0x20,  /* [1081] */
    (xdc_Char)0x68,  /* [1082] */
    (xdc_Char)0x61,  /* [1083] */
    (xdc_Char)0x73,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x65,  /* [1086] */
    (xdc_Char)0x78,  /* [1087] */
    (xdc_Char)0x63,  /* [1088] */
    (xdc_Char)0x65,  /* [1089] */
    (xdc_Char)0x65,  /* [1090] */
    (xdc_Char)0x64,  /* [1091] */
    (xdc_Char)0x65,  /* [1092] */
    (xdc_Char)0x64,  /* [1093] */
    (xdc_Char)0x20,  /* [1094] */
    (xdc_Char)0x36,  /* [1095] */
    (xdc_Char)0x35,  /* [1096] */
    (xdc_Char)0x35,  /* [1097] */
    (xdc_Char)0x33,  /* [1098] */
    (xdc_Char)0x35,  /* [1099] */
    (xdc_Char)0x20,  /* [1100] */
    (xdc_Char)0x61,  /* [1101] */
    (xdc_Char)0x6e,  /* [1102] */
    (xdc_Char)0x64,  /* [1103] */
    (xdc_Char)0x20,  /* [1104] */
    (xdc_Char)0x72,  /* [1105] */
    (xdc_Char)0x6f,  /* [1106] */
    (xdc_Char)0x6c,  /* [1107] */
    (xdc_Char)0x6c,  /* [1108] */
    (xdc_Char)0x65,  /* [1109] */
    (xdc_Char)0x64,  /* [1110] */
    (xdc_Char)0x20,  /* [1111] */
    (xdc_Char)0x6f,  /* [1112] */
    (xdc_Char)0x76,  /* [1113] */
    (xdc_Char)0x65,  /* [1114] */
    (xdc_Char)0x72,  /* [1115] */
    (xdc_Char)0x2e,  /* [1116] */
    (xdc_Char)0x0,  /* [1117] */
    (xdc_Char)0x41,  /* [1118] */
    (xdc_Char)0x5f,  /* [1119] */
    (xdc_Char)0x70,  /* [1120] */
    (xdc_Char)0x65,  /* [1121] */
    (xdc_Char)0x6e,  /* [1122] */
    (xdc_Char)0x64,  /* [1123] */
    (xdc_Char)0x54,  /* [1124] */
    (xdc_Char)0x61,  /* [1125] */
    (xdc_Char)0x73,  /* [1126] */
    (xdc_Char)0x6b,  /* [1127] */
    (xdc_Char)0x44,  /* [1128] */
    (xdc_Char)0x69,  /* [1129] */
    (xdc_Char)0x73,  /* [1130] */
    (xdc_Char)0x61,  /* [1131] */
    (xdc_Char)0x62,  /* [1132] */
    (xdc_Char)0x6c,  /* [1133] */
    (xdc_Char)0x65,  /* [1134] */
    (xdc_Char)0x64,  /* [1135] */
    (xdc_Char)0x3a,  /* [1136] */
    (xdc_Char)0x20,  /* [1137] */
    (xdc_Char)0x43,  /* [1138] */
    (xdc_Char)0x61,  /* [1139] */
    (xdc_Char)0x6e,  /* [1140] */
    (xdc_Char)0x6e,  /* [1141] */
    (xdc_Char)0x6f,  /* [1142] */
    (xdc_Char)0x74,  /* [1143] */
    (xdc_Char)0x20,  /* [1144] */
    (xdc_Char)0x63,  /* [1145] */
    (xdc_Char)0x61,  /* [1146] */
    (xdc_Char)0x6c,  /* [1147] */
    (xdc_Char)0x6c,  /* [1148] */
    (xdc_Char)0x20,  /* [1149] */
    (xdc_Char)0x53,  /* [1150] */
    (xdc_Char)0x65,  /* [1151] */
    (xdc_Char)0x6d,  /* [1152] */
    (xdc_Char)0x61,  /* [1153] */
    (xdc_Char)0x70,  /* [1154] */
    (xdc_Char)0x68,  /* [1155] */
    (xdc_Char)0x6f,  /* [1156] */
    (xdc_Char)0x72,  /* [1157] */
    (xdc_Char)0x65,  /* [1158] */
    (xdc_Char)0x5f,  /* [1159] */
    (xdc_Char)0x70,  /* [1160] */
    (xdc_Char)0x65,  /* [1161] */
    (xdc_Char)0x6e,  /* [1162] */
    (xdc_Char)0x64,  /* [1163] */
    (xdc_Char)0x28,  /* [1164] */
    (xdc_Char)0x29,  /* [1165] */
    (xdc_Char)0x20,  /* [1166] */
    (xdc_Char)0x77,  /* [1167] */
    (xdc_Char)0x68,  /* [1168] */
    (xdc_Char)0x69,  /* [1169] */
    (xdc_Char)0x6c,  /* [1170] */
    (xdc_Char)0x65,  /* [1171] */
    (xdc_Char)0x20,  /* [1172] */
    (xdc_Char)0x74,  /* [1173] */
    (xdc_Char)0x68,  /* [1174] */
    (xdc_Char)0x65,  /* [1175] */
    (xdc_Char)0x20,  /* [1176] */
    (xdc_Char)0x54,  /* [1177] */
    (xdc_Char)0x61,  /* [1178] */
    (xdc_Char)0x73,  /* [1179] */
    (xdc_Char)0x6b,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x6f,  /* [1182] */
    (xdc_Char)0x72,  /* [1183] */
    (xdc_Char)0x20,  /* [1184] */
    (xdc_Char)0x53,  /* [1185] */
    (xdc_Char)0x77,  /* [1186] */
    (xdc_Char)0x69,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x73,  /* [1189] */
    (xdc_Char)0x63,  /* [1190] */
    (xdc_Char)0x68,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x64,  /* [1193] */
    (xdc_Char)0x75,  /* [1194] */
    (xdc_Char)0x6c,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x72,  /* [1197] */
    (xdc_Char)0x20,  /* [1198] */
    (xdc_Char)0x69,  /* [1199] */
    (xdc_Char)0x73,  /* [1200] */
    (xdc_Char)0x20,  /* [1201] */
    (xdc_Char)0x64,  /* [1202] */
    (xdc_Char)0x69,  /* [1203] */
    (xdc_Char)0x73,  /* [1204] */
    (xdc_Char)0x61,  /* [1205] */
    (xdc_Char)0x62,  /* [1206] */
    (xdc_Char)0x6c,  /* [1207] */
    (xdc_Char)0x65,  /* [1208] */
    (xdc_Char)0x64,  /* [1209] */
    (xdc_Char)0x2e,  /* [1210] */
    (xdc_Char)0x0,  /* [1211] */
    (xdc_Char)0x41,  /* [1212] */
    (xdc_Char)0x5f,  /* [1213] */
    (xdc_Char)0x73,  /* [1214] */
    (xdc_Char)0x77,  /* [1215] */
    (xdc_Char)0x69,  /* [1216] */
    (xdc_Char)0x44,  /* [1217] */
    (xdc_Char)0x69,  /* [1218] */
    (xdc_Char)0x73,  /* [1219] */
    (xdc_Char)0x61,  /* [1220] */
    (xdc_Char)0x62,  /* [1221] */
    (xdc_Char)0x6c,  /* [1222] */
    (xdc_Char)0x65,  /* [1223] */
    (xdc_Char)0x64,  /* [1224] */
    (xdc_Char)0x3a,  /* [1225] */
    (xdc_Char)0x20,  /* [1226] */
    (xdc_Char)0x43,  /* [1227] */
    (xdc_Char)0x61,  /* [1228] */
    (xdc_Char)0x6e,  /* [1229] */
    (xdc_Char)0x6e,  /* [1230] */
    (xdc_Char)0x6f,  /* [1231] */
    (xdc_Char)0x74,  /* [1232] */
    (xdc_Char)0x20,  /* [1233] */
    (xdc_Char)0x63,  /* [1234] */
    (xdc_Char)0x72,  /* [1235] */
    (xdc_Char)0x65,  /* [1236] */
    (xdc_Char)0x61,  /* [1237] */
    (xdc_Char)0x74,  /* [1238] */
    (xdc_Char)0x65,  /* [1239] */
    (xdc_Char)0x20,  /* [1240] */
    (xdc_Char)0x61,  /* [1241] */
    (xdc_Char)0x20,  /* [1242] */
    (xdc_Char)0x53,  /* [1243] */
    (xdc_Char)0x77,  /* [1244] */
    (xdc_Char)0x69,  /* [1245] */
    (xdc_Char)0x20,  /* [1246] */
    (xdc_Char)0x77,  /* [1247] */
    (xdc_Char)0x68,  /* [1248] */
    (xdc_Char)0x65,  /* [1249] */
    (xdc_Char)0x6e,  /* [1250] */
    (xdc_Char)0x20,  /* [1251] */
    (xdc_Char)0x53,  /* [1252] */
    (xdc_Char)0x77,  /* [1253] */
    (xdc_Char)0x69,  /* [1254] */
    (xdc_Char)0x20,  /* [1255] */
    (xdc_Char)0x69,  /* [1256] */
    (xdc_Char)0x73,  /* [1257] */
    (xdc_Char)0x20,  /* [1258] */
    (xdc_Char)0x64,  /* [1259] */
    (xdc_Char)0x69,  /* [1260] */
    (xdc_Char)0x73,  /* [1261] */
    (xdc_Char)0x61,  /* [1262] */
    (xdc_Char)0x62,  /* [1263] */
    (xdc_Char)0x6c,  /* [1264] */
    (xdc_Char)0x65,  /* [1265] */
    (xdc_Char)0x64,  /* [1266] */
    (xdc_Char)0x2e,  /* [1267] */
    (xdc_Char)0x0,  /* [1268] */
    (xdc_Char)0x41,  /* [1269] */
    (xdc_Char)0x5f,  /* [1270] */
    (xdc_Char)0x62,  /* [1271] */
    (xdc_Char)0x61,  /* [1272] */
    (xdc_Char)0x64,  /* [1273] */
    (xdc_Char)0x50,  /* [1274] */
    (xdc_Char)0x72,  /* [1275] */
    (xdc_Char)0x69,  /* [1276] */
    (xdc_Char)0x6f,  /* [1277] */
    (xdc_Char)0x72,  /* [1278] */
    (xdc_Char)0x69,  /* [1279] */
    (xdc_Char)0x74,  /* [1280] */
    (xdc_Char)0x79,  /* [1281] */
    (xdc_Char)0x3a,  /* [1282] */
    (xdc_Char)0x20,  /* [1283] */
    (xdc_Char)0x41,  /* [1284] */
    (xdc_Char)0x6e,  /* [1285] */
    (xdc_Char)0x20,  /* [1286] */
    (xdc_Char)0x69,  /* [1287] */
    (xdc_Char)0x6e,  /* [1288] */
    (xdc_Char)0x76,  /* [1289] */
    (xdc_Char)0x61,  /* [1290] */
    (xdc_Char)0x6c,  /* [1291] */
    (xdc_Char)0x69,  /* [1292] */
    (xdc_Char)0x64,  /* [1293] */
    (xdc_Char)0x20,  /* [1294] */
    (xdc_Char)0x53,  /* [1295] */
    (xdc_Char)0x77,  /* [1296] */
    (xdc_Char)0x69,  /* [1297] */
    (xdc_Char)0x20,  /* [1298] */
    (xdc_Char)0x70,  /* [1299] */
    (xdc_Char)0x72,  /* [1300] */
    (xdc_Char)0x69,  /* [1301] */
    (xdc_Char)0x6f,  /* [1302] */
    (xdc_Char)0x72,  /* [1303] */
    (xdc_Char)0x69,  /* [1304] */
    (xdc_Char)0x74,  /* [1305] */
    (xdc_Char)0x79,  /* [1306] */
    (xdc_Char)0x20,  /* [1307] */
    (xdc_Char)0x77,  /* [1308] */
    (xdc_Char)0x61,  /* [1309] */
    (xdc_Char)0x73,  /* [1310] */
    (xdc_Char)0x20,  /* [1311] */
    (xdc_Char)0x75,  /* [1312] */
    (xdc_Char)0x73,  /* [1313] */
    (xdc_Char)0x65,  /* [1314] */
    (xdc_Char)0x64,  /* [1315] */
    (xdc_Char)0x2e,  /* [1316] */
    (xdc_Char)0x0,  /* [1317] */
    (xdc_Char)0x41,  /* [1318] */
    (xdc_Char)0x5f,  /* [1319] */
    (xdc_Char)0x62,  /* [1320] */
    (xdc_Char)0x61,  /* [1321] */
    (xdc_Char)0x64,  /* [1322] */
    (xdc_Char)0x54,  /* [1323] */
    (xdc_Char)0x68,  /* [1324] */
    (xdc_Char)0x72,  /* [1325] */
    (xdc_Char)0x65,  /* [1326] */
    (xdc_Char)0x61,  /* [1327] */
    (xdc_Char)0x64,  /* [1328] */
    (xdc_Char)0x54,  /* [1329] */
    (xdc_Char)0x79,  /* [1330] */
    (xdc_Char)0x70,  /* [1331] */
    (xdc_Char)0x65,  /* [1332] */
    (xdc_Char)0x3a,  /* [1333] */
    (xdc_Char)0x20,  /* [1334] */
    (xdc_Char)0x43,  /* [1335] */
    (xdc_Char)0x61,  /* [1336] */
    (xdc_Char)0x6e,  /* [1337] */
    (xdc_Char)0x6e,  /* [1338] */
    (xdc_Char)0x6f,  /* [1339] */
    (xdc_Char)0x74,  /* [1340] */
    (xdc_Char)0x20,  /* [1341] */
    (xdc_Char)0x63,  /* [1342] */
    (xdc_Char)0x72,  /* [1343] */
    (xdc_Char)0x65,  /* [1344] */
    (xdc_Char)0x61,  /* [1345] */
    (xdc_Char)0x74,  /* [1346] */
    (xdc_Char)0x65,  /* [1347] */
    (xdc_Char)0x2f,  /* [1348] */
    (xdc_Char)0x64,  /* [1349] */
    (xdc_Char)0x65,  /* [1350] */
    (xdc_Char)0x6c,  /* [1351] */
    (xdc_Char)0x65,  /* [1352] */
    (xdc_Char)0x74,  /* [1353] */
    (xdc_Char)0x65,  /* [1354] */
    (xdc_Char)0x20,  /* [1355] */
    (xdc_Char)0x61,  /* [1356] */
    (xdc_Char)0x20,  /* [1357] */
    (xdc_Char)0x74,  /* [1358] */
    (xdc_Char)0x61,  /* [1359] */
    (xdc_Char)0x73,  /* [1360] */
    (xdc_Char)0x6b,  /* [1361] */
    (xdc_Char)0x20,  /* [1362] */
    (xdc_Char)0x66,  /* [1363] */
    (xdc_Char)0x72,  /* [1364] */
    (xdc_Char)0x6f,  /* [1365] */
    (xdc_Char)0x6d,  /* [1366] */
    (xdc_Char)0x20,  /* [1367] */
    (xdc_Char)0x48,  /* [1368] */
    (xdc_Char)0x77,  /* [1369] */
    (xdc_Char)0x69,  /* [1370] */
    (xdc_Char)0x20,  /* [1371] */
    (xdc_Char)0x6f,  /* [1372] */
    (xdc_Char)0x72,  /* [1373] */
    (xdc_Char)0x20,  /* [1374] */
    (xdc_Char)0x53,  /* [1375] */
    (xdc_Char)0x77,  /* [1376] */
    (xdc_Char)0x69,  /* [1377] */
    (xdc_Char)0x20,  /* [1378] */
    (xdc_Char)0x74,  /* [1379] */
    (xdc_Char)0x68,  /* [1380] */
    (xdc_Char)0x72,  /* [1381] */
    (xdc_Char)0x65,  /* [1382] */
    (xdc_Char)0x61,  /* [1383] */
    (xdc_Char)0x64,  /* [1384] */
    (xdc_Char)0x2e,  /* [1385] */
    (xdc_Char)0x0,  /* [1386] */
    (xdc_Char)0x41,  /* [1387] */
    (xdc_Char)0x5f,  /* [1388] */
    (xdc_Char)0x62,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x64,  /* [1391] */
    (xdc_Char)0x54,  /* [1392] */
    (xdc_Char)0x61,  /* [1393] */
    (xdc_Char)0x73,  /* [1394] */
    (xdc_Char)0x6b,  /* [1395] */
    (xdc_Char)0x53,  /* [1396] */
    (xdc_Char)0x74,  /* [1397] */
    (xdc_Char)0x61,  /* [1398] */
    (xdc_Char)0x74,  /* [1399] */
    (xdc_Char)0x65,  /* [1400] */
    (xdc_Char)0x3a,  /* [1401] */
    (xdc_Char)0x20,  /* [1402] */
    (xdc_Char)0x43,  /* [1403] */
    (xdc_Char)0x61,  /* [1404] */
    (xdc_Char)0x6e,  /* [1405] */
    (xdc_Char)0x27,  /* [1406] */
    (xdc_Char)0x74,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x64,  /* [1409] */
    (xdc_Char)0x65,  /* [1410] */
    (xdc_Char)0x6c,  /* [1411] */
    (xdc_Char)0x65,  /* [1412] */
    (xdc_Char)0x74,  /* [1413] */
    (xdc_Char)0x65,  /* [1414] */
    (xdc_Char)0x20,  /* [1415] */
    (xdc_Char)0x61,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x74,  /* [1418] */
    (xdc_Char)0x61,  /* [1419] */
    (xdc_Char)0x73,  /* [1420] */
    (xdc_Char)0x6b,  /* [1421] */
    (xdc_Char)0x20,  /* [1422] */
    (xdc_Char)0x69,  /* [1423] */
    (xdc_Char)0x6e,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x52,  /* [1426] */
    (xdc_Char)0x55,  /* [1427] */
    (xdc_Char)0x4e,  /* [1428] */
    (xdc_Char)0x4e,  /* [1429] */
    (xdc_Char)0x49,  /* [1430] */
    (xdc_Char)0x4e,  /* [1431] */
    (xdc_Char)0x47,  /* [1432] */
    (xdc_Char)0x20,  /* [1433] */
    (xdc_Char)0x73,  /* [1434] */
    (xdc_Char)0x74,  /* [1435] */
    (xdc_Char)0x61,  /* [1436] */
    (xdc_Char)0x74,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x2e,  /* [1439] */
    (xdc_Char)0x0,  /* [1440] */
    (xdc_Char)0x41,  /* [1441] */
    (xdc_Char)0x5f,  /* [1442] */
    (xdc_Char)0x6e,  /* [1443] */
    (xdc_Char)0x6f,  /* [1444] */
    (xdc_Char)0x50,  /* [1445] */
    (xdc_Char)0x65,  /* [1446] */
    (xdc_Char)0x6e,  /* [1447] */
    (xdc_Char)0x64,  /* [1448] */
    (xdc_Char)0x45,  /* [1449] */
    (xdc_Char)0x6c,  /* [1450] */
    (xdc_Char)0x65,  /* [1451] */
    (xdc_Char)0x6d,  /* [1452] */
    (xdc_Char)0x3a,  /* [1453] */
    (xdc_Char)0x20,  /* [1454] */
    (xdc_Char)0x4e,  /* [1455] */
    (xdc_Char)0x6f,  /* [1456] */
    (xdc_Char)0x74,  /* [1457] */
    (xdc_Char)0x20,  /* [1458] */
    (xdc_Char)0x65,  /* [1459] */
    (xdc_Char)0x6e,  /* [1460] */
    (xdc_Char)0x6f,  /* [1461] */
    (xdc_Char)0x75,  /* [1462] */
    (xdc_Char)0x67,  /* [1463] */
    (xdc_Char)0x68,  /* [1464] */
    (xdc_Char)0x20,  /* [1465] */
    (xdc_Char)0x69,  /* [1466] */
    (xdc_Char)0x6e,  /* [1467] */
    (xdc_Char)0x66,  /* [1468] */
    (xdc_Char)0x6f,  /* [1469] */
    (xdc_Char)0x20,  /* [1470] */
    (xdc_Char)0x74,  /* [1471] */
    (xdc_Char)0x6f,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x64,  /* [1474] */
    (xdc_Char)0x65,  /* [1475] */
    (xdc_Char)0x6c,  /* [1476] */
    (xdc_Char)0x65,  /* [1477] */
    (xdc_Char)0x74,  /* [1478] */
    (xdc_Char)0x65,  /* [1479] */
    (xdc_Char)0x20,  /* [1480] */
    (xdc_Char)0x42,  /* [1481] */
    (xdc_Char)0x4c,  /* [1482] */
    (xdc_Char)0x4f,  /* [1483] */
    (xdc_Char)0x43,  /* [1484] */
    (xdc_Char)0x4b,  /* [1485] */
    (xdc_Char)0x45,  /* [1486] */
    (xdc_Char)0x44,  /* [1487] */
    (xdc_Char)0x20,  /* [1488] */
    (xdc_Char)0x74,  /* [1489] */
    (xdc_Char)0x61,  /* [1490] */
    (xdc_Char)0x73,  /* [1491] */
    (xdc_Char)0x6b,  /* [1492] */
    (xdc_Char)0x2e,  /* [1493] */
    (xdc_Char)0x0,  /* [1494] */
    (xdc_Char)0x41,  /* [1495] */
    (xdc_Char)0x5f,  /* [1496] */
    (xdc_Char)0x74,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x73,  /* [1499] */
    (xdc_Char)0x6b,  /* [1500] */
    (xdc_Char)0x44,  /* [1501] */
    (xdc_Char)0x69,  /* [1502] */
    (xdc_Char)0x73,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x62,  /* [1505] */
    (xdc_Char)0x6c,  /* [1506] */
    (xdc_Char)0x65,  /* [1507] */
    (xdc_Char)0x64,  /* [1508] */
    (xdc_Char)0x3a,  /* [1509] */
    (xdc_Char)0x20,  /* [1510] */
    (xdc_Char)0x43,  /* [1511] */
    (xdc_Char)0x61,  /* [1512] */
    (xdc_Char)0x6e,  /* [1513] */
    (xdc_Char)0x6e,  /* [1514] */
    (xdc_Char)0x6f,  /* [1515] */
    (xdc_Char)0x74,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x63,  /* [1518] */
    (xdc_Char)0x72,  /* [1519] */
    (xdc_Char)0x65,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x74,  /* [1522] */
    (xdc_Char)0x65,  /* [1523] */
    (xdc_Char)0x20,  /* [1524] */
    (xdc_Char)0x61,  /* [1525] */
    (xdc_Char)0x20,  /* [1526] */
    (xdc_Char)0x74,  /* [1527] */
    (xdc_Char)0x61,  /* [1528] */
    (xdc_Char)0x73,  /* [1529] */
    (xdc_Char)0x6b,  /* [1530] */
    (xdc_Char)0x20,  /* [1531] */
    (xdc_Char)0x77,  /* [1532] */
    (xdc_Char)0x68,  /* [1533] */
    (xdc_Char)0x65,  /* [1534] */
    (xdc_Char)0x6e,  /* [1535] */
    (xdc_Char)0x20,  /* [1536] */
    (xdc_Char)0x74,  /* [1537] */
    (xdc_Char)0x61,  /* [1538] */
    (xdc_Char)0x73,  /* [1539] */
    (xdc_Char)0x6b,  /* [1540] */
    (xdc_Char)0x69,  /* [1541] */
    (xdc_Char)0x6e,  /* [1542] */
    (xdc_Char)0x67,  /* [1543] */
    (xdc_Char)0x20,  /* [1544] */
    (xdc_Char)0x69,  /* [1545] */
    (xdc_Char)0x73,  /* [1546] */
    (xdc_Char)0x20,  /* [1547] */
    (xdc_Char)0x64,  /* [1548] */
    (xdc_Char)0x69,  /* [1549] */
    (xdc_Char)0x73,  /* [1550] */
    (xdc_Char)0x61,  /* [1551] */
    (xdc_Char)0x62,  /* [1552] */
    (xdc_Char)0x6c,  /* [1553] */
    (xdc_Char)0x65,  /* [1554] */
    (xdc_Char)0x64,  /* [1555] */
    (xdc_Char)0x2e,  /* [1556] */
    (xdc_Char)0x0,  /* [1557] */
    (xdc_Char)0x41,  /* [1558] */
    (xdc_Char)0x5f,  /* [1559] */
    (xdc_Char)0x62,  /* [1560] */
    (xdc_Char)0x61,  /* [1561] */
    (xdc_Char)0x64,  /* [1562] */
    (xdc_Char)0x50,  /* [1563] */
    (xdc_Char)0x72,  /* [1564] */
    (xdc_Char)0x69,  /* [1565] */
    (xdc_Char)0x6f,  /* [1566] */
    (xdc_Char)0x72,  /* [1567] */
    (xdc_Char)0x69,  /* [1568] */
    (xdc_Char)0x74,  /* [1569] */
    (xdc_Char)0x79,  /* [1570] */
    (xdc_Char)0x3a,  /* [1571] */
    (xdc_Char)0x20,  /* [1572] */
    (xdc_Char)0x41,  /* [1573] */
    (xdc_Char)0x6e,  /* [1574] */
    (xdc_Char)0x20,  /* [1575] */
    (xdc_Char)0x69,  /* [1576] */
    (xdc_Char)0x6e,  /* [1577] */
    (xdc_Char)0x76,  /* [1578] */
    (xdc_Char)0x61,  /* [1579] */
    (xdc_Char)0x6c,  /* [1580] */
    (xdc_Char)0x69,  /* [1581] */
    (xdc_Char)0x64,  /* [1582] */
    (xdc_Char)0x20,  /* [1583] */
    (xdc_Char)0x74,  /* [1584] */
    (xdc_Char)0x61,  /* [1585] */
    (xdc_Char)0x73,  /* [1586] */
    (xdc_Char)0x6b,  /* [1587] */
    (xdc_Char)0x20,  /* [1588] */
    (xdc_Char)0x70,  /* [1589] */
    (xdc_Char)0x72,  /* [1590] */
    (xdc_Char)0x69,  /* [1591] */
    (xdc_Char)0x6f,  /* [1592] */
    (xdc_Char)0x72,  /* [1593] */
    (xdc_Char)0x69,  /* [1594] */
    (xdc_Char)0x74,  /* [1595] */
    (xdc_Char)0x79,  /* [1596] */
    (xdc_Char)0x20,  /* [1597] */
    (xdc_Char)0x77,  /* [1598] */
    (xdc_Char)0x61,  /* [1599] */
    (xdc_Char)0x73,  /* [1600] */
    (xdc_Char)0x20,  /* [1601] */
    (xdc_Char)0x75,  /* [1602] */
    (xdc_Char)0x73,  /* [1603] */
    (xdc_Char)0x65,  /* [1604] */
    (xdc_Char)0x64,  /* [1605] */
    (xdc_Char)0x2e,  /* [1606] */
    (xdc_Char)0x0,  /* [1607] */
    (xdc_Char)0x41,  /* [1608] */
    (xdc_Char)0x5f,  /* [1609] */
    (xdc_Char)0x62,  /* [1610] */
    (xdc_Char)0x61,  /* [1611] */
    (xdc_Char)0x64,  /* [1612] */
    (xdc_Char)0x54,  /* [1613] */
    (xdc_Char)0x69,  /* [1614] */
    (xdc_Char)0x6d,  /* [1615] */
    (xdc_Char)0x65,  /* [1616] */
    (xdc_Char)0x6f,  /* [1617] */
    (xdc_Char)0x75,  /* [1618] */
    (xdc_Char)0x74,  /* [1619] */
    (xdc_Char)0x3a,  /* [1620] */
    (xdc_Char)0x20,  /* [1621] */
    (xdc_Char)0x43,  /* [1622] */
    (xdc_Char)0x61,  /* [1623] */
    (xdc_Char)0x6e,  /* [1624] */
    (xdc_Char)0x27,  /* [1625] */
    (xdc_Char)0x74,  /* [1626] */
    (xdc_Char)0x20,  /* [1627] */
    (xdc_Char)0x73,  /* [1628] */
    (xdc_Char)0x6c,  /* [1629] */
    (xdc_Char)0x65,  /* [1630] */
    (xdc_Char)0x65,  /* [1631] */
    (xdc_Char)0x70,  /* [1632] */
    (xdc_Char)0x20,  /* [1633] */
    (xdc_Char)0x46,  /* [1634] */
    (xdc_Char)0x4f,  /* [1635] */
    (xdc_Char)0x52,  /* [1636] */
    (xdc_Char)0x45,  /* [1637] */
    (xdc_Char)0x56,  /* [1638] */
    (xdc_Char)0x45,  /* [1639] */
    (xdc_Char)0x52,  /* [1640] */
    (xdc_Char)0x2e,  /* [1641] */
    (xdc_Char)0x0,  /* [1642] */
    (xdc_Char)0x41,  /* [1643] */
    (xdc_Char)0x5f,  /* [1644] */
    (xdc_Char)0x62,  /* [1645] */
    (xdc_Char)0x61,  /* [1646] */
    (xdc_Char)0x64,  /* [1647] */
    (xdc_Char)0x41,  /* [1648] */
    (xdc_Char)0x66,  /* [1649] */
    (xdc_Char)0x66,  /* [1650] */
    (xdc_Char)0x69,  /* [1651] */
    (xdc_Char)0x6e,  /* [1652] */
    (xdc_Char)0x69,  /* [1653] */
    (xdc_Char)0x74,  /* [1654] */
    (xdc_Char)0x79,  /* [1655] */
    (xdc_Char)0x3a,  /* [1656] */
    (xdc_Char)0x20,  /* [1657] */
    (xdc_Char)0x49,  /* [1658] */
    (xdc_Char)0x6e,  /* [1659] */
    (xdc_Char)0x76,  /* [1660] */
    (xdc_Char)0x61,  /* [1661] */
    (xdc_Char)0x6c,  /* [1662] */
    (xdc_Char)0x69,  /* [1663] */
    (xdc_Char)0x64,  /* [1664] */
    (xdc_Char)0x20,  /* [1665] */
    (xdc_Char)0x61,  /* [1666] */
    (xdc_Char)0x66,  /* [1667] */
    (xdc_Char)0x66,  /* [1668] */
    (xdc_Char)0x69,  /* [1669] */
    (xdc_Char)0x6e,  /* [1670] */
    (xdc_Char)0x69,  /* [1671] */
    (xdc_Char)0x74,  /* [1672] */
    (xdc_Char)0x79,  /* [1673] */
    (xdc_Char)0x2e,  /* [1674] */
    (xdc_Char)0x0,  /* [1675] */
    (xdc_Char)0x41,  /* [1676] */
    (xdc_Char)0x5f,  /* [1677] */
    (xdc_Char)0x73,  /* [1678] */
    (xdc_Char)0x6c,  /* [1679] */
    (xdc_Char)0x65,  /* [1680] */
    (xdc_Char)0x65,  /* [1681] */
    (xdc_Char)0x70,  /* [1682] */
    (xdc_Char)0x54,  /* [1683] */
    (xdc_Char)0x61,  /* [1684] */
    (xdc_Char)0x73,  /* [1685] */
    (xdc_Char)0x6b,  /* [1686] */
    (xdc_Char)0x44,  /* [1687] */
    (xdc_Char)0x69,  /* [1688] */
    (xdc_Char)0x73,  /* [1689] */
    (xdc_Char)0x61,  /* [1690] */
    (xdc_Char)0x62,  /* [1691] */
    (xdc_Char)0x6c,  /* [1692] */
    (xdc_Char)0x65,  /* [1693] */
    (xdc_Char)0x64,  /* [1694] */
    (xdc_Char)0x3a,  /* [1695] */
    (xdc_Char)0x20,  /* [1696] */
    (xdc_Char)0x43,  /* [1697] */
    (xdc_Char)0x61,  /* [1698] */
    (xdc_Char)0x6e,  /* [1699] */
    (xdc_Char)0x6e,  /* [1700] */
    (xdc_Char)0x6f,  /* [1701] */
    (xdc_Char)0x74,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x63,  /* [1704] */
    (xdc_Char)0x61,  /* [1705] */
    (xdc_Char)0x6c,  /* [1706] */
    (xdc_Char)0x6c,  /* [1707] */
    (xdc_Char)0x20,  /* [1708] */
    (xdc_Char)0x54,  /* [1709] */
    (xdc_Char)0x61,  /* [1710] */
    (xdc_Char)0x73,  /* [1711] */
    (xdc_Char)0x6b,  /* [1712] */
    (xdc_Char)0x5f,  /* [1713] */
    (xdc_Char)0x73,  /* [1714] */
    (xdc_Char)0x6c,  /* [1715] */
    (xdc_Char)0x65,  /* [1716] */
    (xdc_Char)0x65,  /* [1717] */
    (xdc_Char)0x70,  /* [1718] */
    (xdc_Char)0x28,  /* [1719] */
    (xdc_Char)0x29,  /* [1720] */
    (xdc_Char)0x20,  /* [1721] */
    (xdc_Char)0x77,  /* [1722] */
    (xdc_Char)0x68,  /* [1723] */
    (xdc_Char)0x69,  /* [1724] */
    (xdc_Char)0x6c,  /* [1725] */
    (xdc_Char)0x65,  /* [1726] */
    (xdc_Char)0x20,  /* [1727] */
    (xdc_Char)0x74,  /* [1728] */
    (xdc_Char)0x68,  /* [1729] */
    (xdc_Char)0x65,  /* [1730] */
    (xdc_Char)0x20,  /* [1731] */
    (xdc_Char)0x54,  /* [1732] */
    (xdc_Char)0x61,  /* [1733] */
    (xdc_Char)0x73,  /* [1734] */
    (xdc_Char)0x6b,  /* [1735] */
    (xdc_Char)0x20,  /* [1736] */
    (xdc_Char)0x73,  /* [1737] */
    (xdc_Char)0x63,  /* [1738] */
    (xdc_Char)0x68,  /* [1739] */
    (xdc_Char)0x65,  /* [1740] */
    (xdc_Char)0x64,  /* [1741] */
    (xdc_Char)0x75,  /* [1742] */
    (xdc_Char)0x6c,  /* [1743] */
    (xdc_Char)0x65,  /* [1744] */
    (xdc_Char)0x72,  /* [1745] */
    (xdc_Char)0x20,  /* [1746] */
    (xdc_Char)0x69,  /* [1747] */
    (xdc_Char)0x73,  /* [1748] */
    (xdc_Char)0x20,  /* [1749] */
    (xdc_Char)0x64,  /* [1750] */
    (xdc_Char)0x69,  /* [1751] */
    (xdc_Char)0x73,  /* [1752] */
    (xdc_Char)0x61,  /* [1753] */
    (xdc_Char)0x62,  /* [1754] */
    (xdc_Char)0x6c,  /* [1755] */
    (xdc_Char)0x65,  /* [1756] */
    (xdc_Char)0x64,  /* [1757] */
    (xdc_Char)0x2e,  /* [1758] */
    (xdc_Char)0x0,  /* [1759] */
    (xdc_Char)0x41,  /* [1760] */
    (xdc_Char)0x5f,  /* [1761] */
    (xdc_Char)0x69,  /* [1762] */
    (xdc_Char)0x6e,  /* [1763] */
    (xdc_Char)0x76,  /* [1764] */
    (xdc_Char)0x61,  /* [1765] */
    (xdc_Char)0x6c,  /* [1766] */
    (xdc_Char)0x69,  /* [1767] */
    (xdc_Char)0x64,  /* [1768] */
    (xdc_Char)0x43,  /* [1769] */
    (xdc_Char)0x6f,  /* [1770] */
    (xdc_Char)0x72,  /* [1771] */
    (xdc_Char)0x65,  /* [1772] */
    (xdc_Char)0x49,  /* [1773] */
    (xdc_Char)0x64,  /* [1774] */
    (xdc_Char)0x3a,  /* [1775] */
    (xdc_Char)0x20,  /* [1776] */
    (xdc_Char)0x43,  /* [1777] */
    (xdc_Char)0x61,  /* [1778] */
    (xdc_Char)0x6e,  /* [1779] */
    (xdc_Char)0x6e,  /* [1780] */
    (xdc_Char)0x6f,  /* [1781] */
    (xdc_Char)0x74,  /* [1782] */
    (xdc_Char)0x20,  /* [1783] */
    (xdc_Char)0x70,  /* [1784] */
    (xdc_Char)0x61,  /* [1785] */
    (xdc_Char)0x73,  /* [1786] */
    (xdc_Char)0x73,  /* [1787] */
    (xdc_Char)0x20,  /* [1788] */
    (xdc_Char)0x61,  /* [1789] */
    (xdc_Char)0x20,  /* [1790] */
    (xdc_Char)0x6e,  /* [1791] */
    (xdc_Char)0x6f,  /* [1792] */
    (xdc_Char)0x6e,  /* [1793] */
    (xdc_Char)0x2d,  /* [1794] */
    (xdc_Char)0x7a,  /* [1795] */
    (xdc_Char)0x65,  /* [1796] */
    (xdc_Char)0x72,  /* [1797] */
    (xdc_Char)0x6f,  /* [1798] */
    (xdc_Char)0x20,  /* [1799] */
    (xdc_Char)0x43,  /* [1800] */
    (xdc_Char)0x6f,  /* [1801] */
    (xdc_Char)0x72,  /* [1802] */
    (xdc_Char)0x65,  /* [1803] */
    (xdc_Char)0x49,  /* [1804] */
    (xdc_Char)0x64,  /* [1805] */
    (xdc_Char)0x20,  /* [1806] */
    (xdc_Char)0x69,  /* [1807] */
    (xdc_Char)0x6e,  /* [1808] */
    (xdc_Char)0x20,  /* [1809] */
    (xdc_Char)0x61,  /* [1810] */
    (xdc_Char)0x20,  /* [1811] */
    (xdc_Char)0x6e,  /* [1812] */
    (xdc_Char)0x6f,  /* [1813] */
    (xdc_Char)0x6e,  /* [1814] */
    (xdc_Char)0x2d,  /* [1815] */
    (xdc_Char)0x53,  /* [1816] */
    (xdc_Char)0x4d,  /* [1817] */
    (xdc_Char)0x50,  /* [1818] */
    (xdc_Char)0x20,  /* [1819] */
    (xdc_Char)0x61,  /* [1820] */
    (xdc_Char)0x70,  /* [1821] */
    (xdc_Char)0x70,  /* [1822] */
    (xdc_Char)0x6c,  /* [1823] */
    (xdc_Char)0x69,  /* [1824] */
    (xdc_Char)0x63,  /* [1825] */
    (xdc_Char)0x61,  /* [1826] */
    (xdc_Char)0x74,  /* [1827] */
    (xdc_Char)0x69,  /* [1828] */
    (xdc_Char)0x6f,  /* [1829] */
    (xdc_Char)0x6e,  /* [1830] */
    (xdc_Char)0x2e,  /* [1831] */
    (xdc_Char)0x0,  /* [1832] */
    (xdc_Char)0x41,  /* [1833] */
    (xdc_Char)0x5f,  /* [1834] */
    (xdc_Char)0x7a,  /* [1835] */
    (xdc_Char)0x65,  /* [1836] */
    (xdc_Char)0x72,  /* [1837] */
    (xdc_Char)0x6f,  /* [1838] */
    (xdc_Char)0x54,  /* [1839] */
    (xdc_Char)0x69,  /* [1840] */
    (xdc_Char)0x6d,  /* [1841] */
    (xdc_Char)0x65,  /* [1842] */
    (xdc_Char)0x6f,  /* [1843] */
    (xdc_Char)0x75,  /* [1844] */
    (xdc_Char)0x74,  /* [1845] */
    (xdc_Char)0x3a,  /* [1846] */
    (xdc_Char)0x20,  /* [1847] */
    (xdc_Char)0x54,  /* [1848] */
    (xdc_Char)0x69,  /* [1849] */
    (xdc_Char)0x6d,  /* [1850] */
    (xdc_Char)0x65,  /* [1851] */
    (xdc_Char)0x6f,  /* [1852] */
    (xdc_Char)0x75,  /* [1853] */
    (xdc_Char)0x74,  /* [1854] */
    (xdc_Char)0x20,  /* [1855] */
    (xdc_Char)0x76,  /* [1856] */
    (xdc_Char)0x61,  /* [1857] */
    (xdc_Char)0x6c,  /* [1858] */
    (xdc_Char)0x75,  /* [1859] */
    (xdc_Char)0x65,  /* [1860] */
    (xdc_Char)0x20,  /* [1861] */
    (xdc_Char)0x61,  /* [1862] */
    (xdc_Char)0x6e,  /* [1863] */
    (xdc_Char)0x6e,  /* [1864] */
    (xdc_Char)0x6f,  /* [1865] */
    (xdc_Char)0x74,  /* [1866] */
    (xdc_Char)0x20,  /* [1867] */
    (xdc_Char)0x62,  /* [1868] */
    (xdc_Char)0x65,  /* [1869] */
    (xdc_Char)0x20,  /* [1870] */
    (xdc_Char)0x7a,  /* [1871] */
    (xdc_Char)0x65,  /* [1872] */
    (xdc_Char)0x72,  /* [1873] */
    (xdc_Char)0x6f,  /* [1874] */
    (xdc_Char)0x0,  /* [1875] */
    (xdc_Char)0x41,  /* [1876] */
    (xdc_Char)0x5f,  /* [1877] */
    (xdc_Char)0x69,  /* [1878] */
    (xdc_Char)0x6e,  /* [1879] */
    (xdc_Char)0x76,  /* [1880] */
    (xdc_Char)0x61,  /* [1881] */
    (xdc_Char)0x6c,  /* [1882] */
    (xdc_Char)0x69,  /* [1883] */
    (xdc_Char)0x64,  /* [1884] */
    (xdc_Char)0x4b,  /* [1885] */
    (xdc_Char)0x65,  /* [1886] */
    (xdc_Char)0x79,  /* [1887] */
    (xdc_Char)0x3a,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x74,  /* [1890] */
    (xdc_Char)0x68,  /* [1891] */
    (xdc_Char)0x65,  /* [1892] */
    (xdc_Char)0x20,  /* [1893] */
    (xdc_Char)0x6b,  /* [1894] */
    (xdc_Char)0x65,  /* [1895] */
    (xdc_Char)0x79,  /* [1896] */
    (xdc_Char)0x20,  /* [1897] */
    (xdc_Char)0x6d,  /* [1898] */
    (xdc_Char)0x75,  /* [1899] */
    (xdc_Char)0x73,  /* [1900] */
    (xdc_Char)0x74,  /* [1901] */
    (xdc_Char)0x20,  /* [1902] */
    (xdc_Char)0x62,  /* [1903] */
    (xdc_Char)0x65,  /* [1904] */
    (xdc_Char)0x20,  /* [1905] */
    (xdc_Char)0x73,  /* [1906] */
    (xdc_Char)0x65,  /* [1907] */
    (xdc_Char)0x74,  /* [1908] */
    (xdc_Char)0x20,  /* [1909] */
    (xdc_Char)0x74,  /* [1910] */
    (xdc_Char)0x6f,  /* [1911] */
    (xdc_Char)0x20,  /* [1912] */
    (xdc_Char)0x61,  /* [1913] */
    (xdc_Char)0x20,  /* [1914] */
    (xdc_Char)0x6e,  /* [1915] */
    (xdc_Char)0x6f,  /* [1916] */
    (xdc_Char)0x6e,  /* [1917] */
    (xdc_Char)0x2d,  /* [1918] */
    (xdc_Char)0x64,  /* [1919] */
    (xdc_Char)0x65,  /* [1920] */
    (xdc_Char)0x66,  /* [1921] */
    (xdc_Char)0x61,  /* [1922] */
    (xdc_Char)0x75,  /* [1923] */
    (xdc_Char)0x6c,  /* [1924] */
    (xdc_Char)0x74,  /* [1925] */
    (xdc_Char)0x20,  /* [1926] */
    (xdc_Char)0x76,  /* [1927] */
    (xdc_Char)0x61,  /* [1928] */
    (xdc_Char)0x6c,  /* [1929] */
    (xdc_Char)0x75,  /* [1930] */
    (xdc_Char)0x65,  /* [1931] */
    (xdc_Char)0x0,  /* [1932] */
    (xdc_Char)0x41,  /* [1933] */
    (xdc_Char)0x5f,  /* [1934] */
    (xdc_Char)0x62,  /* [1935] */
    (xdc_Char)0x61,  /* [1936] */
    (xdc_Char)0x64,  /* [1937] */
    (xdc_Char)0x43,  /* [1938] */
    (xdc_Char)0x6f,  /* [1939] */
    (xdc_Char)0x6e,  /* [1940] */
    (xdc_Char)0x74,  /* [1941] */
    (xdc_Char)0x65,  /* [1942] */
    (xdc_Char)0x78,  /* [1943] */
    (xdc_Char)0x74,  /* [1944] */
    (xdc_Char)0x3a,  /* [1945] */
    (xdc_Char)0x20,  /* [1946] */
    (xdc_Char)0x62,  /* [1947] */
    (xdc_Char)0x61,  /* [1948] */
    (xdc_Char)0x64,  /* [1949] */
    (xdc_Char)0x20,  /* [1950] */
    (xdc_Char)0x63,  /* [1951] */
    (xdc_Char)0x61,  /* [1952] */
    (xdc_Char)0x6c,  /* [1953] */
    (xdc_Char)0x6c,  /* [1954] */
    (xdc_Char)0x69,  /* [1955] */
    (xdc_Char)0x6e,  /* [1956] */
    (xdc_Char)0x67,  /* [1957] */
    (xdc_Char)0x20,  /* [1958] */
    (xdc_Char)0x63,  /* [1959] */
    (xdc_Char)0x6f,  /* [1960] */
    (xdc_Char)0x6e,  /* [1961] */
    (xdc_Char)0x74,  /* [1962] */
    (xdc_Char)0x65,  /* [1963] */
    (xdc_Char)0x78,  /* [1964] */
    (xdc_Char)0x74,  /* [1965] */
    (xdc_Char)0x2e,  /* [1966] */
    (xdc_Char)0x20,  /* [1967] */
    (xdc_Char)0x4d,  /* [1968] */
    (xdc_Char)0x61,  /* [1969] */
    (xdc_Char)0x79,  /* [1970] */
    (xdc_Char)0x20,  /* [1971] */
    (xdc_Char)0x6e,  /* [1972] */
    (xdc_Char)0x6f,  /* [1973] */
    (xdc_Char)0x74,  /* [1974] */
    (xdc_Char)0x20,  /* [1975] */
    (xdc_Char)0x62,  /* [1976] */
    (xdc_Char)0x65,  /* [1977] */
    (xdc_Char)0x20,  /* [1978] */
    (xdc_Char)0x65,  /* [1979] */
    (xdc_Char)0x6e,  /* [1980] */
    (xdc_Char)0x74,  /* [1981] */
    (xdc_Char)0x65,  /* [1982] */
    (xdc_Char)0x72,  /* [1983] */
    (xdc_Char)0x65,  /* [1984] */
    (xdc_Char)0x64,  /* [1985] */
    (xdc_Char)0x20,  /* [1986] */
    (xdc_Char)0x66,  /* [1987] */
    (xdc_Char)0x72,  /* [1988] */
    (xdc_Char)0x6f,  /* [1989] */
    (xdc_Char)0x6d,  /* [1990] */
    (xdc_Char)0x20,  /* [1991] */
    (xdc_Char)0x61,  /* [1992] */
    (xdc_Char)0x20,  /* [1993] */
    (xdc_Char)0x68,  /* [1994] */
    (xdc_Char)0x61,  /* [1995] */
    (xdc_Char)0x72,  /* [1996] */
    (xdc_Char)0x64,  /* [1997] */
    (xdc_Char)0x77,  /* [1998] */
    (xdc_Char)0x61,  /* [1999] */
    (xdc_Char)0x72,  /* [2000] */
    (xdc_Char)0x65,  /* [2001] */
    (xdc_Char)0x20,  /* [2002] */
    (xdc_Char)0x69,  /* [2003] */
    (xdc_Char)0x6e,  /* [2004] */
    (xdc_Char)0x74,  /* [2005] */
    (xdc_Char)0x65,  /* [2006] */
    (xdc_Char)0x72,  /* [2007] */
    (xdc_Char)0x72,  /* [2008] */
    (xdc_Char)0x75,  /* [2009] */
    (xdc_Char)0x70,  /* [2010] */
    (xdc_Char)0x74,  /* [2011] */
    (xdc_Char)0x20,  /* [2012] */
    (xdc_Char)0x74,  /* [2013] */
    (xdc_Char)0x68,  /* [2014] */
    (xdc_Char)0x72,  /* [2015] */
    (xdc_Char)0x65,  /* [2016] */
    (xdc_Char)0x61,  /* [2017] */
    (xdc_Char)0x64,  /* [2018] */
    (xdc_Char)0x2e,  /* [2019] */
    (xdc_Char)0x0,  /* [2020] */
    (xdc_Char)0x41,  /* [2021] */
    (xdc_Char)0x5f,  /* [2022] */
    (xdc_Char)0x62,  /* [2023] */
    (xdc_Char)0x61,  /* [2024] */
    (xdc_Char)0x64,  /* [2025] */
    (xdc_Char)0x43,  /* [2026] */
    (xdc_Char)0x6f,  /* [2027] */
    (xdc_Char)0x6e,  /* [2028] */
    (xdc_Char)0x74,  /* [2029] */
    (xdc_Char)0x65,  /* [2030] */
    (xdc_Char)0x78,  /* [2031] */
    (xdc_Char)0x74,  /* [2032] */
    (xdc_Char)0x3a,  /* [2033] */
    (xdc_Char)0x20,  /* [2034] */
    (xdc_Char)0x62,  /* [2035] */
    (xdc_Char)0x61,  /* [2036] */
    (xdc_Char)0x64,  /* [2037] */
    (xdc_Char)0x20,  /* [2038] */
    (xdc_Char)0x63,  /* [2039] */
    (xdc_Char)0x61,  /* [2040] */
    (xdc_Char)0x6c,  /* [2041] */
    (xdc_Char)0x6c,  /* [2042] */
    (xdc_Char)0x69,  /* [2043] */
    (xdc_Char)0x6e,  /* [2044] */
    (xdc_Char)0x67,  /* [2045] */
    (xdc_Char)0x20,  /* [2046] */
    (xdc_Char)0x63,  /* [2047] */
    (xdc_Char)0x6f,  /* [2048] */
    (xdc_Char)0x6e,  /* [2049] */
    (xdc_Char)0x74,  /* [2050] */
    (xdc_Char)0x65,  /* [2051] */
    (xdc_Char)0x78,  /* [2052] */
    (xdc_Char)0x74,  /* [2053] */
    (xdc_Char)0x2e,  /* [2054] */
    (xdc_Char)0x20,  /* [2055] */
    (xdc_Char)0x4d,  /* [2056] */
    (xdc_Char)0x61,  /* [2057] */
    (xdc_Char)0x79,  /* [2058] */
    (xdc_Char)0x20,  /* [2059] */
    (xdc_Char)0x6e,  /* [2060] */
    (xdc_Char)0x6f,  /* [2061] */
    (xdc_Char)0x74,  /* [2062] */
    (xdc_Char)0x20,  /* [2063] */
    (xdc_Char)0x62,  /* [2064] */
    (xdc_Char)0x65,  /* [2065] */
    (xdc_Char)0x20,  /* [2066] */
    (xdc_Char)0x65,  /* [2067] */
    (xdc_Char)0x6e,  /* [2068] */
    (xdc_Char)0x74,  /* [2069] */
    (xdc_Char)0x65,  /* [2070] */
    (xdc_Char)0x72,  /* [2071] */
    (xdc_Char)0x65,  /* [2072] */
    (xdc_Char)0x64,  /* [2073] */
    (xdc_Char)0x20,  /* [2074] */
    (xdc_Char)0x66,  /* [2075] */
    (xdc_Char)0x72,  /* [2076] */
    (xdc_Char)0x6f,  /* [2077] */
    (xdc_Char)0x6d,  /* [2078] */
    (xdc_Char)0x20,  /* [2079] */
    (xdc_Char)0x61,  /* [2080] */
    (xdc_Char)0x20,  /* [2081] */
    (xdc_Char)0x73,  /* [2082] */
    (xdc_Char)0x6f,  /* [2083] */
    (xdc_Char)0x66,  /* [2084] */
    (xdc_Char)0x74,  /* [2085] */
    (xdc_Char)0x77,  /* [2086] */
    (xdc_Char)0x61,  /* [2087] */
    (xdc_Char)0x72,  /* [2088] */
    (xdc_Char)0x65,  /* [2089] */
    (xdc_Char)0x20,  /* [2090] */
    (xdc_Char)0x6f,  /* [2091] */
    (xdc_Char)0x72,  /* [2092] */
    (xdc_Char)0x20,  /* [2093] */
    (xdc_Char)0x68,  /* [2094] */
    (xdc_Char)0x61,  /* [2095] */
    (xdc_Char)0x72,  /* [2096] */
    (xdc_Char)0x64,  /* [2097] */
    (xdc_Char)0x77,  /* [2098] */
    (xdc_Char)0x61,  /* [2099] */
    (xdc_Char)0x72,  /* [2100] */
    (xdc_Char)0x65,  /* [2101] */
    (xdc_Char)0x20,  /* [2102] */
    (xdc_Char)0x69,  /* [2103] */
    (xdc_Char)0x6e,  /* [2104] */
    (xdc_Char)0x74,  /* [2105] */
    (xdc_Char)0x65,  /* [2106] */
    (xdc_Char)0x72,  /* [2107] */
    (xdc_Char)0x72,  /* [2108] */
    (xdc_Char)0x75,  /* [2109] */
    (xdc_Char)0x70,  /* [2110] */
    (xdc_Char)0x74,  /* [2111] */
    (xdc_Char)0x20,  /* [2112] */
    (xdc_Char)0x74,  /* [2113] */
    (xdc_Char)0x68,  /* [2114] */
    (xdc_Char)0x72,  /* [2115] */
    (xdc_Char)0x65,  /* [2116] */
    (xdc_Char)0x61,  /* [2117] */
    (xdc_Char)0x64,  /* [2118] */
    (xdc_Char)0x2e,  /* [2119] */
    (xdc_Char)0x0,  /* [2120] */
    (xdc_Char)0x41,  /* [2121] */
    (xdc_Char)0x5f,  /* [2122] */
    (xdc_Char)0x62,  /* [2123] */
    (xdc_Char)0x61,  /* [2124] */
    (xdc_Char)0x64,  /* [2125] */
    (xdc_Char)0x43,  /* [2126] */
    (xdc_Char)0x6f,  /* [2127] */
    (xdc_Char)0x6e,  /* [2128] */
    (xdc_Char)0x74,  /* [2129] */
    (xdc_Char)0x65,  /* [2130] */
    (xdc_Char)0x78,  /* [2131] */
    (xdc_Char)0x74,  /* [2132] */
    (xdc_Char)0x3a,  /* [2133] */
    (xdc_Char)0x20,  /* [2134] */
    (xdc_Char)0x62,  /* [2135] */
    (xdc_Char)0x61,  /* [2136] */
    (xdc_Char)0x64,  /* [2137] */
    (xdc_Char)0x20,  /* [2138] */
    (xdc_Char)0x63,  /* [2139] */
    (xdc_Char)0x61,  /* [2140] */
    (xdc_Char)0x6c,  /* [2141] */
    (xdc_Char)0x6c,  /* [2142] */
    (xdc_Char)0x69,  /* [2143] */
    (xdc_Char)0x6e,  /* [2144] */
    (xdc_Char)0x67,  /* [2145] */
    (xdc_Char)0x20,  /* [2146] */
    (xdc_Char)0x63,  /* [2147] */
    (xdc_Char)0x6f,  /* [2148] */
    (xdc_Char)0x6e,  /* [2149] */
    (xdc_Char)0x74,  /* [2150] */
    (xdc_Char)0x65,  /* [2151] */
    (xdc_Char)0x78,  /* [2152] */
    (xdc_Char)0x74,  /* [2153] */
    (xdc_Char)0x2e,  /* [2154] */
    (xdc_Char)0x20,  /* [2155] */
    (xdc_Char)0x53,  /* [2156] */
    (xdc_Char)0x65,  /* [2157] */
    (xdc_Char)0x65,  /* [2158] */
    (xdc_Char)0x20,  /* [2159] */
    (xdc_Char)0x47,  /* [2160] */
    (xdc_Char)0x61,  /* [2161] */
    (xdc_Char)0x74,  /* [2162] */
    (xdc_Char)0x65,  /* [2163] */
    (xdc_Char)0x4d,  /* [2164] */
    (xdc_Char)0x75,  /* [2165] */
    (xdc_Char)0x74,  /* [2166] */
    (xdc_Char)0x65,  /* [2167] */
    (xdc_Char)0x78,  /* [2168] */
    (xdc_Char)0x50,  /* [2169] */
    (xdc_Char)0x72,  /* [2170] */
    (xdc_Char)0x69,  /* [2171] */
    (xdc_Char)0x20,  /* [2172] */
    (xdc_Char)0x41,  /* [2173] */
    (xdc_Char)0x50,  /* [2174] */
    (xdc_Char)0x49,  /* [2175] */
    (xdc_Char)0x20,  /* [2176] */
    (xdc_Char)0x64,  /* [2177] */
    (xdc_Char)0x6f,  /* [2178] */
    (xdc_Char)0x63,  /* [2179] */
    (xdc_Char)0x20,  /* [2180] */
    (xdc_Char)0x66,  /* [2181] */
    (xdc_Char)0x6f,  /* [2182] */
    (xdc_Char)0x72,  /* [2183] */
    (xdc_Char)0x20,  /* [2184] */
    (xdc_Char)0x64,  /* [2185] */
    (xdc_Char)0x65,  /* [2186] */
    (xdc_Char)0x74,  /* [2187] */
    (xdc_Char)0x61,  /* [2188] */
    (xdc_Char)0x69,  /* [2189] */
    (xdc_Char)0x6c,  /* [2190] */
    (xdc_Char)0x73,  /* [2191] */
    (xdc_Char)0x2e,  /* [2192] */
    (xdc_Char)0x0,  /* [2193] */
    (xdc_Char)0x41,  /* [2194] */
    (xdc_Char)0x5f,  /* [2195] */
    (xdc_Char)0x65,  /* [2196] */
    (xdc_Char)0x6e,  /* [2197] */
    (xdc_Char)0x74,  /* [2198] */
    (xdc_Char)0x65,  /* [2199] */
    (xdc_Char)0x72,  /* [2200] */
    (xdc_Char)0x54,  /* [2201] */
    (xdc_Char)0x61,  /* [2202] */
    (xdc_Char)0x73,  /* [2203] */
    (xdc_Char)0x6b,  /* [2204] */
    (xdc_Char)0x44,  /* [2205] */
    (xdc_Char)0x69,  /* [2206] */
    (xdc_Char)0x73,  /* [2207] */
    (xdc_Char)0x61,  /* [2208] */
    (xdc_Char)0x62,  /* [2209] */
    (xdc_Char)0x6c,  /* [2210] */
    (xdc_Char)0x65,  /* [2211] */
    (xdc_Char)0x64,  /* [2212] */
    (xdc_Char)0x3a,  /* [2213] */
    (xdc_Char)0x20,  /* [2214] */
    (xdc_Char)0x43,  /* [2215] */
    (xdc_Char)0x61,  /* [2216] */
    (xdc_Char)0x6e,  /* [2217] */
    (xdc_Char)0x6e,  /* [2218] */
    (xdc_Char)0x6f,  /* [2219] */
    (xdc_Char)0x74,  /* [2220] */
    (xdc_Char)0x20,  /* [2221] */
    (xdc_Char)0x63,  /* [2222] */
    (xdc_Char)0x61,  /* [2223] */
    (xdc_Char)0x6c,  /* [2224] */
    (xdc_Char)0x6c,  /* [2225] */
    (xdc_Char)0x20,  /* [2226] */
    (xdc_Char)0x47,  /* [2227] */
    (xdc_Char)0x61,  /* [2228] */
    (xdc_Char)0x74,  /* [2229] */
    (xdc_Char)0x65,  /* [2230] */
    (xdc_Char)0x4d,  /* [2231] */
    (xdc_Char)0x75,  /* [2232] */
    (xdc_Char)0x74,  /* [2233] */
    (xdc_Char)0x65,  /* [2234] */
    (xdc_Char)0x78,  /* [2235] */
    (xdc_Char)0x50,  /* [2236] */
    (xdc_Char)0x72,  /* [2237] */
    (xdc_Char)0x69,  /* [2238] */
    (xdc_Char)0x5f,  /* [2239] */
    (xdc_Char)0x65,  /* [2240] */
    (xdc_Char)0x6e,  /* [2241] */
    (xdc_Char)0x74,  /* [2242] */
    (xdc_Char)0x65,  /* [2243] */
    (xdc_Char)0x72,  /* [2244] */
    (xdc_Char)0x28,  /* [2245] */
    (xdc_Char)0x29,  /* [2246] */
    (xdc_Char)0x20,  /* [2247] */
    (xdc_Char)0x77,  /* [2248] */
    (xdc_Char)0x68,  /* [2249] */
    (xdc_Char)0x69,  /* [2250] */
    (xdc_Char)0x6c,  /* [2251] */
    (xdc_Char)0x65,  /* [2252] */
    (xdc_Char)0x20,  /* [2253] */
    (xdc_Char)0x74,  /* [2254] */
    (xdc_Char)0x68,  /* [2255] */
    (xdc_Char)0x65,  /* [2256] */
    (xdc_Char)0x20,  /* [2257] */
    (xdc_Char)0x54,  /* [2258] */
    (xdc_Char)0x61,  /* [2259] */
    (xdc_Char)0x73,  /* [2260] */
    (xdc_Char)0x6b,  /* [2261] */
    (xdc_Char)0x20,  /* [2262] */
    (xdc_Char)0x6f,  /* [2263] */
    (xdc_Char)0x72,  /* [2264] */
    (xdc_Char)0x20,  /* [2265] */
    (xdc_Char)0x53,  /* [2266] */
    (xdc_Char)0x77,  /* [2267] */
    (xdc_Char)0x69,  /* [2268] */
    (xdc_Char)0x20,  /* [2269] */
    (xdc_Char)0x73,  /* [2270] */
    (xdc_Char)0x63,  /* [2271] */
    (xdc_Char)0x68,  /* [2272] */
    (xdc_Char)0x65,  /* [2273] */
    (xdc_Char)0x64,  /* [2274] */
    (xdc_Char)0x75,  /* [2275] */
    (xdc_Char)0x6c,  /* [2276] */
    (xdc_Char)0x65,  /* [2277] */
    (xdc_Char)0x72,  /* [2278] */
    (xdc_Char)0x20,  /* [2279] */
    (xdc_Char)0x69,  /* [2280] */
    (xdc_Char)0x73,  /* [2281] */
    (xdc_Char)0x20,  /* [2282] */
    (xdc_Char)0x64,  /* [2283] */
    (xdc_Char)0x69,  /* [2284] */
    (xdc_Char)0x73,  /* [2285] */
    (xdc_Char)0x61,  /* [2286] */
    (xdc_Char)0x62,  /* [2287] */
    (xdc_Char)0x6c,  /* [2288] */
    (xdc_Char)0x65,  /* [2289] */
    (xdc_Char)0x64,  /* [2290] */
    (xdc_Char)0x2e,  /* [2291] */
    (xdc_Char)0x0,  /* [2292] */
    (xdc_Char)0x41,  /* [2293] */
    (xdc_Char)0x5f,  /* [2294] */
    (xdc_Char)0x62,  /* [2295] */
    (xdc_Char)0x61,  /* [2296] */
    (xdc_Char)0x64,  /* [2297] */
    (xdc_Char)0x43,  /* [2298] */
    (xdc_Char)0x6f,  /* [2299] */
    (xdc_Char)0x6e,  /* [2300] */
    (xdc_Char)0x74,  /* [2301] */
    (xdc_Char)0x65,  /* [2302] */
    (xdc_Char)0x78,  /* [2303] */
    (xdc_Char)0x74,  /* [2304] */
    (xdc_Char)0x3a,  /* [2305] */
    (xdc_Char)0x20,  /* [2306] */
    (xdc_Char)0x62,  /* [2307] */
    (xdc_Char)0x61,  /* [2308] */
    (xdc_Char)0x64,  /* [2309] */
    (xdc_Char)0x20,  /* [2310] */
    (xdc_Char)0x63,  /* [2311] */
    (xdc_Char)0x61,  /* [2312] */
    (xdc_Char)0x6c,  /* [2313] */
    (xdc_Char)0x6c,  /* [2314] */
    (xdc_Char)0x69,  /* [2315] */
    (xdc_Char)0x6e,  /* [2316] */
    (xdc_Char)0x67,  /* [2317] */
    (xdc_Char)0x20,  /* [2318] */
    (xdc_Char)0x63,  /* [2319] */
    (xdc_Char)0x6f,  /* [2320] */
    (xdc_Char)0x6e,  /* [2321] */
    (xdc_Char)0x74,  /* [2322] */
    (xdc_Char)0x65,  /* [2323] */
    (xdc_Char)0x78,  /* [2324] */
    (xdc_Char)0x74,  /* [2325] */
    (xdc_Char)0x2e,  /* [2326] */
    (xdc_Char)0x20,  /* [2327] */
    (xdc_Char)0x53,  /* [2328] */
    (xdc_Char)0x65,  /* [2329] */
    (xdc_Char)0x65,  /* [2330] */
    (xdc_Char)0x20,  /* [2331] */
    (xdc_Char)0x47,  /* [2332] */
    (xdc_Char)0x61,  /* [2333] */
    (xdc_Char)0x74,  /* [2334] */
    (xdc_Char)0x65,  /* [2335] */
    (xdc_Char)0x4d,  /* [2336] */
    (xdc_Char)0x75,  /* [2337] */
    (xdc_Char)0x74,  /* [2338] */
    (xdc_Char)0x65,  /* [2339] */
    (xdc_Char)0x78,  /* [2340] */
    (xdc_Char)0x20,  /* [2341] */
    (xdc_Char)0x41,  /* [2342] */
    (xdc_Char)0x50,  /* [2343] */
    (xdc_Char)0x49,  /* [2344] */
    (xdc_Char)0x20,  /* [2345] */
    (xdc_Char)0x64,  /* [2346] */
    (xdc_Char)0x6f,  /* [2347] */
    (xdc_Char)0x63,  /* [2348] */
    (xdc_Char)0x20,  /* [2349] */
    (xdc_Char)0x66,  /* [2350] */
    (xdc_Char)0x6f,  /* [2351] */
    (xdc_Char)0x72,  /* [2352] */
    (xdc_Char)0x20,  /* [2353] */
    (xdc_Char)0x64,  /* [2354] */
    (xdc_Char)0x65,  /* [2355] */
    (xdc_Char)0x74,  /* [2356] */
    (xdc_Char)0x61,  /* [2357] */
    (xdc_Char)0x69,  /* [2358] */
    (xdc_Char)0x6c,  /* [2359] */
    (xdc_Char)0x73,  /* [2360] */
    (xdc_Char)0x2e,  /* [2361] */
    (xdc_Char)0x0,  /* [2362] */
    (xdc_Char)0x41,  /* [2363] */
    (xdc_Char)0x5f,  /* [2364] */
    (xdc_Char)0x62,  /* [2365] */
    (xdc_Char)0x61,  /* [2366] */
    (xdc_Char)0x64,  /* [2367] */
    (xdc_Char)0x43,  /* [2368] */
    (xdc_Char)0x6f,  /* [2369] */
    (xdc_Char)0x6e,  /* [2370] */
    (xdc_Char)0x74,  /* [2371] */
    (xdc_Char)0x65,  /* [2372] */
    (xdc_Char)0x78,  /* [2373] */
    (xdc_Char)0x74,  /* [2374] */
    (xdc_Char)0x3a,  /* [2375] */
    (xdc_Char)0x20,  /* [2376] */
    (xdc_Char)0x62,  /* [2377] */
    (xdc_Char)0x61,  /* [2378] */
    (xdc_Char)0x64,  /* [2379] */
    (xdc_Char)0x20,  /* [2380] */
    (xdc_Char)0x63,  /* [2381] */
    (xdc_Char)0x61,  /* [2382] */
    (xdc_Char)0x6c,  /* [2383] */
    (xdc_Char)0x6c,  /* [2384] */
    (xdc_Char)0x69,  /* [2385] */
    (xdc_Char)0x6e,  /* [2386] */
    (xdc_Char)0x67,  /* [2387] */
    (xdc_Char)0x20,  /* [2388] */
    (xdc_Char)0x63,  /* [2389] */
    (xdc_Char)0x6f,  /* [2390] */
    (xdc_Char)0x6e,  /* [2391] */
    (xdc_Char)0x74,  /* [2392] */
    (xdc_Char)0x65,  /* [2393] */
    (xdc_Char)0x78,  /* [2394] */
    (xdc_Char)0x74,  /* [2395] */
    (xdc_Char)0x2e,  /* [2396] */
    (xdc_Char)0x20,  /* [2397] */
    (xdc_Char)0x53,  /* [2398] */
    (xdc_Char)0x65,  /* [2399] */
    (xdc_Char)0x65,  /* [2400] */
    (xdc_Char)0x20,  /* [2401] */
    (xdc_Char)0x47,  /* [2402] */
    (xdc_Char)0x61,  /* [2403] */
    (xdc_Char)0x74,  /* [2404] */
    (xdc_Char)0x65,  /* [2405] */
    (xdc_Char)0x53,  /* [2406] */
    (xdc_Char)0x70,  /* [2407] */
    (xdc_Char)0x69,  /* [2408] */
    (xdc_Char)0x6e,  /* [2409] */
    (xdc_Char)0x6c,  /* [2410] */
    (xdc_Char)0x6f,  /* [2411] */
    (xdc_Char)0x63,  /* [2412] */
    (xdc_Char)0x6b,  /* [2413] */
    (xdc_Char)0x20,  /* [2414] */
    (xdc_Char)0x41,  /* [2415] */
    (xdc_Char)0x50,  /* [2416] */
    (xdc_Char)0x49,  /* [2417] */
    (xdc_Char)0x20,  /* [2418] */
    (xdc_Char)0x64,  /* [2419] */
    (xdc_Char)0x6f,  /* [2420] */
    (xdc_Char)0x63,  /* [2421] */
    (xdc_Char)0x20,  /* [2422] */
    (xdc_Char)0x66,  /* [2423] */
    (xdc_Char)0x6f,  /* [2424] */
    (xdc_Char)0x72,  /* [2425] */
    (xdc_Char)0x20,  /* [2426] */
    (xdc_Char)0x64,  /* [2427] */
    (xdc_Char)0x65,  /* [2428] */
    (xdc_Char)0x74,  /* [2429] */
    (xdc_Char)0x61,  /* [2430] */
    (xdc_Char)0x69,  /* [2431] */
    (xdc_Char)0x6c,  /* [2432] */
    (xdc_Char)0x73,  /* [2433] */
    (xdc_Char)0x2e,  /* [2434] */
    (xdc_Char)0x0,  /* [2435] */
    (xdc_Char)0x41,  /* [2436] */
    (xdc_Char)0x5f,  /* [2437] */
    (xdc_Char)0x69,  /* [2438] */
    (xdc_Char)0x6e,  /* [2439] */
    (xdc_Char)0x76,  /* [2440] */
    (xdc_Char)0x61,  /* [2441] */
    (xdc_Char)0x6c,  /* [2442] */
    (xdc_Char)0x69,  /* [2443] */
    (xdc_Char)0x64,  /* [2444] */
    (xdc_Char)0x51,  /* [2445] */
    (xdc_Char)0x75,  /* [2446] */
    (xdc_Char)0x61,  /* [2447] */
    (xdc_Char)0x6c,  /* [2448] */
    (xdc_Char)0x69,  /* [2449] */
    (xdc_Char)0x74,  /* [2450] */
    (xdc_Char)0x79,  /* [2451] */
    (xdc_Char)0x3a,  /* [2452] */
    (xdc_Char)0x20,  /* [2453] */
    (xdc_Char)0x53,  /* [2454] */
    (xdc_Char)0x65,  /* [2455] */
    (xdc_Char)0x65,  /* [2456] */
    (xdc_Char)0x20,  /* [2457] */
    (xdc_Char)0x47,  /* [2458] */
    (xdc_Char)0x61,  /* [2459] */
    (xdc_Char)0x74,  /* [2460] */
    (xdc_Char)0x65,  /* [2461] */
    (xdc_Char)0x53,  /* [2462] */
    (xdc_Char)0x70,  /* [2463] */
    (xdc_Char)0x69,  /* [2464] */
    (xdc_Char)0x6e,  /* [2465] */
    (xdc_Char)0x6c,  /* [2466] */
    (xdc_Char)0x6f,  /* [2467] */
    (xdc_Char)0x63,  /* [2468] */
    (xdc_Char)0x6b,  /* [2469] */
    (xdc_Char)0x20,  /* [2470] */
    (xdc_Char)0x41,  /* [2471] */
    (xdc_Char)0x50,  /* [2472] */
    (xdc_Char)0x49,  /* [2473] */
    (xdc_Char)0x20,  /* [2474] */
    (xdc_Char)0x64,  /* [2475] */
    (xdc_Char)0x6f,  /* [2476] */
    (xdc_Char)0x63,  /* [2477] */
    (xdc_Char)0x20,  /* [2478] */
    (xdc_Char)0x66,  /* [2479] */
    (xdc_Char)0x6f,  /* [2480] */
    (xdc_Char)0x72,  /* [2481] */
    (xdc_Char)0x20,  /* [2482] */
    (xdc_Char)0x64,  /* [2483] */
    (xdc_Char)0x65,  /* [2484] */
    (xdc_Char)0x74,  /* [2485] */
    (xdc_Char)0x61,  /* [2486] */
    (xdc_Char)0x69,  /* [2487] */
    (xdc_Char)0x6c,  /* [2488] */
    (xdc_Char)0x73,  /* [2489] */
    (xdc_Char)0x2e,  /* [2490] */
    (xdc_Char)0x0,  /* [2491] */
    (xdc_Char)0x62,  /* [2492] */
    (xdc_Char)0x75,  /* [2493] */
    (xdc_Char)0x66,  /* [2494] */
    (xdc_Char)0x20,  /* [2495] */
    (xdc_Char)0x70,  /* [2496] */
    (xdc_Char)0x61,  /* [2497] */
    (xdc_Char)0x72,  /* [2498] */
    (xdc_Char)0x61,  /* [2499] */
    (xdc_Char)0x6d,  /* [2500] */
    (xdc_Char)0x65,  /* [2501] */
    (xdc_Char)0x74,  /* [2502] */
    (xdc_Char)0x65,  /* [2503] */
    (xdc_Char)0x72,  /* [2504] */
    (xdc_Char)0x20,  /* [2505] */
    (xdc_Char)0x63,  /* [2506] */
    (xdc_Char)0x61,  /* [2507] */
    (xdc_Char)0x6e,  /* [2508] */
    (xdc_Char)0x6e,  /* [2509] */
    (xdc_Char)0x6f,  /* [2510] */
    (xdc_Char)0x74,  /* [2511] */
    (xdc_Char)0x20,  /* [2512] */
    (xdc_Char)0x62,  /* [2513] */
    (xdc_Char)0x65,  /* [2514] */
    (xdc_Char)0x20,  /* [2515] */
    (xdc_Char)0x6e,  /* [2516] */
    (xdc_Char)0x75,  /* [2517] */
    (xdc_Char)0x6c,  /* [2518] */
    (xdc_Char)0x6c,  /* [2519] */
    (xdc_Char)0x0,  /* [2520] */
    (xdc_Char)0x62,  /* [2521] */
    (xdc_Char)0x75,  /* [2522] */
    (xdc_Char)0x66,  /* [2523] */
    (xdc_Char)0x20,  /* [2524] */
    (xdc_Char)0x6e,  /* [2525] */
    (xdc_Char)0x6f,  /* [2526] */
    (xdc_Char)0x74,  /* [2527] */
    (xdc_Char)0x20,  /* [2528] */
    (xdc_Char)0x70,  /* [2529] */
    (xdc_Char)0x72,  /* [2530] */
    (xdc_Char)0x6f,  /* [2531] */
    (xdc_Char)0x70,  /* [2532] */
    (xdc_Char)0x65,  /* [2533] */
    (xdc_Char)0x72,  /* [2534] */
    (xdc_Char)0x6c,  /* [2535] */
    (xdc_Char)0x79,  /* [2536] */
    (xdc_Char)0x20,  /* [2537] */
    (xdc_Char)0x61,  /* [2538] */
    (xdc_Char)0x6c,  /* [2539] */
    (xdc_Char)0x69,  /* [2540] */
    (xdc_Char)0x67,  /* [2541] */
    (xdc_Char)0x6e,  /* [2542] */
    (xdc_Char)0x65,  /* [2543] */
    (xdc_Char)0x64,  /* [2544] */
    (xdc_Char)0x0,  /* [2545] */
    (xdc_Char)0x61,  /* [2546] */
    (xdc_Char)0x6c,  /* [2547] */
    (xdc_Char)0x69,  /* [2548] */
    (xdc_Char)0x67,  /* [2549] */
    (xdc_Char)0x6e,  /* [2550] */
    (xdc_Char)0x20,  /* [2551] */
    (xdc_Char)0x70,  /* [2552] */
    (xdc_Char)0x61,  /* [2553] */
    (xdc_Char)0x72,  /* [2554] */
    (xdc_Char)0x61,  /* [2555] */
    (xdc_Char)0x6d,  /* [2556] */
    (xdc_Char)0x65,  /* [2557] */
    (xdc_Char)0x74,  /* [2558] */
    (xdc_Char)0x65,  /* [2559] */
    (xdc_Char)0x72,  /* [2560] */
    (xdc_Char)0x20,  /* [2561] */
    (xdc_Char)0x6d,  /* [2562] */
    (xdc_Char)0x75,  /* [2563] */
    (xdc_Char)0x73,  /* [2564] */
    (xdc_Char)0x74,  /* [2565] */
    (xdc_Char)0x20,  /* [2566] */
    (xdc_Char)0x62,  /* [2567] */
    (xdc_Char)0x65,  /* [2568] */
    (xdc_Char)0x20,  /* [2569] */
    (xdc_Char)0x30,  /* [2570] */
    (xdc_Char)0x20,  /* [2571] */
    (xdc_Char)0x6f,  /* [2572] */
    (xdc_Char)0x72,  /* [2573] */
    (xdc_Char)0x20,  /* [2574] */
    (xdc_Char)0x61,  /* [2575] */
    (xdc_Char)0x20,  /* [2576] */
    (xdc_Char)0x70,  /* [2577] */
    (xdc_Char)0x6f,  /* [2578] */
    (xdc_Char)0x77,  /* [2579] */
    (xdc_Char)0x65,  /* [2580] */
    (xdc_Char)0x72,  /* [2581] */
    (xdc_Char)0x20,  /* [2582] */
    (xdc_Char)0x6f,  /* [2583] */
    (xdc_Char)0x66,  /* [2584] */
    (xdc_Char)0x20,  /* [2585] */
    (xdc_Char)0x32,  /* [2586] */
    (xdc_Char)0x20,  /* [2587] */
    (xdc_Char)0x3e,  /* [2588] */
    (xdc_Char)0x3d,  /* [2589] */
    (xdc_Char)0x20,  /* [2590] */
    (xdc_Char)0x74,  /* [2591] */
    (xdc_Char)0x68,  /* [2592] */
    (xdc_Char)0x65,  /* [2593] */
    (xdc_Char)0x20,  /* [2594] */
    (xdc_Char)0x76,  /* [2595] */
    (xdc_Char)0x61,  /* [2596] */
    (xdc_Char)0x6c,  /* [2597] */
    (xdc_Char)0x75,  /* [2598] */
    (xdc_Char)0x65,  /* [2599] */
    (xdc_Char)0x20,  /* [2600] */
    (xdc_Char)0x6f,  /* [2601] */
    (xdc_Char)0x66,  /* [2602] */
    (xdc_Char)0x20,  /* [2603] */
    (xdc_Char)0x4d,  /* [2604] */
    (xdc_Char)0x65,  /* [2605] */
    (xdc_Char)0x6d,  /* [2606] */
    (xdc_Char)0x6f,  /* [2607] */
    (xdc_Char)0x72,  /* [2608] */
    (xdc_Char)0x79,  /* [2609] */
    (xdc_Char)0x5f,  /* [2610] */
    (xdc_Char)0x67,  /* [2611] */
    (xdc_Char)0x65,  /* [2612] */
    (xdc_Char)0x74,  /* [2613] */
    (xdc_Char)0x4d,  /* [2614] */
    (xdc_Char)0x61,  /* [2615] */
    (xdc_Char)0x78,  /* [2616] */
    (xdc_Char)0x44,  /* [2617] */
    (xdc_Char)0x65,  /* [2618] */
    (xdc_Char)0x66,  /* [2619] */
    (xdc_Char)0x61,  /* [2620] */
    (xdc_Char)0x75,  /* [2621] */
    (xdc_Char)0x6c,  /* [2622] */
    (xdc_Char)0x74,  /* [2623] */
    (xdc_Char)0x54,  /* [2624] */
    (xdc_Char)0x79,  /* [2625] */
    (xdc_Char)0x70,  /* [2626] */
    (xdc_Char)0x65,  /* [2627] */
    (xdc_Char)0x41,  /* [2628] */
    (xdc_Char)0x6c,  /* [2629] */
    (xdc_Char)0x69,  /* [2630] */
    (xdc_Char)0x67,  /* [2631] */
    (xdc_Char)0x6e,  /* [2632] */
    (xdc_Char)0x28,  /* [2633] */
    (xdc_Char)0x29,  /* [2634] */
    (xdc_Char)0x0,  /* [2635] */
    (xdc_Char)0x61,  /* [2636] */
    (xdc_Char)0x6c,  /* [2637] */
    (xdc_Char)0x69,  /* [2638] */
    (xdc_Char)0x67,  /* [2639] */
    (xdc_Char)0x6e,  /* [2640] */
    (xdc_Char)0x20,  /* [2641] */
    (xdc_Char)0x70,  /* [2642] */
    (xdc_Char)0x61,  /* [2643] */
    (xdc_Char)0x72,  /* [2644] */
    (xdc_Char)0x61,  /* [2645] */
    (xdc_Char)0x6d,  /* [2646] */
    (xdc_Char)0x65,  /* [2647] */
    (xdc_Char)0x74,  /* [2648] */
    (xdc_Char)0x65,  /* [2649] */
    (xdc_Char)0x72,  /* [2650] */
    (xdc_Char)0x20,  /* [2651] */
    (xdc_Char)0x31,  /* [2652] */
    (xdc_Char)0x29,  /* [2653] */
    (xdc_Char)0x20,  /* [2654] */
    (xdc_Char)0x6d,  /* [2655] */
    (xdc_Char)0x75,  /* [2656] */
    (xdc_Char)0x73,  /* [2657] */
    (xdc_Char)0x74,  /* [2658] */
    (xdc_Char)0x20,  /* [2659] */
    (xdc_Char)0x62,  /* [2660] */
    (xdc_Char)0x65,  /* [2661] */
    (xdc_Char)0x20,  /* [2662] */
    (xdc_Char)0x30,  /* [2663] */
    (xdc_Char)0x20,  /* [2664] */
    (xdc_Char)0x6f,  /* [2665] */
    (xdc_Char)0x72,  /* [2666] */
    (xdc_Char)0x20,  /* [2667] */
    (xdc_Char)0x61,  /* [2668] */
    (xdc_Char)0x20,  /* [2669] */
    (xdc_Char)0x70,  /* [2670] */
    (xdc_Char)0x6f,  /* [2671] */
    (xdc_Char)0x77,  /* [2672] */
    (xdc_Char)0x65,  /* [2673] */
    (xdc_Char)0x72,  /* [2674] */
    (xdc_Char)0x20,  /* [2675] */
    (xdc_Char)0x6f,  /* [2676] */
    (xdc_Char)0x66,  /* [2677] */
    (xdc_Char)0x20,  /* [2678] */
    (xdc_Char)0x32,  /* [2679] */
    (xdc_Char)0x20,  /* [2680] */
    (xdc_Char)0x61,  /* [2681] */
    (xdc_Char)0x6e,  /* [2682] */
    (xdc_Char)0x64,  /* [2683] */
    (xdc_Char)0x20,  /* [2684] */
    (xdc_Char)0x32,  /* [2685] */
    (xdc_Char)0x29,  /* [2686] */
    (xdc_Char)0x20,  /* [2687] */
    (xdc_Char)0x6e,  /* [2688] */
    (xdc_Char)0x6f,  /* [2689] */
    (xdc_Char)0x74,  /* [2690] */
    (xdc_Char)0x20,  /* [2691] */
    (xdc_Char)0x67,  /* [2692] */
    (xdc_Char)0x72,  /* [2693] */
    (xdc_Char)0x65,  /* [2694] */
    (xdc_Char)0x61,  /* [2695] */
    (xdc_Char)0x74,  /* [2696] */
    (xdc_Char)0x65,  /* [2697] */
    (xdc_Char)0x72,  /* [2698] */
    (xdc_Char)0x20,  /* [2699] */
    (xdc_Char)0x74,  /* [2700] */
    (xdc_Char)0x68,  /* [2701] */
    (xdc_Char)0x61,  /* [2702] */
    (xdc_Char)0x6e,  /* [2703] */
    (xdc_Char)0x20,  /* [2704] */
    (xdc_Char)0x74,  /* [2705] */
    (xdc_Char)0x68,  /* [2706] */
    (xdc_Char)0x65,  /* [2707] */
    (xdc_Char)0x20,  /* [2708] */
    (xdc_Char)0x68,  /* [2709] */
    (xdc_Char)0x65,  /* [2710] */
    (xdc_Char)0x61,  /* [2711] */
    (xdc_Char)0x70,  /* [2712] */
    (xdc_Char)0x73,  /* [2713] */
    (xdc_Char)0x20,  /* [2714] */
    (xdc_Char)0x61,  /* [2715] */
    (xdc_Char)0x6c,  /* [2716] */
    (xdc_Char)0x69,  /* [2717] */
    (xdc_Char)0x67,  /* [2718] */
    (xdc_Char)0x6e,  /* [2719] */
    (xdc_Char)0x6d,  /* [2720] */
    (xdc_Char)0x65,  /* [2721] */
    (xdc_Char)0x6e,  /* [2722] */
    (xdc_Char)0x74,  /* [2723] */
    (xdc_Char)0x0,  /* [2724] */
    (xdc_Char)0x62,  /* [2725] */
    (xdc_Char)0x6c,  /* [2726] */
    (xdc_Char)0x6f,  /* [2727] */
    (xdc_Char)0x63,  /* [2728] */
    (xdc_Char)0x6b,  /* [2729] */
    (xdc_Char)0x53,  /* [2730] */
    (xdc_Char)0x69,  /* [2731] */
    (xdc_Char)0x7a,  /* [2732] */
    (xdc_Char)0x65,  /* [2733] */
    (xdc_Char)0x20,  /* [2734] */
    (xdc_Char)0x6d,  /* [2735] */
    (xdc_Char)0x75,  /* [2736] */
    (xdc_Char)0x73,  /* [2737] */
    (xdc_Char)0x74,  /* [2738] */
    (xdc_Char)0x20,  /* [2739] */
    (xdc_Char)0x62,  /* [2740] */
    (xdc_Char)0x65,  /* [2741] */
    (xdc_Char)0x20,  /* [2742] */
    (xdc_Char)0x6c,  /* [2743] */
    (xdc_Char)0x61,  /* [2744] */
    (xdc_Char)0x72,  /* [2745] */
    (xdc_Char)0x67,  /* [2746] */
    (xdc_Char)0x65,  /* [2747] */
    (xdc_Char)0x20,  /* [2748] */
    (xdc_Char)0x65,  /* [2749] */
    (xdc_Char)0x6e,  /* [2750] */
    (xdc_Char)0x6f,  /* [2751] */
    (xdc_Char)0x75,  /* [2752] */
    (xdc_Char)0x67,  /* [2753] */
    (xdc_Char)0x68,  /* [2754] */
    (xdc_Char)0x20,  /* [2755] */
    (xdc_Char)0x74,  /* [2756] */
    (xdc_Char)0x6f,  /* [2757] */
    (xdc_Char)0x20,  /* [2758] */
    (xdc_Char)0x68,  /* [2759] */
    (xdc_Char)0x6f,  /* [2760] */
    (xdc_Char)0x6c,  /* [2761] */
    (xdc_Char)0x64,  /* [2762] */
    (xdc_Char)0x20,  /* [2763] */
    (xdc_Char)0x61,  /* [2764] */
    (xdc_Char)0x74,  /* [2765] */
    (xdc_Char)0x6c,  /* [2766] */
    (xdc_Char)0x65,  /* [2767] */
    (xdc_Char)0x61,  /* [2768] */
    (xdc_Char)0x73,  /* [2769] */
    (xdc_Char)0x74,  /* [2770] */
    (xdc_Char)0x20,  /* [2771] */
    (xdc_Char)0x74,  /* [2772] */
    (xdc_Char)0x77,  /* [2773] */
    (xdc_Char)0x6f,  /* [2774] */
    (xdc_Char)0x20,  /* [2775] */
    (xdc_Char)0x70,  /* [2776] */
    (xdc_Char)0x6f,  /* [2777] */
    (xdc_Char)0x69,  /* [2778] */
    (xdc_Char)0x6e,  /* [2779] */
    (xdc_Char)0x74,  /* [2780] */
    (xdc_Char)0x65,  /* [2781] */
    (xdc_Char)0x72,  /* [2782] */
    (xdc_Char)0x73,  /* [2783] */
    (xdc_Char)0x0,  /* [2784] */
    (xdc_Char)0x6e,  /* [2785] */
    (xdc_Char)0x75,  /* [2786] */
    (xdc_Char)0x6d,  /* [2787] */
    (xdc_Char)0x42,  /* [2788] */
    (xdc_Char)0x6c,  /* [2789] */
    (xdc_Char)0x6f,  /* [2790] */
    (xdc_Char)0x63,  /* [2791] */
    (xdc_Char)0x6b,  /* [2792] */
    (xdc_Char)0x73,  /* [2793] */
    (xdc_Char)0x20,  /* [2794] */
    (xdc_Char)0x63,  /* [2795] */
    (xdc_Char)0x61,  /* [2796] */
    (xdc_Char)0x6e,  /* [2797] */
    (xdc_Char)0x6e,  /* [2798] */
    (xdc_Char)0x6f,  /* [2799] */
    (xdc_Char)0x74,  /* [2800] */
    (xdc_Char)0x20,  /* [2801] */
    (xdc_Char)0x62,  /* [2802] */
    (xdc_Char)0x65,  /* [2803] */
    (xdc_Char)0x20,  /* [2804] */
    (xdc_Char)0x7a,  /* [2805] */
    (xdc_Char)0x65,  /* [2806] */
    (xdc_Char)0x72,  /* [2807] */
    (xdc_Char)0x6f,  /* [2808] */
    (xdc_Char)0x0,  /* [2809] */
    (xdc_Char)0x62,  /* [2810] */
    (xdc_Char)0x75,  /* [2811] */
    (xdc_Char)0x66,  /* [2812] */
    (xdc_Char)0x53,  /* [2813] */
    (xdc_Char)0x69,  /* [2814] */
    (xdc_Char)0x7a,  /* [2815] */
    (xdc_Char)0x65,  /* [2816] */
    (xdc_Char)0x20,  /* [2817] */
    (xdc_Char)0x63,  /* [2818] */
    (xdc_Char)0x61,  /* [2819] */
    (xdc_Char)0x6e,  /* [2820] */
    (xdc_Char)0x6e,  /* [2821] */
    (xdc_Char)0x6f,  /* [2822] */
    (xdc_Char)0x74,  /* [2823] */
    (xdc_Char)0x20,  /* [2824] */
    (xdc_Char)0x62,  /* [2825] */
    (xdc_Char)0x65,  /* [2826] */
    (xdc_Char)0x20,  /* [2827] */
    (xdc_Char)0x7a,  /* [2828] */
    (xdc_Char)0x65,  /* [2829] */
    (xdc_Char)0x72,  /* [2830] */
    (xdc_Char)0x6f,  /* [2831] */
    (xdc_Char)0x0,  /* [2832] */
    (xdc_Char)0x48,  /* [2833] */
    (xdc_Char)0x65,  /* [2834] */
    (xdc_Char)0x61,  /* [2835] */
    (xdc_Char)0x70,  /* [2836] */
    (xdc_Char)0x42,  /* [2837] */
    (xdc_Char)0x75,  /* [2838] */
    (xdc_Char)0x66,  /* [2839] */
    (xdc_Char)0x5f,  /* [2840] */
    (xdc_Char)0x63,  /* [2841] */
    (xdc_Char)0x72,  /* [2842] */
    (xdc_Char)0x65,  /* [2843] */
    (xdc_Char)0x61,  /* [2844] */
    (xdc_Char)0x74,  /* [2845] */
    (xdc_Char)0x65,  /* [2846] */
    (xdc_Char)0x27,  /* [2847] */
    (xdc_Char)0x73,  /* [2848] */
    (xdc_Char)0x20,  /* [2849] */
    (xdc_Char)0x62,  /* [2850] */
    (xdc_Char)0x75,  /* [2851] */
    (xdc_Char)0x66,  /* [2852] */
    (xdc_Char)0x53,  /* [2853] */
    (xdc_Char)0x69,  /* [2854] */
    (xdc_Char)0x7a,  /* [2855] */
    (xdc_Char)0x65,  /* [2856] */
    (xdc_Char)0x20,  /* [2857] */
    (xdc_Char)0x70,  /* [2858] */
    (xdc_Char)0x61,  /* [2859] */
    (xdc_Char)0x72,  /* [2860] */
    (xdc_Char)0x61,  /* [2861] */
    (xdc_Char)0x6d,  /* [2862] */
    (xdc_Char)0x65,  /* [2863] */
    (xdc_Char)0x74,  /* [2864] */
    (xdc_Char)0x65,  /* [2865] */
    (xdc_Char)0x72,  /* [2866] */
    (xdc_Char)0x20,  /* [2867] */
    (xdc_Char)0x69,  /* [2868] */
    (xdc_Char)0x73,  /* [2869] */
    (xdc_Char)0x20,  /* [2870] */
    (xdc_Char)0x69,  /* [2871] */
    (xdc_Char)0x6e,  /* [2872] */
    (xdc_Char)0x76,  /* [2873] */
    (xdc_Char)0x61,  /* [2874] */
    (xdc_Char)0x6c,  /* [2875] */
    (xdc_Char)0x69,  /* [2876] */
    (xdc_Char)0x64,  /* [2877] */
    (xdc_Char)0x20,  /* [2878] */
    (xdc_Char)0x28,  /* [2879] */
    (xdc_Char)0x74,  /* [2880] */
    (xdc_Char)0x6f,  /* [2881] */
    (xdc_Char)0x6f,  /* [2882] */
    (xdc_Char)0x20,  /* [2883] */
    (xdc_Char)0x73,  /* [2884] */
    (xdc_Char)0x6d,  /* [2885] */
    (xdc_Char)0x61,  /* [2886] */
    (xdc_Char)0x6c,  /* [2887] */
    (xdc_Char)0x6c,  /* [2888] */
    (xdc_Char)0x29,  /* [2889] */
    (xdc_Char)0x0,  /* [2890] */
    (xdc_Char)0x43,  /* [2891] */
    (xdc_Char)0x61,  /* [2892] */
    (xdc_Char)0x6e,  /* [2893] */
    (xdc_Char)0x6e,  /* [2894] */
    (xdc_Char)0x6f,  /* [2895] */
    (xdc_Char)0x74,  /* [2896] */
    (xdc_Char)0x20,  /* [2897] */
    (xdc_Char)0x63,  /* [2898] */
    (xdc_Char)0x61,  /* [2899] */
    (xdc_Char)0x6c,  /* [2900] */
    (xdc_Char)0x6c,  /* [2901] */
    (xdc_Char)0x20,  /* [2902] */
    (xdc_Char)0x48,  /* [2903] */
    (xdc_Char)0x65,  /* [2904] */
    (xdc_Char)0x61,  /* [2905] */
    (xdc_Char)0x70,  /* [2906] */
    (xdc_Char)0x42,  /* [2907] */
    (xdc_Char)0x75,  /* [2908] */
    (xdc_Char)0x66,  /* [2909] */
    (xdc_Char)0x5f,  /* [2910] */
    (xdc_Char)0x66,  /* [2911] */
    (xdc_Char)0x72,  /* [2912] */
    (xdc_Char)0x65,  /* [2913] */
    (xdc_Char)0x65,  /* [2914] */
    (xdc_Char)0x20,  /* [2915] */
    (xdc_Char)0x77,  /* [2916] */
    (xdc_Char)0x68,  /* [2917] */
    (xdc_Char)0x65,  /* [2918] */
    (xdc_Char)0x6e,  /* [2919] */
    (xdc_Char)0x20,  /* [2920] */
    (xdc_Char)0x6e,  /* [2921] */
    (xdc_Char)0x6f,  /* [2922] */
    (xdc_Char)0x20,  /* [2923] */
    (xdc_Char)0x62,  /* [2924] */
    (xdc_Char)0x6c,  /* [2925] */
    (xdc_Char)0x6f,  /* [2926] */
    (xdc_Char)0x63,  /* [2927] */
    (xdc_Char)0x6b,  /* [2928] */
    (xdc_Char)0x73,  /* [2929] */
    (xdc_Char)0x20,  /* [2930] */
    (xdc_Char)0x68,  /* [2931] */
    (xdc_Char)0x61,  /* [2932] */
    (xdc_Char)0x76,  /* [2933] */
    (xdc_Char)0x65,  /* [2934] */
    (xdc_Char)0x20,  /* [2935] */
    (xdc_Char)0x62,  /* [2936] */
    (xdc_Char)0x65,  /* [2937] */
    (xdc_Char)0x65,  /* [2938] */
    (xdc_Char)0x6e,  /* [2939] */
    (xdc_Char)0x20,  /* [2940] */
    (xdc_Char)0x61,  /* [2941] */
    (xdc_Char)0x6c,  /* [2942] */
    (xdc_Char)0x6c,  /* [2943] */
    (xdc_Char)0x6f,  /* [2944] */
    (xdc_Char)0x63,  /* [2945] */
    (xdc_Char)0x61,  /* [2946] */
    (xdc_Char)0x74,  /* [2947] */
    (xdc_Char)0x65,  /* [2948] */
    (xdc_Char)0x64,  /* [2949] */
    (xdc_Char)0x0,  /* [2950] */
    (xdc_Char)0x41,  /* [2951] */
    (xdc_Char)0x5f,  /* [2952] */
    (xdc_Char)0x69,  /* [2953] */
    (xdc_Char)0x6e,  /* [2954] */
    (xdc_Char)0x76,  /* [2955] */
    (xdc_Char)0x61,  /* [2956] */
    (xdc_Char)0x6c,  /* [2957] */
    (xdc_Char)0x69,  /* [2958] */
    (xdc_Char)0x64,  /* [2959] */
    (xdc_Char)0x46,  /* [2960] */
    (xdc_Char)0x72,  /* [2961] */
    (xdc_Char)0x65,  /* [2962] */
    (xdc_Char)0x65,  /* [2963] */
    (xdc_Char)0x3a,  /* [2964] */
    (xdc_Char)0x20,  /* [2965] */
    (xdc_Char)0x49,  /* [2966] */
    (xdc_Char)0x6e,  /* [2967] */
    (xdc_Char)0x76,  /* [2968] */
    (xdc_Char)0x61,  /* [2969] */
    (xdc_Char)0x6c,  /* [2970] */
    (xdc_Char)0x69,  /* [2971] */
    (xdc_Char)0x64,  /* [2972] */
    (xdc_Char)0x20,  /* [2973] */
    (xdc_Char)0x66,  /* [2974] */
    (xdc_Char)0x72,  /* [2975] */
    (xdc_Char)0x65,  /* [2976] */
    (xdc_Char)0x65,  /* [2977] */
    (xdc_Char)0x0,  /* [2978] */
    (xdc_Char)0x41,  /* [2979] */
    (xdc_Char)0x5f,  /* [2980] */
    (xdc_Char)0x7a,  /* [2981] */
    (xdc_Char)0x65,  /* [2982] */
    (xdc_Char)0x72,  /* [2983] */
    (xdc_Char)0x6f,  /* [2984] */
    (xdc_Char)0x42,  /* [2985] */
    (xdc_Char)0x6c,  /* [2986] */
    (xdc_Char)0x6f,  /* [2987] */
    (xdc_Char)0x63,  /* [2988] */
    (xdc_Char)0x6b,  /* [2989] */
    (xdc_Char)0x3a,  /* [2990] */
    (xdc_Char)0x20,  /* [2991] */
    (xdc_Char)0x43,  /* [2992] */
    (xdc_Char)0x61,  /* [2993] */
    (xdc_Char)0x6e,  /* [2994] */
    (xdc_Char)0x6e,  /* [2995] */
    (xdc_Char)0x6f,  /* [2996] */
    (xdc_Char)0x74,  /* [2997] */
    (xdc_Char)0x20,  /* [2998] */
    (xdc_Char)0x61,  /* [2999] */
    (xdc_Char)0x6c,  /* [3000] */
    (xdc_Char)0x6c,  /* [3001] */
    (xdc_Char)0x6f,  /* [3002] */
    (xdc_Char)0x63,  /* [3003] */
    (xdc_Char)0x61,  /* [3004] */
    (xdc_Char)0x74,  /* [3005] */
    (xdc_Char)0x65,  /* [3006] */
    (xdc_Char)0x20,  /* [3007] */
    (xdc_Char)0x73,  /* [3008] */
    (xdc_Char)0x69,  /* [3009] */
    (xdc_Char)0x7a,  /* [3010] */
    (xdc_Char)0x65,  /* [3011] */
    (xdc_Char)0x20,  /* [3012] */
    (xdc_Char)0x30,  /* [3013] */
    (xdc_Char)0x0,  /* [3014] */
    (xdc_Char)0x41,  /* [3015] */
    (xdc_Char)0x5f,  /* [3016] */
    (xdc_Char)0x68,  /* [3017] */
    (xdc_Char)0x65,  /* [3018] */
    (xdc_Char)0x61,  /* [3019] */
    (xdc_Char)0x70,  /* [3020] */
    (xdc_Char)0x53,  /* [3021] */
    (xdc_Char)0x69,  /* [3022] */
    (xdc_Char)0x7a,  /* [3023] */
    (xdc_Char)0x65,  /* [3024] */
    (xdc_Char)0x3a,  /* [3025] */
    (xdc_Char)0x20,  /* [3026] */
    (xdc_Char)0x52,  /* [3027] */
    (xdc_Char)0x65,  /* [3028] */
    (xdc_Char)0x71,  /* [3029] */
    (xdc_Char)0x75,  /* [3030] */
    (xdc_Char)0x65,  /* [3031] */
    (xdc_Char)0x73,  /* [3032] */
    (xdc_Char)0x74,  /* [3033] */
    (xdc_Char)0x65,  /* [3034] */
    (xdc_Char)0x64,  /* [3035] */
    (xdc_Char)0x20,  /* [3036] */
    (xdc_Char)0x68,  /* [3037] */
    (xdc_Char)0x65,  /* [3038] */
    (xdc_Char)0x61,  /* [3039] */
    (xdc_Char)0x70,  /* [3040] */
    (xdc_Char)0x20,  /* [3041] */
    (xdc_Char)0x73,  /* [3042] */
    (xdc_Char)0x69,  /* [3043] */
    (xdc_Char)0x7a,  /* [3044] */
    (xdc_Char)0x65,  /* [3045] */
    (xdc_Char)0x20,  /* [3046] */
    (xdc_Char)0x69,  /* [3047] */
    (xdc_Char)0x73,  /* [3048] */
    (xdc_Char)0x20,  /* [3049] */
    (xdc_Char)0x74,  /* [3050] */
    (xdc_Char)0x6f,  /* [3051] */
    (xdc_Char)0x6f,  /* [3052] */
    (xdc_Char)0x20,  /* [3053] */
    (xdc_Char)0x73,  /* [3054] */
    (xdc_Char)0x6d,  /* [3055] */
    (xdc_Char)0x61,  /* [3056] */
    (xdc_Char)0x6c,  /* [3057] */
    (xdc_Char)0x6c,  /* [3058] */
    (xdc_Char)0x0,  /* [3059] */
    (xdc_Char)0x41,  /* [3060] */
    (xdc_Char)0x5f,  /* [3061] */
    (xdc_Char)0x61,  /* [3062] */
    (xdc_Char)0x6c,  /* [3063] */
    (xdc_Char)0x69,  /* [3064] */
    (xdc_Char)0x67,  /* [3065] */
    (xdc_Char)0x6e,  /* [3066] */
    (xdc_Char)0x3a,  /* [3067] */
    (xdc_Char)0x20,  /* [3068] */
    (xdc_Char)0x52,  /* [3069] */
    (xdc_Char)0x65,  /* [3070] */
    (xdc_Char)0x71,  /* [3071] */
    (xdc_Char)0x75,  /* [3072] */
    (xdc_Char)0x65,  /* [3073] */
    (xdc_Char)0x73,  /* [3074] */
    (xdc_Char)0x74,  /* [3075] */
    (xdc_Char)0x65,  /* [3076] */
    (xdc_Char)0x64,  /* [3077] */
    (xdc_Char)0x20,  /* [3078] */
    (xdc_Char)0x61,  /* [3079] */
    (xdc_Char)0x6c,  /* [3080] */
    (xdc_Char)0x69,  /* [3081] */
    (xdc_Char)0x67,  /* [3082] */
    (xdc_Char)0x6e,  /* [3083] */
    (xdc_Char)0x20,  /* [3084] */
    (xdc_Char)0x69,  /* [3085] */
    (xdc_Char)0x73,  /* [3086] */
    (xdc_Char)0x20,  /* [3087] */
    (xdc_Char)0x6e,  /* [3088] */
    (xdc_Char)0x6f,  /* [3089] */
    (xdc_Char)0x74,  /* [3090] */
    (xdc_Char)0x20,  /* [3091] */
    (xdc_Char)0x61,  /* [3092] */
    (xdc_Char)0x20,  /* [3093] */
    (xdc_Char)0x70,  /* [3094] */
    (xdc_Char)0x6f,  /* [3095] */
    (xdc_Char)0x77,  /* [3096] */
    (xdc_Char)0x65,  /* [3097] */
    (xdc_Char)0x72,  /* [3098] */
    (xdc_Char)0x20,  /* [3099] */
    (xdc_Char)0x6f,  /* [3100] */
    (xdc_Char)0x66,  /* [3101] */
    (xdc_Char)0x20,  /* [3102] */
    (xdc_Char)0x32,  /* [3103] */
    (xdc_Char)0x0,  /* [3104] */
    (xdc_Char)0x49,  /* [3105] */
    (xdc_Char)0x6e,  /* [3106] */
    (xdc_Char)0x76,  /* [3107] */
    (xdc_Char)0x61,  /* [3108] */
    (xdc_Char)0x6c,  /* [3109] */
    (xdc_Char)0x69,  /* [3110] */
    (xdc_Char)0x64,  /* [3111] */
    (xdc_Char)0x20,  /* [3112] */
    (xdc_Char)0x62,  /* [3113] */
    (xdc_Char)0x6c,  /* [3114] */
    (xdc_Char)0x6f,  /* [3115] */
    (xdc_Char)0x63,  /* [3116] */
    (xdc_Char)0x6b,  /* [3117] */
    (xdc_Char)0x20,  /* [3118] */
    (xdc_Char)0x61,  /* [3119] */
    (xdc_Char)0x64,  /* [3120] */
    (xdc_Char)0x64,  /* [3121] */
    (xdc_Char)0x72,  /* [3122] */
    (xdc_Char)0x65,  /* [3123] */
    (xdc_Char)0x73,  /* [3124] */
    (xdc_Char)0x73,  /* [3125] */
    (xdc_Char)0x20,  /* [3126] */
    (xdc_Char)0x6f,  /* [3127] */
    (xdc_Char)0x6e,  /* [3128] */
    (xdc_Char)0x20,  /* [3129] */
    (xdc_Char)0x74,  /* [3130] */
    (xdc_Char)0x68,  /* [3131] */
    (xdc_Char)0x65,  /* [3132] */
    (xdc_Char)0x20,  /* [3133] */
    (xdc_Char)0x66,  /* [3134] */
    (xdc_Char)0x72,  /* [3135] */
    (xdc_Char)0x65,  /* [3136] */
    (xdc_Char)0x65,  /* [3137] */
    (xdc_Char)0x2e,  /* [3138] */
    (xdc_Char)0x20,  /* [3139] */
    (xdc_Char)0x46,  /* [3140] */
    (xdc_Char)0x61,  /* [3141] */
    (xdc_Char)0x69,  /* [3142] */
    (xdc_Char)0x6c,  /* [3143] */
    (xdc_Char)0x65,  /* [3144] */
    (xdc_Char)0x64,  /* [3145] */
    (xdc_Char)0x20,  /* [3146] */
    (xdc_Char)0x74,  /* [3147] */
    (xdc_Char)0x6f,  /* [3148] */
    (xdc_Char)0x20,  /* [3149] */
    (xdc_Char)0x66,  /* [3150] */
    (xdc_Char)0x72,  /* [3151] */
    (xdc_Char)0x65,  /* [3152] */
    (xdc_Char)0x65,  /* [3153] */
    (xdc_Char)0x20,  /* [3154] */
    (xdc_Char)0x62,  /* [3155] */
    (xdc_Char)0x6c,  /* [3156] */
    (xdc_Char)0x6f,  /* [3157] */
    (xdc_Char)0x63,  /* [3158] */
    (xdc_Char)0x6b,  /* [3159] */
    (xdc_Char)0x20,  /* [3160] */
    (xdc_Char)0x62,  /* [3161] */
    (xdc_Char)0x61,  /* [3162] */
    (xdc_Char)0x63,  /* [3163] */
    (xdc_Char)0x6b,  /* [3164] */
    (xdc_Char)0x20,  /* [3165] */
    (xdc_Char)0x74,  /* [3166] */
    (xdc_Char)0x6f,  /* [3167] */
    (xdc_Char)0x20,  /* [3168] */
    (xdc_Char)0x68,  /* [3169] */
    (xdc_Char)0x65,  /* [3170] */
    (xdc_Char)0x61,  /* [3171] */
    (xdc_Char)0x70,  /* [3172] */
    (xdc_Char)0x2e,  /* [3173] */
    (xdc_Char)0x0,  /* [3174] */
    (xdc_Char)0x41,  /* [3175] */
    (xdc_Char)0x5f,  /* [3176] */
    (xdc_Char)0x64,  /* [3177] */
    (xdc_Char)0x6f,  /* [3178] */
    (xdc_Char)0x75,  /* [3179] */
    (xdc_Char)0x62,  /* [3180] */
    (xdc_Char)0x6c,  /* [3181] */
    (xdc_Char)0x65,  /* [3182] */
    (xdc_Char)0x46,  /* [3183] */
    (xdc_Char)0x72,  /* [3184] */
    (xdc_Char)0x65,  /* [3185] */
    (xdc_Char)0x65,  /* [3186] */
    (xdc_Char)0x3a,  /* [3187] */
    (xdc_Char)0x20,  /* [3188] */
    (xdc_Char)0x42,  /* [3189] */
    (xdc_Char)0x75,  /* [3190] */
    (xdc_Char)0x66,  /* [3191] */
    (xdc_Char)0x66,  /* [3192] */
    (xdc_Char)0x65,  /* [3193] */
    (xdc_Char)0x72,  /* [3194] */
    (xdc_Char)0x20,  /* [3195] */
    (xdc_Char)0x61,  /* [3196] */
    (xdc_Char)0x6c,  /* [3197] */
    (xdc_Char)0x72,  /* [3198] */
    (xdc_Char)0x65,  /* [3199] */
    (xdc_Char)0x61,  /* [3200] */
    (xdc_Char)0x64,  /* [3201] */
    (xdc_Char)0x79,  /* [3202] */
    (xdc_Char)0x20,  /* [3203] */
    (xdc_Char)0x66,  /* [3204] */
    (xdc_Char)0x72,  /* [3205] */
    (xdc_Char)0x65,  /* [3206] */
    (xdc_Char)0x65,  /* [3207] */
    (xdc_Char)0x0,  /* [3208] */
    (xdc_Char)0x41,  /* [3209] */
    (xdc_Char)0x5f,  /* [3210] */
    (xdc_Char)0x62,  /* [3211] */
    (xdc_Char)0x75,  /* [3212] */
    (xdc_Char)0x66,  /* [3213] */
    (xdc_Char)0x4f,  /* [3214] */
    (xdc_Char)0x76,  /* [3215] */
    (xdc_Char)0x65,  /* [3216] */
    (xdc_Char)0x72,  /* [3217] */
    (xdc_Char)0x66,  /* [3218] */
    (xdc_Char)0x6c,  /* [3219] */
    (xdc_Char)0x6f,  /* [3220] */
    (xdc_Char)0x77,  /* [3221] */
    (xdc_Char)0x3a,  /* [3222] */
    (xdc_Char)0x20,  /* [3223] */
    (xdc_Char)0x42,  /* [3224] */
    (xdc_Char)0x75,  /* [3225] */
    (xdc_Char)0x66,  /* [3226] */
    (xdc_Char)0x66,  /* [3227] */
    (xdc_Char)0x65,  /* [3228] */
    (xdc_Char)0x72,  /* [3229] */
    (xdc_Char)0x20,  /* [3230] */
    (xdc_Char)0x6f,  /* [3231] */
    (xdc_Char)0x76,  /* [3232] */
    (xdc_Char)0x65,  /* [3233] */
    (xdc_Char)0x72,  /* [3234] */
    (xdc_Char)0x66,  /* [3235] */
    (xdc_Char)0x6c,  /* [3236] */
    (xdc_Char)0x6f,  /* [3237] */
    (xdc_Char)0x77,  /* [3238] */
    (xdc_Char)0x0,  /* [3239] */
    (xdc_Char)0x41,  /* [3240] */
    (xdc_Char)0x5f,  /* [3241] */
    (xdc_Char)0x6e,  /* [3242] */
    (xdc_Char)0x6f,  /* [3243] */
    (xdc_Char)0x74,  /* [3244] */
    (xdc_Char)0x45,  /* [3245] */
    (xdc_Char)0x6d,  /* [3246] */
    (xdc_Char)0x70,  /* [3247] */
    (xdc_Char)0x74,  /* [3248] */
    (xdc_Char)0x79,  /* [3249] */
    (xdc_Char)0x3a,  /* [3250] */
    (xdc_Char)0x20,  /* [3251] */
    (xdc_Char)0x48,  /* [3252] */
    (xdc_Char)0x65,  /* [3253] */
    (xdc_Char)0x61,  /* [3254] */
    (xdc_Char)0x70,  /* [3255] */
    (xdc_Char)0x20,  /* [3256] */
    (xdc_Char)0x6e,  /* [3257] */
    (xdc_Char)0x6f,  /* [3258] */
    (xdc_Char)0x74,  /* [3259] */
    (xdc_Char)0x20,  /* [3260] */
    (xdc_Char)0x65,  /* [3261] */
    (xdc_Char)0x6d,  /* [3262] */
    (xdc_Char)0x70,  /* [3263] */
    (xdc_Char)0x74,  /* [3264] */
    (xdc_Char)0x79,  /* [3265] */
    (xdc_Char)0x0,  /* [3266] */
    (xdc_Char)0x41,  /* [3267] */
    (xdc_Char)0x5f,  /* [3268] */
    (xdc_Char)0x6e,  /* [3269] */
    (xdc_Char)0x75,  /* [3270] */
    (xdc_Char)0x6c,  /* [3271] */
    (xdc_Char)0x6c,  /* [3272] */
    (xdc_Char)0x4f,  /* [3273] */
    (xdc_Char)0x62,  /* [3274] */
    (xdc_Char)0x6a,  /* [3275] */
    (xdc_Char)0x65,  /* [3276] */
    (xdc_Char)0x63,  /* [3277] */
    (xdc_Char)0x74,  /* [3278] */
    (xdc_Char)0x3a,  /* [3279] */
    (xdc_Char)0x20,  /* [3280] */
    (xdc_Char)0x48,  /* [3281] */
    (xdc_Char)0x65,  /* [3282] */
    (xdc_Char)0x61,  /* [3283] */
    (xdc_Char)0x70,  /* [3284] */
    (xdc_Char)0x54,  /* [3285] */
    (xdc_Char)0x72,  /* [3286] */
    (xdc_Char)0x61,  /* [3287] */
    (xdc_Char)0x63,  /* [3288] */
    (xdc_Char)0x6b,  /* [3289] */
    (xdc_Char)0x5f,  /* [3290] */
    (xdc_Char)0x70,  /* [3291] */
    (xdc_Char)0x72,  /* [3292] */
    (xdc_Char)0x69,  /* [3293] */
    (xdc_Char)0x6e,  /* [3294] */
    (xdc_Char)0x74,  /* [3295] */
    (xdc_Char)0x48,  /* [3296] */
    (xdc_Char)0x65,  /* [3297] */
    (xdc_Char)0x61,  /* [3298] */
    (xdc_Char)0x70,  /* [3299] */
    (xdc_Char)0x20,  /* [3300] */
    (xdc_Char)0x63,  /* [3301] */
    (xdc_Char)0x61,  /* [3302] */
    (xdc_Char)0x6c,  /* [3303] */
    (xdc_Char)0x6c,  /* [3304] */
    (xdc_Char)0x65,  /* [3305] */
    (xdc_Char)0x64,  /* [3306] */
    (xdc_Char)0x20,  /* [3307] */
    (xdc_Char)0x77,  /* [3308] */
    (xdc_Char)0x69,  /* [3309] */
    (xdc_Char)0x74,  /* [3310] */
    (xdc_Char)0x68,  /* [3311] */
    (xdc_Char)0x20,  /* [3312] */
    (xdc_Char)0x6e,  /* [3313] */
    (xdc_Char)0x75,  /* [3314] */
    (xdc_Char)0x6c,  /* [3315] */
    (xdc_Char)0x6c,  /* [3316] */
    (xdc_Char)0x20,  /* [3317] */
    (xdc_Char)0x6f,  /* [3318] */
    (xdc_Char)0x62,  /* [3319] */
    (xdc_Char)0x6a,  /* [3320] */
    (xdc_Char)0x0,  /* [3321] */
    (xdc_Char)0x61,  /* [3322] */
    (xdc_Char)0x73,  /* [3323] */
    (xdc_Char)0x73,  /* [3324] */
    (xdc_Char)0x65,  /* [3325] */
    (xdc_Char)0x72,  /* [3326] */
    (xdc_Char)0x74,  /* [3327] */
    (xdc_Char)0x69,  /* [3328] */
    (xdc_Char)0x6f,  /* [3329] */
    (xdc_Char)0x6e,  /* [3330] */
    (xdc_Char)0x20,  /* [3331] */
    (xdc_Char)0x66,  /* [3332] */
    (xdc_Char)0x61,  /* [3333] */
    (xdc_Char)0x69,  /* [3334] */
    (xdc_Char)0x6c,  /* [3335] */
    (xdc_Char)0x75,  /* [3336] */
    (xdc_Char)0x72,  /* [3337] */
    (xdc_Char)0x65,  /* [3338] */
    (xdc_Char)0x25,  /* [3339] */
    (xdc_Char)0x73,  /* [3340] */
    (xdc_Char)0x25,  /* [3341] */
    (xdc_Char)0x73,  /* [3342] */
    (xdc_Char)0x0,  /* [3343] */
    (xdc_Char)0x25,  /* [3344] */
    (xdc_Char)0x24,  /* [3345] */
    (xdc_Char)0x53,  /* [3346] */
    (xdc_Char)0x0,  /* [3347] */
    (xdc_Char)0x6f,  /* [3348] */
    (xdc_Char)0x75,  /* [3349] */
    (xdc_Char)0x74,  /* [3350] */
    (xdc_Char)0x20,  /* [3351] */
    (xdc_Char)0x6f,  /* [3352] */
    (xdc_Char)0x66,  /* [3353] */
    (xdc_Char)0x20,  /* [3354] */
    (xdc_Char)0x6d,  /* [3355] */
    (xdc_Char)0x65,  /* [3356] */
    (xdc_Char)0x6d,  /* [3357] */
    (xdc_Char)0x6f,  /* [3358] */
    (xdc_Char)0x72,  /* [3359] */
    (xdc_Char)0x79,  /* [3360] */
    (xdc_Char)0x3a,  /* [3361] */
    (xdc_Char)0x20,  /* [3362] */
    (xdc_Char)0x68,  /* [3363] */
    (xdc_Char)0x65,  /* [3364] */
    (xdc_Char)0x61,  /* [3365] */
    (xdc_Char)0x70,  /* [3366] */
    (xdc_Char)0x3d,  /* [3367] */
    (xdc_Char)0x30,  /* [3368] */
    (xdc_Char)0x78,  /* [3369] */
    (xdc_Char)0x25,  /* [3370] */
    (xdc_Char)0x78,  /* [3371] */
    (xdc_Char)0x2c,  /* [3372] */
    (xdc_Char)0x20,  /* [3373] */
    (xdc_Char)0x73,  /* [3374] */
    (xdc_Char)0x69,  /* [3375] */
    (xdc_Char)0x7a,  /* [3376] */
    (xdc_Char)0x65,  /* [3377] */
    (xdc_Char)0x3d,  /* [3378] */
    (xdc_Char)0x25,  /* [3379] */
    (xdc_Char)0x75,  /* [3380] */
    (xdc_Char)0x0,  /* [3381] */
    (xdc_Char)0x25,  /* [3382] */
    (xdc_Char)0x73,  /* [3383] */
    (xdc_Char)0x20,  /* [3384] */
    (xdc_Char)0x30,  /* [3385] */
    (xdc_Char)0x78,  /* [3386] */
    (xdc_Char)0x25,  /* [3387] */
    (xdc_Char)0x78,  /* [3388] */
    (xdc_Char)0x0,  /* [3389] */
    (xdc_Char)0x45,  /* [3390] */
    (xdc_Char)0x5f,  /* [3391] */
    (xdc_Char)0x62,  /* [3392] */
    (xdc_Char)0x61,  /* [3393] */
    (xdc_Char)0x64,  /* [3394] */
    (xdc_Char)0x4c,  /* [3395] */
    (xdc_Char)0x65,  /* [3396] */
    (xdc_Char)0x76,  /* [3397] */
    (xdc_Char)0x65,  /* [3398] */
    (xdc_Char)0x6c,  /* [3399] */
    (xdc_Char)0x3a,  /* [3400] */
    (xdc_Char)0x20,  /* [3401] */
    (xdc_Char)0x42,  /* [3402] */
    (xdc_Char)0x61,  /* [3403] */
    (xdc_Char)0x64,  /* [3404] */
    (xdc_Char)0x20,  /* [3405] */
    (xdc_Char)0x66,  /* [3406] */
    (xdc_Char)0x69,  /* [3407] */
    (xdc_Char)0x6c,  /* [3408] */
    (xdc_Char)0x74,  /* [3409] */
    (xdc_Char)0x65,  /* [3410] */
    (xdc_Char)0x72,  /* [3411] */
    (xdc_Char)0x20,  /* [3412] */
    (xdc_Char)0x6c,  /* [3413] */
    (xdc_Char)0x65,  /* [3414] */
    (xdc_Char)0x76,  /* [3415] */
    (xdc_Char)0x65,  /* [3416] */
    (xdc_Char)0x6c,  /* [3417] */
    (xdc_Char)0x20,  /* [3418] */
    (xdc_Char)0x76,  /* [3419] */
    (xdc_Char)0x61,  /* [3420] */
    (xdc_Char)0x6c,  /* [3421] */
    (xdc_Char)0x75,  /* [3422] */
    (xdc_Char)0x65,  /* [3423] */
    (xdc_Char)0x3a,  /* [3424] */
    (xdc_Char)0x20,  /* [3425] */
    (xdc_Char)0x25,  /* [3426] */
    (xdc_Char)0x64,  /* [3427] */
    (xdc_Char)0x0,  /* [3428] */
    (xdc_Char)0x66,  /* [3429] */
    (xdc_Char)0x72,  /* [3430] */
    (xdc_Char)0x65,  /* [3431] */
    (xdc_Char)0x65,  /* [3432] */
    (xdc_Char)0x28,  /* [3433] */
    (xdc_Char)0x29,  /* [3434] */
    (xdc_Char)0x20,  /* [3435] */
    (xdc_Char)0x69,  /* [3436] */
    (xdc_Char)0x6e,  /* [3437] */
    (xdc_Char)0x76,  /* [3438] */
    (xdc_Char)0x61,  /* [3439] */
    (xdc_Char)0x6c,  /* [3440] */
    (xdc_Char)0x69,  /* [3441] */
    (xdc_Char)0x64,  /* [3442] */
    (xdc_Char)0x20,  /* [3443] */
    (xdc_Char)0x69,  /* [3444] */
    (xdc_Char)0x6e,  /* [3445] */
    (xdc_Char)0x20,  /* [3446] */
    (xdc_Char)0x67,  /* [3447] */
    (xdc_Char)0x72,  /* [3448] */
    (xdc_Char)0x6f,  /* [3449] */
    (xdc_Char)0x77,  /* [3450] */
    (xdc_Char)0x74,  /* [3451] */
    (xdc_Char)0x68,  /* [3452] */
    (xdc_Char)0x2d,  /* [3453] */
    (xdc_Char)0x6f,  /* [3454] */
    (xdc_Char)0x6e,  /* [3455] */
    (xdc_Char)0x6c,  /* [3456] */
    (xdc_Char)0x79,  /* [3457] */
    (xdc_Char)0x20,  /* [3458] */
    (xdc_Char)0x48,  /* [3459] */
    (xdc_Char)0x65,  /* [3460] */
    (xdc_Char)0x61,  /* [3461] */
    (xdc_Char)0x70,  /* [3462] */
    (xdc_Char)0x4d,  /* [3463] */
    (xdc_Char)0x69,  /* [3464] */
    (xdc_Char)0x6e,  /* [3465] */
    (xdc_Char)0x0,  /* [3466] */
    (xdc_Char)0x54,  /* [3467] */
    (xdc_Char)0x68,  /* [3468] */
    (xdc_Char)0x65,  /* [3469] */
    (xdc_Char)0x20,  /* [3470] */
    (xdc_Char)0x52,  /* [3471] */
    (xdc_Char)0x54,  /* [3472] */
    (xdc_Char)0x53,  /* [3473] */
    (xdc_Char)0x20,  /* [3474] */
    (xdc_Char)0x68,  /* [3475] */
    (xdc_Char)0x65,  /* [3476] */
    (xdc_Char)0x61,  /* [3477] */
    (xdc_Char)0x70,  /* [3478] */
    (xdc_Char)0x20,  /* [3479] */
    (xdc_Char)0x69,  /* [3480] */
    (xdc_Char)0x73,  /* [3481] */
    (xdc_Char)0x20,  /* [3482] */
    (xdc_Char)0x75,  /* [3483] */
    (xdc_Char)0x73,  /* [3484] */
    (xdc_Char)0x65,  /* [3485] */
    (xdc_Char)0x64,  /* [3486] */
    (xdc_Char)0x20,  /* [3487] */
    (xdc_Char)0x75,  /* [3488] */
    (xdc_Char)0x70,  /* [3489] */
    (xdc_Char)0x2e,  /* [3490] */
    (xdc_Char)0x20,  /* [3491] */
    (xdc_Char)0x45,  /* [3492] */
    (xdc_Char)0x78,  /* [3493] */
    (xdc_Char)0x61,  /* [3494] */
    (xdc_Char)0x6d,  /* [3495] */
    (xdc_Char)0x69,  /* [3496] */
    (xdc_Char)0x6e,  /* [3497] */
    (xdc_Char)0x65,  /* [3498] */
    (xdc_Char)0x20,  /* [3499] */
    (xdc_Char)0x50,  /* [3500] */
    (xdc_Char)0x72,  /* [3501] */
    (xdc_Char)0x6f,  /* [3502] */
    (xdc_Char)0x67,  /* [3503] */
    (xdc_Char)0x72,  /* [3504] */
    (xdc_Char)0x61,  /* [3505] */
    (xdc_Char)0x6d,  /* [3506] */
    (xdc_Char)0x2e,  /* [3507] */
    (xdc_Char)0x68,  /* [3508] */
    (xdc_Char)0x65,  /* [3509] */
    (xdc_Char)0x61,  /* [3510] */
    (xdc_Char)0x70,  /* [3511] */
    (xdc_Char)0x2e,  /* [3512] */
    (xdc_Char)0x0,  /* [3513] */
    (xdc_Char)0x45,  /* [3514] */
    (xdc_Char)0x5f,  /* [3515] */
    (xdc_Char)0x62,  /* [3516] */
    (xdc_Char)0x61,  /* [3517] */
    (xdc_Char)0x64,  /* [3518] */
    (xdc_Char)0x43,  /* [3519] */
    (xdc_Char)0x6f,  /* [3520] */
    (xdc_Char)0x6d,  /* [3521] */
    (xdc_Char)0x6d,  /* [3522] */
    (xdc_Char)0x61,  /* [3523] */
    (xdc_Char)0x6e,  /* [3524] */
    (xdc_Char)0x64,  /* [3525] */
    (xdc_Char)0x3a,  /* [3526] */
    (xdc_Char)0x20,  /* [3527] */
    (xdc_Char)0x52,  /* [3528] */
    (xdc_Char)0x65,  /* [3529] */
    (xdc_Char)0x63,  /* [3530] */
    (xdc_Char)0x65,  /* [3531] */
    (xdc_Char)0x69,  /* [3532] */
    (xdc_Char)0x76,  /* [3533] */
    (xdc_Char)0x65,  /* [3534] */
    (xdc_Char)0x64,  /* [3535] */
    (xdc_Char)0x20,  /* [3536] */
    (xdc_Char)0x69,  /* [3537] */
    (xdc_Char)0x6e,  /* [3538] */
    (xdc_Char)0x76,  /* [3539] */
    (xdc_Char)0x61,  /* [3540] */
    (xdc_Char)0x6c,  /* [3541] */
    (xdc_Char)0x69,  /* [3542] */
    (xdc_Char)0x64,  /* [3543] */
    (xdc_Char)0x20,  /* [3544] */
    (xdc_Char)0x63,  /* [3545] */
    (xdc_Char)0x6f,  /* [3546] */
    (xdc_Char)0x6d,  /* [3547] */
    (xdc_Char)0x6d,  /* [3548] */
    (xdc_Char)0x61,  /* [3549] */
    (xdc_Char)0x6e,  /* [3550] */
    (xdc_Char)0x64,  /* [3551] */
    (xdc_Char)0x2c,  /* [3552] */
    (xdc_Char)0x20,  /* [3553] */
    (xdc_Char)0x69,  /* [3554] */
    (xdc_Char)0x64,  /* [3555] */
    (xdc_Char)0x3a,  /* [3556] */
    (xdc_Char)0x20,  /* [3557] */
    (xdc_Char)0x25,  /* [3558] */
    (xdc_Char)0x64,  /* [3559] */
    (xdc_Char)0x2e,  /* [3560] */
    (xdc_Char)0x0,  /* [3561] */
    (xdc_Char)0x45,  /* [3562] */
    (xdc_Char)0x5f,  /* [3563] */
    (xdc_Char)0x61,  /* [3564] */
    (xdc_Char)0x6c,  /* [3565] */
    (xdc_Char)0x72,  /* [3566] */
    (xdc_Char)0x65,  /* [3567] */
    (xdc_Char)0x61,  /* [3568] */
    (xdc_Char)0x64,  /* [3569] */
    (xdc_Char)0x79,  /* [3570] */
    (xdc_Char)0x44,  /* [3571] */
    (xdc_Char)0x65,  /* [3572] */
    (xdc_Char)0x66,  /* [3573] */
    (xdc_Char)0x69,  /* [3574] */
    (xdc_Char)0x6e,  /* [3575] */
    (xdc_Char)0x65,  /* [3576] */
    (xdc_Char)0x64,  /* [3577] */
    (xdc_Char)0x3a,  /* [3578] */
    (xdc_Char)0x20,  /* [3579] */
    (xdc_Char)0x48,  /* [3580] */
    (xdc_Char)0x77,  /* [3581] */
    (xdc_Char)0x69,  /* [3582] */
    (xdc_Char)0x20,  /* [3583] */
    (xdc_Char)0x61,  /* [3584] */
    (xdc_Char)0x6c,  /* [3585] */
    (xdc_Char)0x72,  /* [3586] */
    (xdc_Char)0x65,  /* [3587] */
    (xdc_Char)0x61,  /* [3588] */
    (xdc_Char)0x64,  /* [3589] */
    (xdc_Char)0x79,  /* [3590] */
    (xdc_Char)0x20,  /* [3591] */
    (xdc_Char)0x64,  /* [3592] */
    (xdc_Char)0x65,  /* [3593] */
    (xdc_Char)0x66,  /* [3594] */
    (xdc_Char)0x69,  /* [3595] */
    (xdc_Char)0x6e,  /* [3596] */
    (xdc_Char)0x65,  /* [3597] */
    (xdc_Char)0x64,  /* [3598] */
    (xdc_Char)0x3a,  /* [3599] */
    (xdc_Char)0x20,  /* [3600] */
    (xdc_Char)0x69,  /* [3601] */
    (xdc_Char)0x6e,  /* [3602] */
    (xdc_Char)0x74,  /* [3603] */
    (xdc_Char)0x72,  /* [3604] */
    (xdc_Char)0x23,  /* [3605] */
    (xdc_Char)0x20,  /* [3606] */
    (xdc_Char)0x25,  /* [3607] */
    (xdc_Char)0x64,  /* [3608] */
    (xdc_Char)0x0,  /* [3609] */
    (xdc_Char)0x45,  /* [3610] */
    (xdc_Char)0x5f,  /* [3611] */
    (xdc_Char)0x6e,  /* [3612] */
    (xdc_Char)0x6f,  /* [3613] */
    (xdc_Char)0x74,  /* [3614] */
    (xdc_Char)0x49,  /* [3615] */
    (xdc_Char)0x6d,  /* [3616] */
    (xdc_Char)0x70,  /* [3617] */
    (xdc_Char)0x6c,  /* [3618] */
    (xdc_Char)0x65,  /* [3619] */
    (xdc_Char)0x6d,  /* [3620] */
    (xdc_Char)0x65,  /* [3621] */
    (xdc_Char)0x6e,  /* [3622] */
    (xdc_Char)0x74,  /* [3623] */
    (xdc_Char)0x65,  /* [3624] */
    (xdc_Char)0x64,  /* [3625] */
    (xdc_Char)0x3a,  /* [3626] */
    (xdc_Char)0x20,  /* [3627] */
    (xdc_Char)0x46,  /* [3628] */
    (xdc_Char)0x75,  /* [3629] */
    (xdc_Char)0x6e,  /* [3630] */
    (xdc_Char)0x63,  /* [3631] */
    (xdc_Char)0x74,  /* [3632] */
    (xdc_Char)0x69,  /* [3633] */
    (xdc_Char)0x6f,  /* [3634] */
    (xdc_Char)0x6e,  /* [3635] */
    (xdc_Char)0x20,  /* [3636] */
    (xdc_Char)0x6e,  /* [3637] */
    (xdc_Char)0x6f,  /* [3638] */
    (xdc_Char)0x74,  /* [3639] */
    (xdc_Char)0x20,  /* [3640] */
    (xdc_Char)0x69,  /* [3641] */
    (xdc_Char)0x6d,  /* [3642] */
    (xdc_Char)0x70,  /* [3643] */
    (xdc_Char)0x6c,  /* [3644] */
    (xdc_Char)0x65,  /* [3645] */
    (xdc_Char)0x6d,  /* [3646] */
    (xdc_Char)0x65,  /* [3647] */
    (xdc_Char)0x6e,  /* [3648] */
    (xdc_Char)0x74,  /* [3649] */
    (xdc_Char)0x65,  /* [3650] */
    (xdc_Char)0x64,  /* [3651] */
    (xdc_Char)0x3a,  /* [3652] */
    (xdc_Char)0x20,  /* [3653] */
    (xdc_Char)0x25,  /* [3654] */
    (xdc_Char)0x73,  /* [3655] */
    (xdc_Char)0x0,  /* [3656] */
    (xdc_Char)0x45,  /* [3657] */
    (xdc_Char)0x5f,  /* [3658] */
    (xdc_Char)0x69,  /* [3659] */
    (xdc_Char)0x6e,  /* [3660] */
    (xdc_Char)0x76,  /* [3661] */
    (xdc_Char)0x61,  /* [3662] */
    (xdc_Char)0x6c,  /* [3663] */
    (xdc_Char)0x69,  /* [3664] */
    (xdc_Char)0x64,  /* [3665] */
    (xdc_Char)0x54,  /* [3666] */
    (xdc_Char)0x69,  /* [3667] */
    (xdc_Char)0x6d,  /* [3668] */
    (xdc_Char)0x65,  /* [3669] */
    (xdc_Char)0x72,  /* [3670] */
    (xdc_Char)0x3a,  /* [3671] */
    (xdc_Char)0x20,  /* [3672] */
    (xdc_Char)0x49,  /* [3673] */
    (xdc_Char)0x6e,  /* [3674] */
    (xdc_Char)0x76,  /* [3675] */
    (xdc_Char)0x61,  /* [3676] */
    (xdc_Char)0x6c,  /* [3677] */
    (xdc_Char)0x69,  /* [3678] */
    (xdc_Char)0x64,  /* [3679] */
    (xdc_Char)0x20,  /* [3680] */
    (xdc_Char)0x54,  /* [3681] */
    (xdc_Char)0x69,  /* [3682] */
    (xdc_Char)0x6d,  /* [3683] */
    (xdc_Char)0x65,  /* [3684] */
    (xdc_Char)0x72,  /* [3685] */
    (xdc_Char)0x20,  /* [3686] */
    (xdc_Char)0x49,  /* [3687] */
    (xdc_Char)0x64,  /* [3688] */
    (xdc_Char)0x20,  /* [3689] */
    (xdc_Char)0x25,  /* [3690] */
    (xdc_Char)0x64,  /* [3691] */
    (xdc_Char)0x0,  /* [3692] */
    (xdc_Char)0x45,  /* [3693] */
    (xdc_Char)0x5f,  /* [3694] */
    (xdc_Char)0x6e,  /* [3695] */
    (xdc_Char)0x6f,  /* [3696] */
    (xdc_Char)0x74,  /* [3697] */
    (xdc_Char)0x41,  /* [3698] */
    (xdc_Char)0x76,  /* [3699] */
    (xdc_Char)0x61,  /* [3700] */
    (xdc_Char)0x69,  /* [3701] */
    (xdc_Char)0x6c,  /* [3702] */
    (xdc_Char)0x61,  /* [3703] */
    (xdc_Char)0x62,  /* [3704] */
    (xdc_Char)0x6c,  /* [3705] */
    (xdc_Char)0x65,  /* [3706] */
    (xdc_Char)0x3a,  /* [3707] */
    (xdc_Char)0x20,  /* [3708] */
    (xdc_Char)0x54,  /* [3709] */
    (xdc_Char)0x69,  /* [3710] */
    (xdc_Char)0x6d,  /* [3711] */
    (xdc_Char)0x65,  /* [3712] */
    (xdc_Char)0x72,  /* [3713] */
    (xdc_Char)0x20,  /* [3714] */
    (xdc_Char)0x6e,  /* [3715] */
    (xdc_Char)0x6f,  /* [3716] */
    (xdc_Char)0x74,  /* [3717] */
    (xdc_Char)0x20,  /* [3718] */
    (xdc_Char)0x61,  /* [3719] */
    (xdc_Char)0x76,  /* [3720] */
    (xdc_Char)0x61,  /* [3721] */
    (xdc_Char)0x69,  /* [3722] */
    (xdc_Char)0x6c,  /* [3723] */
    (xdc_Char)0x61,  /* [3724] */
    (xdc_Char)0x62,  /* [3725] */
    (xdc_Char)0x6c,  /* [3726] */
    (xdc_Char)0x65,  /* [3727] */
    (xdc_Char)0x20,  /* [3728] */
    (xdc_Char)0x25,  /* [3729] */
    (xdc_Char)0x64,  /* [3730] */
    (xdc_Char)0x0,  /* [3731] */
    (xdc_Char)0x45,  /* [3732] */
    (xdc_Char)0x5f,  /* [3733] */
    (xdc_Char)0x63,  /* [3734] */
    (xdc_Char)0x61,  /* [3735] */
    (xdc_Char)0x6e,  /* [3736] */
    (xdc_Char)0x6e,  /* [3737] */
    (xdc_Char)0x6f,  /* [3738] */
    (xdc_Char)0x74,  /* [3739] */
    (xdc_Char)0x53,  /* [3740] */
    (xdc_Char)0x75,  /* [3741] */
    (xdc_Char)0x70,  /* [3742] */
    (xdc_Char)0x70,  /* [3743] */
    (xdc_Char)0x6f,  /* [3744] */
    (xdc_Char)0x72,  /* [3745] */
    (xdc_Char)0x74,  /* [3746] */
    (xdc_Char)0x3a,  /* [3747] */
    (xdc_Char)0x20,  /* [3748] */
    (xdc_Char)0x54,  /* [3749] */
    (xdc_Char)0x69,  /* [3750] */
    (xdc_Char)0x6d,  /* [3751] */
    (xdc_Char)0x65,  /* [3752] */
    (xdc_Char)0x72,  /* [3753] */
    (xdc_Char)0x20,  /* [3754] */
    (xdc_Char)0x63,  /* [3755] */
    (xdc_Char)0x61,  /* [3756] */
    (xdc_Char)0x6e,  /* [3757] */
    (xdc_Char)0x6e,  /* [3758] */
    (xdc_Char)0x6f,  /* [3759] */
    (xdc_Char)0x74,  /* [3760] */
    (xdc_Char)0x20,  /* [3761] */
    (xdc_Char)0x73,  /* [3762] */
    (xdc_Char)0x75,  /* [3763] */
    (xdc_Char)0x70,  /* [3764] */
    (xdc_Char)0x70,  /* [3765] */
    (xdc_Char)0x6f,  /* [3766] */
    (xdc_Char)0x72,  /* [3767] */
    (xdc_Char)0x74,  /* [3768] */
    (xdc_Char)0x20,  /* [3769] */
    (xdc_Char)0x72,  /* [3770] */
    (xdc_Char)0x65,  /* [3771] */
    (xdc_Char)0x71,  /* [3772] */
    (xdc_Char)0x75,  /* [3773] */
    (xdc_Char)0x65,  /* [3774] */
    (xdc_Char)0x73,  /* [3775] */
    (xdc_Char)0x74,  /* [3776] */
    (xdc_Char)0x65,  /* [3777] */
    (xdc_Char)0x64,  /* [3778] */
    (xdc_Char)0x20,  /* [3779] */
    (xdc_Char)0x70,  /* [3780] */
    (xdc_Char)0x65,  /* [3781] */
    (xdc_Char)0x72,  /* [3782] */
    (xdc_Char)0x69,  /* [3783] */
    (xdc_Char)0x6f,  /* [3784] */
    (xdc_Char)0x64,  /* [3785] */
    (xdc_Char)0x20,  /* [3786] */
    (xdc_Char)0x25,  /* [3787] */
    (xdc_Char)0x64,  /* [3788] */
    (xdc_Char)0x0,  /* [3789] */
    (xdc_Char)0x45,  /* [3790] */
    (xdc_Char)0x5f,  /* [3791] */
    (xdc_Char)0x72,  /* [3792] */
    (xdc_Char)0x75,  /* [3793] */
    (xdc_Char)0x6e,  /* [3794] */
    (xdc_Char)0x74,  /* [3795] */
    (xdc_Char)0x69,  /* [3796] */
    (xdc_Char)0x6d,  /* [3797] */
    (xdc_Char)0x65,  /* [3798] */
    (xdc_Char)0x43,  /* [3799] */
    (xdc_Char)0x72,  /* [3800] */
    (xdc_Char)0x65,  /* [3801] */
    (xdc_Char)0x61,  /* [3802] */
    (xdc_Char)0x74,  /* [3803] */
    (xdc_Char)0x65,  /* [3804] */
    (xdc_Char)0x3a,  /* [3805] */
    (xdc_Char)0x20,  /* [3806] */
    (xdc_Char)0x52,  /* [3807] */
    (xdc_Char)0x75,  /* [3808] */
    (xdc_Char)0x6e,  /* [3809] */
    (xdc_Char)0x74,  /* [3810] */
    (xdc_Char)0x69,  /* [3811] */
    (xdc_Char)0x6d,  /* [3812] */
    (xdc_Char)0x65,  /* [3813] */
    (xdc_Char)0x20,  /* [3814] */
    (xdc_Char)0x54,  /* [3815] */
    (xdc_Char)0x69,  /* [3816] */
    (xdc_Char)0x6d,  /* [3817] */
    (xdc_Char)0x65,  /* [3818] */
    (xdc_Char)0x72,  /* [3819] */
    (xdc_Char)0x20,  /* [3820] */
    (xdc_Char)0x63,  /* [3821] */
    (xdc_Char)0x72,  /* [3822] */
    (xdc_Char)0x65,  /* [3823] */
    (xdc_Char)0x61,  /* [3824] */
    (xdc_Char)0x74,  /* [3825] */
    (xdc_Char)0x65,  /* [3826] */
    (xdc_Char)0x20,  /* [3827] */
    (xdc_Char)0x69,  /* [3828] */
    (xdc_Char)0x73,  /* [3829] */
    (xdc_Char)0x20,  /* [3830] */
    (xdc_Char)0x6e,  /* [3831] */
    (xdc_Char)0x6f,  /* [3832] */
    (xdc_Char)0x74,  /* [3833] */
    (xdc_Char)0x20,  /* [3834] */
    (xdc_Char)0x73,  /* [3835] */
    (xdc_Char)0x75,  /* [3836] */
    (xdc_Char)0x70,  /* [3837] */
    (xdc_Char)0x70,  /* [3838] */
    (xdc_Char)0x6f,  /* [3839] */
    (xdc_Char)0x72,  /* [3840] */
    (xdc_Char)0x74,  /* [3841] */
    (xdc_Char)0x65,  /* [3842] */
    (xdc_Char)0x64,  /* [3843] */
    (xdc_Char)0x20,  /* [3844] */
    (xdc_Char)0x25,  /* [3845] */
    (xdc_Char)0x64,  /* [3846] */
    (xdc_Char)0x0,  /* [3847] */
    (xdc_Char)0x45,  /* [3848] */
    (xdc_Char)0x5f,  /* [3849] */
    (xdc_Char)0x64,  /* [3850] */
    (xdc_Char)0x79,  /* [3851] */
    (xdc_Char)0x6e,  /* [3852] */
    (xdc_Char)0x61,  /* [3853] */
    (xdc_Char)0x6d,  /* [3854] */
    (xdc_Char)0x69,  /* [3855] */
    (xdc_Char)0x63,  /* [3856] */
    (xdc_Char)0x4d,  /* [3857] */
    (xdc_Char)0x6f,  /* [3858] */
    (xdc_Char)0x64,  /* [3859] */
    (xdc_Char)0x65,  /* [3860] */
    (xdc_Char)0x4e,  /* [3861] */
    (xdc_Char)0x6f,  /* [3862] */
    (xdc_Char)0x74,  /* [3863] */
    (xdc_Char)0x41,  /* [3864] */
    (xdc_Char)0x6c,  /* [3865] */
    (xdc_Char)0x6c,  /* [3866] */
    (xdc_Char)0x6f,  /* [3867] */
    (xdc_Char)0x77,  /* [3868] */
    (xdc_Char)0x65,  /* [3869] */
    (xdc_Char)0x64,  /* [3870] */
    (xdc_Char)0x3a,  /* [3871] */
    (xdc_Char)0x20,  /* [3872] */
    (xdc_Char)0x44,  /* [3873] */
    (xdc_Char)0x79,  /* [3874] */
    (xdc_Char)0x6e,  /* [3875] */
    (xdc_Char)0x61,  /* [3876] */
    (xdc_Char)0x6d,  /* [3877] */
    (xdc_Char)0x69,  /* [3878] */
    (xdc_Char)0x63,  /* [3879] */
    (xdc_Char)0x20,  /* [3880] */
    (xdc_Char)0x6d,  /* [3881] */
    (xdc_Char)0x6f,  /* [3882] */
    (xdc_Char)0x64,  /* [3883] */
    (xdc_Char)0x65,  /* [3884] */
    (xdc_Char)0x20,  /* [3885] */
    (xdc_Char)0x69,  /* [3886] */
    (xdc_Char)0x73,  /* [3887] */
    (xdc_Char)0x20,  /* [3888] */
    (xdc_Char)0x6e,  /* [3889] */
    (xdc_Char)0x6f,  /* [3890] */
    (xdc_Char)0x74,  /* [3891] */
    (xdc_Char)0x20,  /* [3892] */
    (xdc_Char)0x65,  /* [3893] */
    (xdc_Char)0x6e,  /* [3894] */
    (xdc_Char)0x61,  /* [3895] */
    (xdc_Char)0x62,  /* [3896] */
    (xdc_Char)0x6c,  /* [3897] */
    (xdc_Char)0x65,  /* [3898] */
    (xdc_Char)0x64,  /* [3899] */
    (xdc_Char)0x20,  /* [3900] */
    (xdc_Char)0x28,  /* [3901] */
    (xdc_Char)0x61,  /* [3902] */
    (xdc_Char)0x6c,  /* [3903] */
    (xdc_Char)0x6c,  /* [3904] */
    (xdc_Char)0x6f,  /* [3905] */
    (xdc_Char)0x77,  /* [3906] */
    (xdc_Char)0x44,  /* [3907] */
    (xdc_Char)0x79,  /* [3908] */
    (xdc_Char)0x6e,  /* [3909] */
    (xdc_Char)0x61,  /* [3910] */
    (xdc_Char)0x6d,  /* [3911] */
    (xdc_Char)0x69,  /* [3912] */
    (xdc_Char)0x63,  /* [3913] */
    (xdc_Char)0x4d,  /* [3914] */
    (xdc_Char)0x6f,  /* [3915] */
    (xdc_Char)0x64,  /* [3916] */
    (xdc_Char)0x65,  /* [3917] */
    (xdc_Char)0x3d,  /* [3918] */
    (xdc_Char)0x66,  /* [3919] */
    (xdc_Char)0x61,  /* [3920] */
    (xdc_Char)0x6c,  /* [3921] */
    (xdc_Char)0x73,  /* [3922] */
    (xdc_Char)0x65,  /* [3923] */
    (xdc_Char)0x29,  /* [3924] */
    (xdc_Char)0x0,  /* [3925] */
    (xdc_Char)0x45,  /* [3926] */
    (xdc_Char)0x5f,  /* [3927] */
    (xdc_Char)0x6f,  /* [3928] */
    (xdc_Char)0x62,  /* [3929] */
    (xdc_Char)0x6a,  /* [3930] */
    (xdc_Char)0x65,  /* [3931] */
    (xdc_Char)0x63,  /* [3932] */
    (xdc_Char)0x74,  /* [3933] */
    (xdc_Char)0x4e,  /* [3934] */
    (xdc_Char)0x6f,  /* [3935] */
    (xdc_Char)0x74,  /* [3936] */
    (xdc_Char)0x49,  /* [3937] */
    (xdc_Char)0x6e,  /* [3938] */
    (xdc_Char)0x4b,  /* [3939] */
    (xdc_Char)0x65,  /* [3940] */
    (xdc_Char)0x72,  /* [3941] */
    (xdc_Char)0x6e,  /* [3942] */
    (xdc_Char)0x65,  /* [3943] */
    (xdc_Char)0x6c,  /* [3944] */
    (xdc_Char)0x53,  /* [3945] */
    (xdc_Char)0x70,  /* [3946] */
    (xdc_Char)0x61,  /* [3947] */
    (xdc_Char)0x63,  /* [3948] */
    (xdc_Char)0x65,  /* [3949] */
    (xdc_Char)0x3a,  /* [3950] */
    (xdc_Char)0x20,  /* [3951] */
    (xdc_Char)0x53,  /* [3952] */
    (xdc_Char)0x65,  /* [3953] */
    (xdc_Char)0x6d,  /* [3954] */
    (xdc_Char)0x61,  /* [3955] */
    (xdc_Char)0x70,  /* [3956] */
    (xdc_Char)0x68,  /* [3957] */
    (xdc_Char)0x6f,  /* [3958] */
    (xdc_Char)0x72,  /* [3959] */
    (xdc_Char)0x65,  /* [3960] */
    (xdc_Char)0x20,  /* [3961] */
    (xdc_Char)0x6f,  /* [3962] */
    (xdc_Char)0x62,  /* [3963] */
    (xdc_Char)0x6a,  /* [3964] */
    (xdc_Char)0x65,  /* [3965] */
    (xdc_Char)0x63,  /* [3966] */
    (xdc_Char)0x74,  /* [3967] */
    (xdc_Char)0x20,  /* [3968] */
    (xdc_Char)0x70,  /* [3969] */
    (xdc_Char)0x61,  /* [3970] */
    (xdc_Char)0x73,  /* [3971] */
    (xdc_Char)0x73,  /* [3972] */
    (xdc_Char)0x65,  /* [3973] */
    (xdc_Char)0x64,  /* [3974] */
    (xdc_Char)0x20,  /* [3975] */
    (xdc_Char)0x6e,  /* [3976] */
    (xdc_Char)0x6f,  /* [3977] */
    (xdc_Char)0x74,  /* [3978] */
    (xdc_Char)0x20,  /* [3979] */
    (xdc_Char)0x69,  /* [3980] */
    (xdc_Char)0x6e,  /* [3981] */
    (xdc_Char)0x20,  /* [3982] */
    (xdc_Char)0x4b,  /* [3983] */
    (xdc_Char)0x65,  /* [3984] */
    (xdc_Char)0x72,  /* [3985] */
    (xdc_Char)0x6e,  /* [3986] */
    (xdc_Char)0x65,  /* [3987] */
    (xdc_Char)0x6c,  /* [3988] */
    (xdc_Char)0x20,  /* [3989] */
    (xdc_Char)0x61,  /* [3990] */
    (xdc_Char)0x64,  /* [3991] */
    (xdc_Char)0x64,  /* [3992] */
    (xdc_Char)0x72,  /* [3993] */
    (xdc_Char)0x65,  /* [3994] */
    (xdc_Char)0x73,  /* [3995] */
    (xdc_Char)0x73,  /* [3996] */
    (xdc_Char)0x20,  /* [3997] */
    (xdc_Char)0x73,  /* [3998] */
    (xdc_Char)0x70,  /* [3999] */
    (xdc_Char)0x61,  /* [4000] */
    (xdc_Char)0x63,  /* [4001] */
    (xdc_Char)0x65,  /* [4002] */
    (xdc_Char)0x2e,  /* [4003] */
    (xdc_Char)0x0,  /* [4004] */
    (xdc_Char)0x45,  /* [4005] */
    (xdc_Char)0x5f,  /* [4006] */
    (xdc_Char)0x73,  /* [4007] */
    (xdc_Char)0x74,  /* [4008] */
    (xdc_Char)0x61,  /* [4009] */
    (xdc_Char)0x63,  /* [4010] */
    (xdc_Char)0x6b,  /* [4011] */
    (xdc_Char)0x4f,  /* [4012] */
    (xdc_Char)0x76,  /* [4013] */
    (xdc_Char)0x65,  /* [4014] */
    (xdc_Char)0x72,  /* [4015] */
    (xdc_Char)0x66,  /* [4016] */
    (xdc_Char)0x6c,  /* [4017] */
    (xdc_Char)0x6f,  /* [4018] */
    (xdc_Char)0x77,  /* [4019] */
    (xdc_Char)0x3a,  /* [4020] */
    (xdc_Char)0x20,  /* [4021] */
    (xdc_Char)0x54,  /* [4022] */
    (xdc_Char)0x61,  /* [4023] */
    (xdc_Char)0x73,  /* [4024] */
    (xdc_Char)0x6b,  /* [4025] */
    (xdc_Char)0x20,  /* [4026] */
    (xdc_Char)0x30,  /* [4027] */
    (xdc_Char)0x78,  /* [4028] */
    (xdc_Char)0x25,  /* [4029] */
    (xdc_Char)0x78,  /* [4030] */
    (xdc_Char)0x20,  /* [4031] */
    (xdc_Char)0x73,  /* [4032] */
    (xdc_Char)0x74,  /* [4033] */
    (xdc_Char)0x61,  /* [4034] */
    (xdc_Char)0x63,  /* [4035] */
    (xdc_Char)0x6b,  /* [4036] */
    (xdc_Char)0x20,  /* [4037] */
    (xdc_Char)0x6f,  /* [4038] */
    (xdc_Char)0x76,  /* [4039] */
    (xdc_Char)0x65,  /* [4040] */
    (xdc_Char)0x72,  /* [4041] */
    (xdc_Char)0x66,  /* [4042] */
    (xdc_Char)0x6c,  /* [4043] */
    (xdc_Char)0x6f,  /* [4044] */
    (xdc_Char)0x77,  /* [4045] */
    (xdc_Char)0x2e,  /* [4046] */
    (xdc_Char)0x0,  /* [4047] */
    (xdc_Char)0x45,  /* [4048] */
    (xdc_Char)0x5f,  /* [4049] */
    (xdc_Char)0x73,  /* [4050] */
    (xdc_Char)0x70,  /* [4051] */
    (xdc_Char)0x4f,  /* [4052] */
    (xdc_Char)0x75,  /* [4053] */
    (xdc_Char)0x74,  /* [4054] */
    (xdc_Char)0x4f,  /* [4055] */
    (xdc_Char)0x66,  /* [4056] */
    (xdc_Char)0x42,  /* [4057] */
    (xdc_Char)0x6f,  /* [4058] */
    (xdc_Char)0x75,  /* [4059] */
    (xdc_Char)0x6e,  /* [4060] */
    (xdc_Char)0x64,  /* [4061] */
    (xdc_Char)0x73,  /* [4062] */
    (xdc_Char)0x3a,  /* [4063] */
    (xdc_Char)0x20,  /* [4064] */
    (xdc_Char)0x54,  /* [4065] */
    (xdc_Char)0x61,  /* [4066] */
    (xdc_Char)0x73,  /* [4067] */
    (xdc_Char)0x6b,  /* [4068] */
    (xdc_Char)0x20,  /* [4069] */
    (xdc_Char)0x30,  /* [4070] */
    (xdc_Char)0x78,  /* [4071] */
    (xdc_Char)0x25,  /* [4072] */
    (xdc_Char)0x78,  /* [4073] */
    (xdc_Char)0x20,  /* [4074] */
    (xdc_Char)0x73,  /* [4075] */
    (xdc_Char)0x74,  /* [4076] */
    (xdc_Char)0x61,  /* [4077] */
    (xdc_Char)0x63,  /* [4078] */
    (xdc_Char)0x6b,  /* [4079] */
    (xdc_Char)0x20,  /* [4080] */
    (xdc_Char)0x65,  /* [4081] */
    (xdc_Char)0x72,  /* [4082] */
    (xdc_Char)0x72,  /* [4083] */
    (xdc_Char)0x6f,  /* [4084] */
    (xdc_Char)0x72,  /* [4085] */
    (xdc_Char)0x2c,  /* [4086] */
    (xdc_Char)0x20,  /* [4087] */
    (xdc_Char)0x53,  /* [4088] */
    (xdc_Char)0x50,  /* [4089] */
    (xdc_Char)0x20,  /* [4090] */
    (xdc_Char)0x3d,  /* [4091] */
    (xdc_Char)0x20,  /* [4092] */
    (xdc_Char)0x30,  /* [4093] */
    (xdc_Char)0x78,  /* [4094] */
    (xdc_Char)0x25,  /* [4095] */
    (xdc_Char)0x78,  /* [4096] */
    (xdc_Char)0x2e,  /* [4097] */
    (xdc_Char)0x0,  /* [4098] */
    (xdc_Char)0x45,  /* [4099] */
    (xdc_Char)0x5f,  /* [4100] */
    (xdc_Char)0x64,  /* [4101] */
    (xdc_Char)0x65,  /* [4102] */
    (xdc_Char)0x6c,  /* [4103] */
    (xdc_Char)0x65,  /* [4104] */
    (xdc_Char)0x74,  /* [4105] */
    (xdc_Char)0x65,  /* [4106] */
    (xdc_Char)0x4e,  /* [4107] */
    (xdc_Char)0x6f,  /* [4108] */
    (xdc_Char)0x74,  /* [4109] */
    (xdc_Char)0x41,  /* [4110] */
    (xdc_Char)0x6c,  /* [4111] */
    (xdc_Char)0x6c,  /* [4112] */
    (xdc_Char)0x6f,  /* [4113] */
    (xdc_Char)0x77,  /* [4114] */
    (xdc_Char)0x65,  /* [4115] */
    (xdc_Char)0x64,  /* [4116] */
    (xdc_Char)0x3a,  /* [4117] */
    (xdc_Char)0x20,  /* [4118] */
    (xdc_Char)0x54,  /* [4119] */
    (xdc_Char)0x61,  /* [4120] */
    (xdc_Char)0x73,  /* [4121] */
    (xdc_Char)0x6b,  /* [4122] */
    (xdc_Char)0x20,  /* [4123] */
    (xdc_Char)0x30,  /* [4124] */
    (xdc_Char)0x78,  /* [4125] */
    (xdc_Char)0x25,  /* [4126] */
    (xdc_Char)0x78,  /* [4127] */
    (xdc_Char)0x2e,  /* [4128] */
    (xdc_Char)0x0,  /* [4129] */
    (xdc_Char)0x45,  /* [4130] */
    (xdc_Char)0x5f,  /* [4131] */
    (xdc_Char)0x6d,  /* [4132] */
    (xdc_Char)0x6f,  /* [4133] */
    (xdc_Char)0x64,  /* [4134] */
    (xdc_Char)0x75,  /* [4135] */
    (xdc_Char)0x6c,  /* [4136] */
    (xdc_Char)0x65,  /* [4137] */
    (xdc_Char)0x53,  /* [4138] */
    (xdc_Char)0x74,  /* [4139] */
    (xdc_Char)0x61,  /* [4140] */
    (xdc_Char)0x74,  /* [4141] */
    (xdc_Char)0x65,  /* [4142] */
    (xdc_Char)0x43,  /* [4143] */
    (xdc_Char)0x68,  /* [4144] */
    (xdc_Char)0x65,  /* [4145] */
    (xdc_Char)0x63,  /* [4146] */
    (xdc_Char)0x6b,  /* [4147] */
    (xdc_Char)0x46,  /* [4148] */
    (xdc_Char)0x61,  /* [4149] */
    (xdc_Char)0x69,  /* [4150] */
    (xdc_Char)0x6c,  /* [4151] */
    (xdc_Char)0x65,  /* [4152] */
    (xdc_Char)0x64,  /* [4153] */
    (xdc_Char)0x3a,  /* [4154] */
    (xdc_Char)0x20,  /* [4155] */
    (xdc_Char)0x54,  /* [4156] */
    (xdc_Char)0x61,  /* [4157] */
    (xdc_Char)0x73,  /* [4158] */
    (xdc_Char)0x6b,  /* [4159] */
    (xdc_Char)0x20,  /* [4160] */
    (xdc_Char)0x6d,  /* [4161] */
    (xdc_Char)0x6f,  /* [4162] */
    (xdc_Char)0x64,  /* [4163] */
    (xdc_Char)0x75,  /* [4164] */
    (xdc_Char)0x6c,  /* [4165] */
    (xdc_Char)0x65,  /* [4166] */
    (xdc_Char)0x20,  /* [4167] */
    (xdc_Char)0x73,  /* [4168] */
    (xdc_Char)0x74,  /* [4169] */
    (xdc_Char)0x61,  /* [4170] */
    (xdc_Char)0x74,  /* [4171] */
    (xdc_Char)0x65,  /* [4172] */
    (xdc_Char)0x20,  /* [4173] */
    (xdc_Char)0x64,  /* [4174] */
    (xdc_Char)0x61,  /* [4175] */
    (xdc_Char)0x74,  /* [4176] */
    (xdc_Char)0x61,  /* [4177] */
    (xdc_Char)0x20,  /* [4178] */
    (xdc_Char)0x69,  /* [4179] */
    (xdc_Char)0x6e,  /* [4180] */
    (xdc_Char)0x74,  /* [4181] */
    (xdc_Char)0x65,  /* [4182] */
    (xdc_Char)0x67,  /* [4183] */
    (xdc_Char)0x72,  /* [4184] */
    (xdc_Char)0x69,  /* [4185] */
    (xdc_Char)0x74,  /* [4186] */
    (xdc_Char)0x79,  /* [4187] */
    (xdc_Char)0x20,  /* [4188] */
    (xdc_Char)0x63,  /* [4189] */
    (xdc_Char)0x68,  /* [4190] */
    (xdc_Char)0x65,  /* [4191] */
    (xdc_Char)0x63,  /* [4192] */
    (xdc_Char)0x6b,  /* [4193] */
    (xdc_Char)0x20,  /* [4194] */
    (xdc_Char)0x66,  /* [4195] */
    (xdc_Char)0x61,  /* [4196] */
    (xdc_Char)0x69,  /* [4197] */
    (xdc_Char)0x6c,  /* [4198] */
    (xdc_Char)0x65,  /* [4199] */
    (xdc_Char)0x64,  /* [4200] */
    (xdc_Char)0x2e,  /* [4201] */
    (xdc_Char)0x0,  /* [4202] */
    (xdc_Char)0x45,  /* [4203] */
    (xdc_Char)0x5f,  /* [4204] */
    (xdc_Char)0x6f,  /* [4205] */
    (xdc_Char)0x62,  /* [4206] */
    (xdc_Char)0x6a,  /* [4207] */
    (xdc_Char)0x65,  /* [4208] */
    (xdc_Char)0x63,  /* [4209] */
    (xdc_Char)0x74,  /* [4210] */
    (xdc_Char)0x43,  /* [4211] */
    (xdc_Char)0x68,  /* [4212] */
    (xdc_Char)0x65,  /* [4213] */
    (xdc_Char)0x63,  /* [4214] */
    (xdc_Char)0x6b,  /* [4215] */
    (xdc_Char)0x46,  /* [4216] */
    (xdc_Char)0x61,  /* [4217] */
    (xdc_Char)0x69,  /* [4218] */
    (xdc_Char)0x6c,  /* [4219] */
    (xdc_Char)0x65,  /* [4220] */
    (xdc_Char)0x64,  /* [4221] */
    (xdc_Char)0x3a,  /* [4222] */
    (xdc_Char)0x20,  /* [4223] */
    (xdc_Char)0x54,  /* [4224] */
    (xdc_Char)0x61,  /* [4225] */
    (xdc_Char)0x73,  /* [4226] */
    (xdc_Char)0x6b,  /* [4227] */
    (xdc_Char)0x20,  /* [4228] */
    (xdc_Char)0x30,  /* [4229] */
    (xdc_Char)0x78,  /* [4230] */
    (xdc_Char)0x25,  /* [4231] */
    (xdc_Char)0x78,  /* [4232] */
    (xdc_Char)0x20,  /* [4233] */
    (xdc_Char)0x6f,  /* [4234] */
    (xdc_Char)0x62,  /* [4235] */
    (xdc_Char)0x6a,  /* [4236] */
    (xdc_Char)0x65,  /* [4237] */
    (xdc_Char)0x63,  /* [4238] */
    (xdc_Char)0x74,  /* [4239] */
    (xdc_Char)0x20,  /* [4240] */
    (xdc_Char)0x64,  /* [4241] */
    (xdc_Char)0x61,  /* [4242] */
    (xdc_Char)0x74,  /* [4243] */
    (xdc_Char)0x61,  /* [4244] */
    (xdc_Char)0x20,  /* [4245] */
    (xdc_Char)0x69,  /* [4246] */
    (xdc_Char)0x6e,  /* [4247] */
    (xdc_Char)0x74,  /* [4248] */
    (xdc_Char)0x65,  /* [4249] */
    (xdc_Char)0x67,  /* [4250] */
    (xdc_Char)0x72,  /* [4251] */
    (xdc_Char)0x69,  /* [4252] */
    (xdc_Char)0x74,  /* [4253] */
    (xdc_Char)0x79,  /* [4254] */
    (xdc_Char)0x20,  /* [4255] */
    (xdc_Char)0x63,  /* [4256] */
    (xdc_Char)0x68,  /* [4257] */
    (xdc_Char)0x65,  /* [4258] */
    (xdc_Char)0x63,  /* [4259] */
    (xdc_Char)0x6b,  /* [4260] */
    (xdc_Char)0x20,  /* [4261] */
    (xdc_Char)0x66,  /* [4262] */
    (xdc_Char)0x61,  /* [4263] */
    (xdc_Char)0x69,  /* [4264] */
    (xdc_Char)0x6c,  /* [4265] */
    (xdc_Char)0x65,  /* [4266] */
    (xdc_Char)0x64,  /* [4267] */
    (xdc_Char)0x2e,  /* [4268] */
    (xdc_Char)0x0,  /* [4269] */
    (xdc_Char)0x45,  /* [4270] */
    (xdc_Char)0x5f,  /* [4271] */
    (xdc_Char)0x6f,  /* [4272] */
    (xdc_Char)0x62,  /* [4273] */
    (xdc_Char)0x6a,  /* [4274] */
    (xdc_Char)0x65,  /* [4275] */
    (xdc_Char)0x63,  /* [4276] */
    (xdc_Char)0x74,  /* [4277] */
    (xdc_Char)0x4e,  /* [4278] */
    (xdc_Char)0x6f,  /* [4279] */
    (xdc_Char)0x74,  /* [4280] */
    (xdc_Char)0x49,  /* [4281] */
    (xdc_Char)0x6e,  /* [4282] */
    (xdc_Char)0x4b,  /* [4283] */
    (xdc_Char)0x65,  /* [4284] */
    (xdc_Char)0x72,  /* [4285] */
    (xdc_Char)0x6e,  /* [4286] */
    (xdc_Char)0x65,  /* [4287] */
    (xdc_Char)0x6c,  /* [4288] */
    (xdc_Char)0x53,  /* [4289] */
    (xdc_Char)0x70,  /* [4290] */
    (xdc_Char)0x61,  /* [4291] */
    (xdc_Char)0x63,  /* [4292] */
    (xdc_Char)0x65,  /* [4293] */
    (xdc_Char)0x3a,  /* [4294] */
    (xdc_Char)0x20,  /* [4295] */
    (xdc_Char)0x54,  /* [4296] */
    (xdc_Char)0x61,  /* [4297] */
    (xdc_Char)0x73,  /* [4298] */
    (xdc_Char)0x6b,  /* [4299] */
    (xdc_Char)0x20,  /* [4300] */
    (xdc_Char)0x6f,  /* [4301] */
    (xdc_Char)0x62,  /* [4302] */
    (xdc_Char)0x6a,  /* [4303] */
    (xdc_Char)0x65,  /* [4304] */
    (xdc_Char)0x63,  /* [4305] */
    (xdc_Char)0x74,  /* [4306] */
    (xdc_Char)0x20,  /* [4307] */
    (xdc_Char)0x70,  /* [4308] */
    (xdc_Char)0x61,  /* [4309] */
    (xdc_Char)0x73,  /* [4310] */
    (xdc_Char)0x73,  /* [4311] */
    (xdc_Char)0x65,  /* [4312] */
    (xdc_Char)0x64,  /* [4313] */
    (xdc_Char)0x20,  /* [4314] */
    (xdc_Char)0x6e,  /* [4315] */
    (xdc_Char)0x6f,  /* [4316] */
    (xdc_Char)0x74,  /* [4317] */
    (xdc_Char)0x20,  /* [4318] */
    (xdc_Char)0x69,  /* [4319] */
    (xdc_Char)0x6e,  /* [4320] */
    (xdc_Char)0x20,  /* [4321] */
    (xdc_Char)0x4b,  /* [4322] */
    (xdc_Char)0x65,  /* [4323] */
    (xdc_Char)0x72,  /* [4324] */
    (xdc_Char)0x6e,  /* [4325] */
    (xdc_Char)0x65,  /* [4326] */
    (xdc_Char)0x6c,  /* [4327] */
    (xdc_Char)0x20,  /* [4328] */
    (xdc_Char)0x61,  /* [4329] */
    (xdc_Char)0x64,  /* [4330] */
    (xdc_Char)0x64,  /* [4331] */
    (xdc_Char)0x72,  /* [4332] */
    (xdc_Char)0x65,  /* [4333] */
    (xdc_Char)0x73,  /* [4334] */
    (xdc_Char)0x73,  /* [4335] */
    (xdc_Char)0x20,  /* [4336] */
    (xdc_Char)0x73,  /* [4337] */
    (xdc_Char)0x70,  /* [4338] */
    (xdc_Char)0x61,  /* [4339] */
    (xdc_Char)0x63,  /* [4340] */
    (xdc_Char)0x65,  /* [4341] */
    (xdc_Char)0x2e,  /* [4342] */
    (xdc_Char)0x0,  /* [4343] */
    (xdc_Char)0x45,  /* [4344] */
    (xdc_Char)0x5f,  /* [4345] */
    (xdc_Char)0x70,  /* [4346] */
    (xdc_Char)0x72,  /* [4347] */
    (xdc_Char)0x69,  /* [4348] */
    (xdc_Char)0x6f,  /* [4349] */
    (xdc_Char)0x72,  /* [4350] */
    (xdc_Char)0x69,  /* [4351] */
    (xdc_Char)0x74,  /* [4352] */
    (xdc_Char)0x79,  /* [4353] */
    (xdc_Char)0x3a,  /* [4354] */
    (xdc_Char)0x20,  /* [4355] */
    (xdc_Char)0x54,  /* [4356] */
    (xdc_Char)0x68,  /* [4357] */
    (xdc_Char)0x72,  /* [4358] */
    (xdc_Char)0x65,  /* [4359] */
    (xdc_Char)0x61,  /* [4360] */
    (xdc_Char)0x64,  /* [4361] */
    (xdc_Char)0x20,  /* [4362] */
    (xdc_Char)0x70,  /* [4363] */
    (xdc_Char)0x72,  /* [4364] */
    (xdc_Char)0x69,  /* [4365] */
    (xdc_Char)0x6f,  /* [4366] */
    (xdc_Char)0x72,  /* [4367] */
    (xdc_Char)0x69,  /* [4368] */
    (xdc_Char)0x74,  /* [4369] */
    (xdc_Char)0x79,  /* [4370] */
    (xdc_Char)0x20,  /* [4371] */
    (xdc_Char)0x69,  /* [4372] */
    (xdc_Char)0x73,  /* [4373] */
    (xdc_Char)0x20,  /* [4374] */
    (xdc_Char)0x69,  /* [4375] */
    (xdc_Char)0x6e,  /* [4376] */
    (xdc_Char)0x76,  /* [4377] */
    (xdc_Char)0x61,  /* [4378] */
    (xdc_Char)0x6c,  /* [4379] */
    (xdc_Char)0x69,  /* [4380] */
    (xdc_Char)0x64,  /* [4381] */
    (xdc_Char)0x20,  /* [4382] */
    (xdc_Char)0x25,  /* [4383] */
    (xdc_Char)0x64,  /* [4384] */
    (xdc_Char)0x0,  /* [4385] */
    (xdc_Char)0x45,  /* [4386] */
    (xdc_Char)0x5f,  /* [4387] */
    (xdc_Char)0x73,  /* [4388] */
    (xdc_Char)0x74,  /* [4389] */
    (xdc_Char)0x61,  /* [4390] */
    (xdc_Char)0x63,  /* [4391] */
    (xdc_Char)0x6b,  /* [4392] */
    (xdc_Char)0x4f,  /* [4393] */
    (xdc_Char)0x76,  /* [4394] */
    (xdc_Char)0x65,  /* [4395] */
    (xdc_Char)0x72,  /* [4396] */
    (xdc_Char)0x66,  /* [4397] */
    (xdc_Char)0x6c,  /* [4398] */
    (xdc_Char)0x6f,  /* [4399] */
    (xdc_Char)0x77,  /* [4400] */
    (xdc_Char)0x3a,  /* [4401] */
    (xdc_Char)0x20,  /* [4402] */
    (xdc_Char)0x49,  /* [4403] */
    (xdc_Char)0x53,  /* [4404] */
    (xdc_Char)0x52,  /* [4405] */
    (xdc_Char)0x20,  /* [4406] */
    (xdc_Char)0x73,  /* [4407] */
    (xdc_Char)0x74,  /* [4408] */
    (xdc_Char)0x61,  /* [4409] */
    (xdc_Char)0x63,  /* [4410] */
    (xdc_Char)0x6b,  /* [4411] */
    (xdc_Char)0x20,  /* [4412] */
    (xdc_Char)0x6f,  /* [4413] */
    (xdc_Char)0x76,  /* [4414] */
    (xdc_Char)0x65,  /* [4415] */
    (xdc_Char)0x72,  /* [4416] */
    (xdc_Char)0x66,  /* [4417] */
    (xdc_Char)0x6c,  /* [4418] */
    (xdc_Char)0x6f,  /* [4419] */
    (xdc_Char)0x77,  /* [4420] */
    (xdc_Char)0x2e,  /* [4421] */
    (xdc_Char)0x0,  /* [4422] */
    (xdc_Char)0x72,  /* [4423] */
    (xdc_Char)0x65,  /* [4424] */
    (xdc_Char)0x71,  /* [4425] */
    (xdc_Char)0x75,  /* [4426] */
    (xdc_Char)0x65,  /* [4427] */
    (xdc_Char)0x73,  /* [4428] */
    (xdc_Char)0x74,  /* [4429] */
    (xdc_Char)0x65,  /* [4430] */
    (xdc_Char)0x64,  /* [4431] */
    (xdc_Char)0x20,  /* [4432] */
    (xdc_Char)0x73,  /* [4433] */
    (xdc_Char)0x69,  /* [4434] */
    (xdc_Char)0x7a,  /* [4435] */
    (xdc_Char)0x65,  /* [4436] */
    (xdc_Char)0x20,  /* [4437] */
    (xdc_Char)0x69,  /* [4438] */
    (xdc_Char)0x73,  /* [4439] */
    (xdc_Char)0x20,  /* [4440] */
    (xdc_Char)0x74,  /* [4441] */
    (xdc_Char)0x6f,  /* [4442] */
    (xdc_Char)0x6f,  /* [4443] */
    (xdc_Char)0x20,  /* [4444] */
    (xdc_Char)0x62,  /* [4445] */
    (xdc_Char)0x69,  /* [4446] */
    (xdc_Char)0x67,  /* [4447] */
    (xdc_Char)0x3a,  /* [4448] */
    (xdc_Char)0x20,  /* [4449] */
    (xdc_Char)0x68,  /* [4450] */
    (xdc_Char)0x61,  /* [4451] */
    (xdc_Char)0x6e,  /* [4452] */
    (xdc_Char)0x64,  /* [4453] */
    (xdc_Char)0x6c,  /* [4454] */
    (xdc_Char)0x65,  /* [4455] */
    (xdc_Char)0x3d,  /* [4456] */
    (xdc_Char)0x30,  /* [4457] */
    (xdc_Char)0x78,  /* [4458] */
    (xdc_Char)0x25,  /* [4459] */
    (xdc_Char)0x78,  /* [4460] */
    (xdc_Char)0x2c,  /* [4461] */
    (xdc_Char)0x20,  /* [4462] */
    (xdc_Char)0x73,  /* [4463] */
    (xdc_Char)0x69,  /* [4464] */
    (xdc_Char)0x7a,  /* [4465] */
    (xdc_Char)0x65,  /* [4466] */
    (xdc_Char)0x3d,  /* [4467] */
    (xdc_Char)0x25,  /* [4468] */
    (xdc_Char)0x75,  /* [4469] */
    (xdc_Char)0x0,  /* [4470] */
    (xdc_Char)0x6f,  /* [4471] */
    (xdc_Char)0x75,  /* [4472] */
    (xdc_Char)0x74,  /* [4473] */
    (xdc_Char)0x20,  /* [4474] */
    (xdc_Char)0x6f,  /* [4475] */
    (xdc_Char)0x66,  /* [4476] */
    (xdc_Char)0x20,  /* [4477] */
    (xdc_Char)0x6d,  /* [4478] */
    (xdc_Char)0x65,  /* [4479] */
    (xdc_Char)0x6d,  /* [4480] */
    (xdc_Char)0x6f,  /* [4481] */
    (xdc_Char)0x72,  /* [4482] */
    (xdc_Char)0x79,  /* [4483] */
    (xdc_Char)0x3a,  /* [4484] */
    (xdc_Char)0x20,  /* [4485] */
    (xdc_Char)0x68,  /* [4486] */
    (xdc_Char)0x61,  /* [4487] */
    (xdc_Char)0x6e,  /* [4488] */
    (xdc_Char)0x64,  /* [4489] */
    (xdc_Char)0x6c,  /* [4490] */
    (xdc_Char)0x65,  /* [4491] */
    (xdc_Char)0x3d,  /* [4492] */
    (xdc_Char)0x30,  /* [4493] */
    (xdc_Char)0x78,  /* [4494] */
    (xdc_Char)0x25,  /* [4495] */
    (xdc_Char)0x78,  /* [4496] */
    (xdc_Char)0x2c,  /* [4497] */
    (xdc_Char)0x20,  /* [4498] */
    (xdc_Char)0x73,  /* [4499] */
    (xdc_Char)0x69,  /* [4500] */
    (xdc_Char)0x7a,  /* [4501] */
    (xdc_Char)0x65,  /* [4502] */
    (xdc_Char)0x3d,  /* [4503] */
    (xdc_Char)0x25,  /* [4504] */
    (xdc_Char)0x75,  /* [4505] */
    (xdc_Char)0x0,  /* [4506] */
    (xdc_Char)0x3c,  /* [4507] */
    (xdc_Char)0x2d,  /* [4508] */
    (xdc_Char)0x2d,  /* [4509] */
    (xdc_Char)0x20,  /* [4510] */
    (xdc_Char)0x63,  /* [4511] */
    (xdc_Char)0x6f,  /* [4512] */
    (xdc_Char)0x6e,  /* [4513] */
    (xdc_Char)0x73,  /* [4514] */
    (xdc_Char)0x74,  /* [4515] */
    (xdc_Char)0x72,  /* [4516] */
    (xdc_Char)0x75,  /* [4517] */
    (xdc_Char)0x63,  /* [4518] */
    (xdc_Char)0x74,  /* [4519] */
    (xdc_Char)0x3a,  /* [4520] */
    (xdc_Char)0x20,  /* [4521] */
    (xdc_Char)0x25,  /* [4522] */
    (xdc_Char)0x70,  /* [4523] */
    (xdc_Char)0x28,  /* [4524] */
    (xdc_Char)0x27,  /* [4525] */
    (xdc_Char)0x25,  /* [4526] */
    (xdc_Char)0x73,  /* [4527] */
    (xdc_Char)0x27,  /* [4528] */
    (xdc_Char)0x29,  /* [4529] */
    (xdc_Char)0x0,  /* [4530] */
    (xdc_Char)0x3c,  /* [4531] */
    (xdc_Char)0x2d,  /* [4532] */
    (xdc_Char)0x2d,  /* [4533] */
    (xdc_Char)0x20,  /* [4534] */
    (xdc_Char)0x63,  /* [4535] */
    (xdc_Char)0x72,  /* [4536] */
    (xdc_Char)0x65,  /* [4537] */
    (xdc_Char)0x61,  /* [4538] */
    (xdc_Char)0x74,  /* [4539] */
    (xdc_Char)0x65,  /* [4540] */
    (xdc_Char)0x3a,  /* [4541] */
    (xdc_Char)0x20,  /* [4542] */
    (xdc_Char)0x25,  /* [4543] */
    (xdc_Char)0x70,  /* [4544] */
    (xdc_Char)0x28,  /* [4545] */
    (xdc_Char)0x27,  /* [4546] */
    (xdc_Char)0x25,  /* [4547] */
    (xdc_Char)0x73,  /* [4548] */
    (xdc_Char)0x27,  /* [4549] */
    (xdc_Char)0x29,  /* [4550] */
    (xdc_Char)0x0,  /* [4551] */
    (xdc_Char)0x2d,  /* [4552] */
    (xdc_Char)0x2d,  /* [4553] */
    (xdc_Char)0x3e,  /* [4554] */
    (xdc_Char)0x20,  /* [4555] */
    (xdc_Char)0x64,  /* [4556] */
    (xdc_Char)0x65,  /* [4557] */
    (xdc_Char)0x73,  /* [4558] */
    (xdc_Char)0x74,  /* [4559] */
    (xdc_Char)0x72,  /* [4560] */
    (xdc_Char)0x75,  /* [4561] */
    (xdc_Char)0x63,  /* [4562] */
    (xdc_Char)0x74,  /* [4563] */
    (xdc_Char)0x3a,  /* [4564] */
    (xdc_Char)0x20,  /* [4565] */
    (xdc_Char)0x28,  /* [4566] */
    (xdc_Char)0x25,  /* [4567] */
    (xdc_Char)0x70,  /* [4568] */
    (xdc_Char)0x29,  /* [4569] */
    (xdc_Char)0x0,  /* [4570] */
    (xdc_Char)0x2d,  /* [4571] */
    (xdc_Char)0x2d,  /* [4572] */
    (xdc_Char)0x3e,  /* [4573] */
    (xdc_Char)0x20,  /* [4574] */
    (xdc_Char)0x64,  /* [4575] */
    (xdc_Char)0x65,  /* [4576] */
    (xdc_Char)0x6c,  /* [4577] */
    (xdc_Char)0x65,  /* [4578] */
    (xdc_Char)0x74,  /* [4579] */
    (xdc_Char)0x65,  /* [4580] */
    (xdc_Char)0x3a,  /* [4581] */
    (xdc_Char)0x20,  /* [4582] */
    (xdc_Char)0x28,  /* [4583] */
    (xdc_Char)0x25,  /* [4584] */
    (xdc_Char)0x70,  /* [4585] */
    (xdc_Char)0x29,  /* [4586] */
    (xdc_Char)0x0,  /* [4587] */
    (xdc_Char)0x45,  /* [4588] */
    (xdc_Char)0x52,  /* [4589] */
    (xdc_Char)0x52,  /* [4590] */
    (xdc_Char)0x4f,  /* [4591] */
    (xdc_Char)0x52,  /* [4592] */
    (xdc_Char)0x3a,  /* [4593] */
    (xdc_Char)0x20,  /* [4594] */
    (xdc_Char)0x25,  /* [4595] */
    (xdc_Char)0x24,  /* [4596] */
    (xdc_Char)0x46,  /* [4597] */
    (xdc_Char)0x25,  /* [4598] */
    (xdc_Char)0x24,  /* [4599] */
    (xdc_Char)0x53,  /* [4600] */
    (xdc_Char)0x0,  /* [4601] */
    (xdc_Char)0x57,  /* [4602] */
    (xdc_Char)0x41,  /* [4603] */
    (xdc_Char)0x52,  /* [4604] */
    (xdc_Char)0x4e,  /* [4605] */
    (xdc_Char)0x49,  /* [4606] */
    (xdc_Char)0x4e,  /* [4607] */
    (xdc_Char)0x47,  /* [4608] */
    (xdc_Char)0x3a,  /* [4609] */
    (xdc_Char)0x20,  /* [4610] */
    (xdc_Char)0x25,  /* [4611] */
    (xdc_Char)0x24,  /* [4612] */
    (xdc_Char)0x46,  /* [4613] */
    (xdc_Char)0x25,  /* [4614] */
    (xdc_Char)0x24,  /* [4615] */
    (xdc_Char)0x53,  /* [4616] */
    (xdc_Char)0x0,  /* [4617] */
    (xdc_Char)0x25,  /* [4618] */
    (xdc_Char)0x24,  /* [4619] */
    (xdc_Char)0x46,  /* [4620] */
    (xdc_Char)0x25,  /* [4621] */
    (xdc_Char)0x24,  /* [4622] */
    (xdc_Char)0x53,  /* [4623] */
    (xdc_Char)0x0,  /* [4624] */
    (xdc_Char)0x53,  /* [4625] */
    (xdc_Char)0x74,  /* [4626] */
    (xdc_Char)0x61,  /* [4627] */
    (xdc_Char)0x72,  /* [4628] */
    (xdc_Char)0x74,  /* [4629] */
    (xdc_Char)0x3a,  /* [4630] */
    (xdc_Char)0x20,  /* [4631] */
    (xdc_Char)0x25,  /* [4632] */
    (xdc_Char)0x24,  /* [4633] */
    (xdc_Char)0x53,  /* [4634] */
    (xdc_Char)0x0,  /* [4635] */
    (xdc_Char)0x53,  /* [4636] */
    (xdc_Char)0x74,  /* [4637] */
    (xdc_Char)0x6f,  /* [4638] */
    (xdc_Char)0x70,  /* [4639] */
    (xdc_Char)0x3a,  /* [4640] */
    (xdc_Char)0x20,  /* [4641] */
    (xdc_Char)0x25,  /* [4642] */
    (xdc_Char)0x24,  /* [4643] */
    (xdc_Char)0x53,  /* [4644] */
    (xdc_Char)0x0,  /* [4645] */
    (xdc_Char)0x53,  /* [4646] */
    (xdc_Char)0x74,  /* [4647] */
    (xdc_Char)0x61,  /* [4648] */
    (xdc_Char)0x72,  /* [4649] */
    (xdc_Char)0x74,  /* [4650] */
    (xdc_Char)0x49,  /* [4651] */
    (xdc_Char)0x6e,  /* [4652] */
    (xdc_Char)0x73,  /* [4653] */
    (xdc_Char)0x74,  /* [4654] */
    (xdc_Char)0x61,  /* [4655] */
    (xdc_Char)0x6e,  /* [4656] */
    (xdc_Char)0x63,  /* [4657] */
    (xdc_Char)0x65,  /* [4658] */
    (xdc_Char)0x3a,  /* [4659] */
    (xdc_Char)0x20,  /* [4660] */
    (xdc_Char)0x25,  /* [4661] */
    (xdc_Char)0x24,  /* [4662] */
    (xdc_Char)0x53,  /* [4663] */
    (xdc_Char)0x0,  /* [4664] */
    (xdc_Char)0x53,  /* [4665] */
    (xdc_Char)0x74,  /* [4666] */
    (xdc_Char)0x6f,  /* [4667] */
    (xdc_Char)0x70,  /* [4668] */
    (xdc_Char)0x49,  /* [4669] */
    (xdc_Char)0x6e,  /* [4670] */
    (xdc_Char)0x73,  /* [4671] */
    (xdc_Char)0x74,  /* [4672] */
    (xdc_Char)0x61,  /* [4673] */
    (xdc_Char)0x6e,  /* [4674] */
    (xdc_Char)0x63,  /* [4675] */
    (xdc_Char)0x65,  /* [4676] */
    (xdc_Char)0x3a,  /* [4677] */
    (xdc_Char)0x20,  /* [4678] */
    (xdc_Char)0x25,  /* [4679] */
    (xdc_Char)0x24,  /* [4680] */
    (xdc_Char)0x53,  /* [4681] */
    (xdc_Char)0x0,  /* [4682] */
    (xdc_Char)0x4c,  /* [4683] */
    (xdc_Char)0x4d,  /* [4684] */
    (xdc_Char)0x5f,  /* [4685] */
    (xdc_Char)0x62,  /* [4686] */
    (xdc_Char)0x65,  /* [4687] */
    (xdc_Char)0x67,  /* [4688] */
    (xdc_Char)0x69,  /* [4689] */
    (xdc_Char)0x6e,  /* [4690] */
    (xdc_Char)0x3a,  /* [4691] */
    (xdc_Char)0x20,  /* [4692] */
    (xdc_Char)0x68,  /* [4693] */
    (xdc_Char)0x77,  /* [4694] */
    (xdc_Char)0x69,  /* [4695] */
    (xdc_Char)0x3a,  /* [4696] */
    (xdc_Char)0x20,  /* [4697] */
    (xdc_Char)0x30,  /* [4698] */
    (xdc_Char)0x78,  /* [4699] */
    (xdc_Char)0x25,  /* [4700] */
    (xdc_Char)0x78,  /* [4701] */
    (xdc_Char)0x2c,  /* [4702] */
    (xdc_Char)0x20,  /* [4703] */
    (xdc_Char)0x66,  /* [4704] */
    (xdc_Char)0x75,  /* [4705] */
    (xdc_Char)0x6e,  /* [4706] */
    (xdc_Char)0x63,  /* [4707] */
    (xdc_Char)0x3a,  /* [4708] */
    (xdc_Char)0x20,  /* [4709] */
    (xdc_Char)0x30,  /* [4710] */
    (xdc_Char)0x78,  /* [4711] */
    (xdc_Char)0x25,  /* [4712] */
    (xdc_Char)0x78,  /* [4713] */
    (xdc_Char)0x2c,  /* [4714] */
    (xdc_Char)0x20,  /* [4715] */
    (xdc_Char)0x70,  /* [4716] */
    (xdc_Char)0x72,  /* [4717] */
    (xdc_Char)0x65,  /* [4718] */
    (xdc_Char)0x54,  /* [4719] */
    (xdc_Char)0x68,  /* [4720] */
    (xdc_Char)0x72,  /* [4721] */
    (xdc_Char)0x65,  /* [4722] */
    (xdc_Char)0x61,  /* [4723] */
    (xdc_Char)0x64,  /* [4724] */
    (xdc_Char)0x3a,  /* [4725] */
    (xdc_Char)0x20,  /* [4726] */
    (xdc_Char)0x25,  /* [4727] */
    (xdc_Char)0x64,  /* [4728] */
    (xdc_Char)0x2c,  /* [4729] */
    (xdc_Char)0x20,  /* [4730] */
    (xdc_Char)0x69,  /* [4731] */
    (xdc_Char)0x6e,  /* [4732] */
    (xdc_Char)0x74,  /* [4733] */
    (xdc_Char)0x4e,  /* [4734] */
    (xdc_Char)0x75,  /* [4735] */
    (xdc_Char)0x6d,  /* [4736] */
    (xdc_Char)0x3a,  /* [4737] */
    (xdc_Char)0x20,  /* [4738] */
    (xdc_Char)0x25,  /* [4739] */
    (xdc_Char)0x64,  /* [4740] */
    (xdc_Char)0x2c,  /* [4741] */
    (xdc_Char)0x20,  /* [4742] */
    (xdc_Char)0x69,  /* [4743] */
    (xdc_Char)0x72,  /* [4744] */
    (xdc_Char)0x70,  /* [4745] */
    (xdc_Char)0x3a,  /* [4746] */
    (xdc_Char)0x20,  /* [4747] */
    (xdc_Char)0x30,  /* [4748] */
    (xdc_Char)0x78,  /* [4749] */
    (xdc_Char)0x25,  /* [4750] */
    (xdc_Char)0x78,  /* [4751] */
    (xdc_Char)0x0,  /* [4752] */
    (xdc_Char)0x4c,  /* [4753] */
    (xdc_Char)0x44,  /* [4754] */
    (xdc_Char)0x5f,  /* [4755] */
    (xdc_Char)0x65,  /* [4756] */
    (xdc_Char)0x6e,  /* [4757] */
    (xdc_Char)0x64,  /* [4758] */
    (xdc_Char)0x3a,  /* [4759] */
    (xdc_Char)0x20,  /* [4760] */
    (xdc_Char)0x68,  /* [4761] */
    (xdc_Char)0x77,  /* [4762] */
    (xdc_Char)0x69,  /* [4763] */
    (xdc_Char)0x3a,  /* [4764] */
    (xdc_Char)0x20,  /* [4765] */
    (xdc_Char)0x30,  /* [4766] */
    (xdc_Char)0x78,  /* [4767] */
    (xdc_Char)0x25,  /* [4768] */
    (xdc_Char)0x78,  /* [4769] */
    (xdc_Char)0x0,  /* [4770] */
    (xdc_Char)0x4c,  /* [4771] */
    (xdc_Char)0x57,  /* [4772] */
    (xdc_Char)0x5f,  /* [4773] */
    (xdc_Char)0x64,  /* [4774] */
    (xdc_Char)0x65,  /* [4775] */
    (xdc_Char)0x6c,  /* [4776] */
    (xdc_Char)0x61,  /* [4777] */
    (xdc_Char)0x79,  /* [4778] */
    (xdc_Char)0x65,  /* [4779] */
    (xdc_Char)0x64,  /* [4780] */
    (xdc_Char)0x3a,  /* [4781] */
    (xdc_Char)0x20,  /* [4782] */
    (xdc_Char)0x64,  /* [4783] */
    (xdc_Char)0x65,  /* [4784] */
    (xdc_Char)0x6c,  /* [4785] */
    (xdc_Char)0x61,  /* [4786] */
    (xdc_Char)0x79,  /* [4787] */
    (xdc_Char)0x3a,  /* [4788] */
    (xdc_Char)0x20,  /* [4789] */
    (xdc_Char)0x25,  /* [4790] */
    (xdc_Char)0x64,  /* [4791] */
    (xdc_Char)0x0,  /* [4792] */
    (xdc_Char)0x4c,  /* [4793] */
    (xdc_Char)0x4d,  /* [4794] */
    (xdc_Char)0x5f,  /* [4795] */
    (xdc_Char)0x74,  /* [4796] */
    (xdc_Char)0x69,  /* [4797] */
    (xdc_Char)0x63,  /* [4798] */
    (xdc_Char)0x6b,  /* [4799] */
    (xdc_Char)0x3a,  /* [4800] */
    (xdc_Char)0x20,  /* [4801] */
    (xdc_Char)0x74,  /* [4802] */
    (xdc_Char)0x69,  /* [4803] */
    (xdc_Char)0x63,  /* [4804] */
    (xdc_Char)0x6b,  /* [4805] */
    (xdc_Char)0x3a,  /* [4806] */
    (xdc_Char)0x20,  /* [4807] */
    (xdc_Char)0x25,  /* [4808] */
    (xdc_Char)0x64,  /* [4809] */
    (xdc_Char)0x0,  /* [4810] */
    (xdc_Char)0x4c,  /* [4811] */
    (xdc_Char)0x4d,  /* [4812] */
    (xdc_Char)0x5f,  /* [4813] */
    (xdc_Char)0x62,  /* [4814] */
    (xdc_Char)0x65,  /* [4815] */
    (xdc_Char)0x67,  /* [4816] */
    (xdc_Char)0x69,  /* [4817] */
    (xdc_Char)0x6e,  /* [4818] */
    (xdc_Char)0x3a,  /* [4819] */
    (xdc_Char)0x20,  /* [4820] */
    (xdc_Char)0x63,  /* [4821] */
    (xdc_Char)0x6c,  /* [4822] */
    (xdc_Char)0x6b,  /* [4823] */
    (xdc_Char)0x3a,  /* [4824] */
    (xdc_Char)0x20,  /* [4825] */
    (xdc_Char)0x30,  /* [4826] */
    (xdc_Char)0x78,  /* [4827] */
    (xdc_Char)0x25,  /* [4828] */
    (xdc_Char)0x78,  /* [4829] */
    (xdc_Char)0x2c,  /* [4830] */
    (xdc_Char)0x20,  /* [4831] */
    (xdc_Char)0x66,  /* [4832] */
    (xdc_Char)0x75,  /* [4833] */
    (xdc_Char)0x6e,  /* [4834] */
    (xdc_Char)0x63,  /* [4835] */
    (xdc_Char)0x3a,  /* [4836] */
    (xdc_Char)0x20,  /* [4837] */
    (xdc_Char)0x30,  /* [4838] */
    (xdc_Char)0x78,  /* [4839] */
    (xdc_Char)0x25,  /* [4840] */
    (xdc_Char)0x78,  /* [4841] */
    (xdc_Char)0x0,  /* [4842] */
    (xdc_Char)0x4c,  /* [4843] */
    (xdc_Char)0x4d,  /* [4844] */
    (xdc_Char)0x5f,  /* [4845] */
    (xdc_Char)0x70,  /* [4846] */
    (xdc_Char)0x6f,  /* [4847] */
    (xdc_Char)0x73,  /* [4848] */
    (xdc_Char)0x74,  /* [4849] */
    (xdc_Char)0x3a,  /* [4850] */
    (xdc_Char)0x20,  /* [4851] */
    (xdc_Char)0x73,  /* [4852] */
    (xdc_Char)0x65,  /* [4853] */
    (xdc_Char)0x6d,  /* [4854] */
    (xdc_Char)0x3a,  /* [4855] */
    (xdc_Char)0x20,  /* [4856] */
    (xdc_Char)0x30,  /* [4857] */
    (xdc_Char)0x78,  /* [4858] */
    (xdc_Char)0x25,  /* [4859] */
    (xdc_Char)0x78,  /* [4860] */
    (xdc_Char)0x2c,  /* [4861] */
    (xdc_Char)0x20,  /* [4862] */
    (xdc_Char)0x63,  /* [4863] */
    (xdc_Char)0x6f,  /* [4864] */
    (xdc_Char)0x75,  /* [4865] */
    (xdc_Char)0x6e,  /* [4866] */
    (xdc_Char)0x74,  /* [4867] */
    (xdc_Char)0x3a,  /* [4868] */
    (xdc_Char)0x20,  /* [4869] */
    (xdc_Char)0x25,  /* [4870] */
    (xdc_Char)0x64,  /* [4871] */
    (xdc_Char)0x0,  /* [4872] */
    (xdc_Char)0x4c,  /* [4873] */
    (xdc_Char)0x4d,  /* [4874] */
    (xdc_Char)0x5f,  /* [4875] */
    (xdc_Char)0x70,  /* [4876] */
    (xdc_Char)0x65,  /* [4877] */
    (xdc_Char)0x6e,  /* [4878] */
    (xdc_Char)0x64,  /* [4879] */
    (xdc_Char)0x3a,  /* [4880] */
    (xdc_Char)0x20,  /* [4881] */
    (xdc_Char)0x73,  /* [4882] */
    (xdc_Char)0x65,  /* [4883] */
    (xdc_Char)0x6d,  /* [4884] */
    (xdc_Char)0x3a,  /* [4885] */
    (xdc_Char)0x20,  /* [4886] */
    (xdc_Char)0x30,  /* [4887] */
    (xdc_Char)0x78,  /* [4888] */
    (xdc_Char)0x25,  /* [4889] */
    (xdc_Char)0x78,  /* [4890] */
    (xdc_Char)0x2c,  /* [4891] */
    (xdc_Char)0x20,  /* [4892] */
    (xdc_Char)0x63,  /* [4893] */
    (xdc_Char)0x6f,  /* [4894] */
    (xdc_Char)0x75,  /* [4895] */
    (xdc_Char)0x6e,  /* [4896] */
    (xdc_Char)0x74,  /* [4897] */
    (xdc_Char)0x3a,  /* [4898] */
    (xdc_Char)0x20,  /* [4899] */
    (xdc_Char)0x25,  /* [4900] */
    (xdc_Char)0x64,  /* [4901] */
    (xdc_Char)0x2c,  /* [4902] */
    (xdc_Char)0x20,  /* [4903] */
    (xdc_Char)0x74,  /* [4904] */
    (xdc_Char)0x69,  /* [4905] */
    (xdc_Char)0x6d,  /* [4906] */
    (xdc_Char)0x65,  /* [4907] */
    (xdc_Char)0x6f,  /* [4908] */
    (xdc_Char)0x75,  /* [4909] */
    (xdc_Char)0x74,  /* [4910] */
    (xdc_Char)0x3a,  /* [4911] */
    (xdc_Char)0x20,  /* [4912] */
    (xdc_Char)0x25,  /* [4913] */
    (xdc_Char)0x64,  /* [4914] */
    (xdc_Char)0x0,  /* [4915] */
    (xdc_Char)0x4c,  /* [4916] */
    (xdc_Char)0x4d,  /* [4917] */
    (xdc_Char)0x5f,  /* [4918] */
    (xdc_Char)0x62,  /* [4919] */
    (xdc_Char)0x65,  /* [4920] */
    (xdc_Char)0x67,  /* [4921] */
    (xdc_Char)0x69,  /* [4922] */
    (xdc_Char)0x6e,  /* [4923] */
    (xdc_Char)0x3a,  /* [4924] */
    (xdc_Char)0x20,  /* [4925] */
    (xdc_Char)0x73,  /* [4926] */
    (xdc_Char)0x77,  /* [4927] */
    (xdc_Char)0x69,  /* [4928] */
    (xdc_Char)0x3a,  /* [4929] */
    (xdc_Char)0x20,  /* [4930] */
    (xdc_Char)0x30,  /* [4931] */
    (xdc_Char)0x78,  /* [4932] */
    (xdc_Char)0x25,  /* [4933] */
    (xdc_Char)0x78,  /* [4934] */
    (xdc_Char)0x2c,  /* [4935] */
    (xdc_Char)0x20,  /* [4936] */
    (xdc_Char)0x66,  /* [4937] */
    (xdc_Char)0x75,  /* [4938] */
    (xdc_Char)0x6e,  /* [4939] */
    (xdc_Char)0x63,  /* [4940] */
    (xdc_Char)0x3a,  /* [4941] */
    (xdc_Char)0x20,  /* [4942] */
    (xdc_Char)0x30,  /* [4943] */
    (xdc_Char)0x78,  /* [4944] */
    (xdc_Char)0x25,  /* [4945] */
    (xdc_Char)0x78,  /* [4946] */
    (xdc_Char)0x2c,  /* [4947] */
    (xdc_Char)0x20,  /* [4948] */
    (xdc_Char)0x70,  /* [4949] */
    (xdc_Char)0x72,  /* [4950] */
    (xdc_Char)0x65,  /* [4951] */
    (xdc_Char)0x54,  /* [4952] */
    (xdc_Char)0x68,  /* [4953] */
    (xdc_Char)0x72,  /* [4954] */
    (xdc_Char)0x65,  /* [4955] */
    (xdc_Char)0x61,  /* [4956] */
    (xdc_Char)0x64,  /* [4957] */
    (xdc_Char)0x3a,  /* [4958] */
    (xdc_Char)0x20,  /* [4959] */
    (xdc_Char)0x25,  /* [4960] */
    (xdc_Char)0x64,  /* [4961] */
    (xdc_Char)0x0,  /* [4962] */
    (xdc_Char)0x4c,  /* [4963] */
    (xdc_Char)0x44,  /* [4964] */
    (xdc_Char)0x5f,  /* [4965] */
    (xdc_Char)0x65,  /* [4966] */
    (xdc_Char)0x6e,  /* [4967] */
    (xdc_Char)0x64,  /* [4968] */
    (xdc_Char)0x3a,  /* [4969] */
    (xdc_Char)0x20,  /* [4970] */
    (xdc_Char)0x73,  /* [4971] */
    (xdc_Char)0x77,  /* [4972] */
    (xdc_Char)0x69,  /* [4973] */
    (xdc_Char)0x3a,  /* [4974] */
    (xdc_Char)0x20,  /* [4975] */
    (xdc_Char)0x30,  /* [4976] */
    (xdc_Char)0x78,  /* [4977] */
    (xdc_Char)0x25,  /* [4978] */
    (xdc_Char)0x78,  /* [4979] */
    (xdc_Char)0x0,  /* [4980] */
    (xdc_Char)0x4c,  /* [4981] */
    (xdc_Char)0x4d,  /* [4982] */
    (xdc_Char)0x5f,  /* [4983] */
    (xdc_Char)0x70,  /* [4984] */
    (xdc_Char)0x6f,  /* [4985] */
    (xdc_Char)0x73,  /* [4986] */
    (xdc_Char)0x74,  /* [4987] */
    (xdc_Char)0x3a,  /* [4988] */
    (xdc_Char)0x20,  /* [4989] */
    (xdc_Char)0x73,  /* [4990] */
    (xdc_Char)0x77,  /* [4991] */
    (xdc_Char)0x69,  /* [4992] */
    (xdc_Char)0x3a,  /* [4993] */
    (xdc_Char)0x20,  /* [4994] */
    (xdc_Char)0x30,  /* [4995] */
    (xdc_Char)0x78,  /* [4996] */
    (xdc_Char)0x25,  /* [4997] */
    (xdc_Char)0x78,  /* [4998] */
    (xdc_Char)0x2c,  /* [4999] */
    (xdc_Char)0x20,  /* [5000] */
    (xdc_Char)0x66,  /* [5001] */
    (xdc_Char)0x75,  /* [5002] */
    (xdc_Char)0x6e,  /* [5003] */
    (xdc_Char)0x63,  /* [5004] */
    (xdc_Char)0x3a,  /* [5005] */
    (xdc_Char)0x20,  /* [5006] */
    (xdc_Char)0x30,  /* [5007] */
    (xdc_Char)0x78,  /* [5008] */
    (xdc_Char)0x25,  /* [5009] */
    (xdc_Char)0x78,  /* [5010] */
    (xdc_Char)0x2c,  /* [5011] */
    (xdc_Char)0x20,  /* [5012] */
    (xdc_Char)0x70,  /* [5013] */
    (xdc_Char)0x72,  /* [5014] */
    (xdc_Char)0x69,  /* [5015] */
    (xdc_Char)0x3a,  /* [5016] */
    (xdc_Char)0x20,  /* [5017] */
    (xdc_Char)0x25,  /* [5018] */
    (xdc_Char)0x64,  /* [5019] */
    (xdc_Char)0x0,  /* [5020] */
    (xdc_Char)0x4c,  /* [5021] */
    (xdc_Char)0x4d,  /* [5022] */
    (xdc_Char)0x5f,  /* [5023] */
    (xdc_Char)0x73,  /* [5024] */
    (xdc_Char)0x77,  /* [5025] */
    (xdc_Char)0x69,  /* [5026] */
    (xdc_Char)0x74,  /* [5027] */
    (xdc_Char)0x63,  /* [5028] */
    (xdc_Char)0x68,  /* [5029] */
    (xdc_Char)0x3a,  /* [5030] */
    (xdc_Char)0x20,  /* [5031] */
    (xdc_Char)0x6f,  /* [5032] */
    (xdc_Char)0x6c,  /* [5033] */
    (xdc_Char)0x64,  /* [5034] */
    (xdc_Char)0x74,  /* [5035] */
    (xdc_Char)0x73,  /* [5036] */
    (xdc_Char)0x6b,  /* [5037] */
    (xdc_Char)0x3a,  /* [5038] */
    (xdc_Char)0x20,  /* [5039] */
    (xdc_Char)0x30,  /* [5040] */
    (xdc_Char)0x78,  /* [5041] */
    (xdc_Char)0x25,  /* [5042] */
    (xdc_Char)0x78,  /* [5043] */
    (xdc_Char)0x2c,  /* [5044] */
    (xdc_Char)0x20,  /* [5045] */
    (xdc_Char)0x6f,  /* [5046] */
    (xdc_Char)0x6c,  /* [5047] */
    (xdc_Char)0x64,  /* [5048] */
    (xdc_Char)0x66,  /* [5049] */
    (xdc_Char)0x75,  /* [5050] */
    (xdc_Char)0x6e,  /* [5051] */
    (xdc_Char)0x63,  /* [5052] */
    (xdc_Char)0x3a,  /* [5053] */
    (xdc_Char)0x20,  /* [5054] */
    (xdc_Char)0x30,  /* [5055] */
    (xdc_Char)0x78,  /* [5056] */
    (xdc_Char)0x25,  /* [5057] */
    (xdc_Char)0x78,  /* [5058] */
    (xdc_Char)0x2c,  /* [5059] */
    (xdc_Char)0x20,  /* [5060] */
    (xdc_Char)0x6e,  /* [5061] */
    (xdc_Char)0x65,  /* [5062] */
    (xdc_Char)0x77,  /* [5063] */
    (xdc_Char)0x74,  /* [5064] */
    (xdc_Char)0x73,  /* [5065] */
    (xdc_Char)0x6b,  /* [5066] */
    (xdc_Char)0x3a,  /* [5067] */
    (xdc_Char)0x20,  /* [5068] */
    (xdc_Char)0x30,  /* [5069] */
    (xdc_Char)0x78,  /* [5070] */
    (xdc_Char)0x25,  /* [5071] */
    (xdc_Char)0x78,  /* [5072] */
    (xdc_Char)0x2c,  /* [5073] */
    (xdc_Char)0x20,  /* [5074] */
    (xdc_Char)0x6e,  /* [5075] */
    (xdc_Char)0x65,  /* [5076] */
    (xdc_Char)0x77,  /* [5077] */
    (xdc_Char)0x66,  /* [5078] */
    (xdc_Char)0x75,  /* [5079] */
    (xdc_Char)0x6e,  /* [5080] */
    (xdc_Char)0x63,  /* [5081] */
    (xdc_Char)0x3a,  /* [5082] */
    (xdc_Char)0x20,  /* [5083] */
    (xdc_Char)0x30,  /* [5084] */
    (xdc_Char)0x78,  /* [5085] */
    (xdc_Char)0x25,  /* [5086] */
    (xdc_Char)0x78,  /* [5087] */
    (xdc_Char)0x0,  /* [5088] */
    (xdc_Char)0x4c,  /* [5089] */
    (xdc_Char)0x4d,  /* [5090] */
    (xdc_Char)0x5f,  /* [5091] */
    (xdc_Char)0x73,  /* [5092] */
    (xdc_Char)0x6c,  /* [5093] */
    (xdc_Char)0x65,  /* [5094] */
    (xdc_Char)0x65,  /* [5095] */
    (xdc_Char)0x70,  /* [5096] */
    (xdc_Char)0x3a,  /* [5097] */
    (xdc_Char)0x20,  /* [5098] */
    (xdc_Char)0x74,  /* [5099] */
    (xdc_Char)0x73,  /* [5100] */
    (xdc_Char)0x6b,  /* [5101] */
    (xdc_Char)0x3a,  /* [5102] */
    (xdc_Char)0x20,  /* [5103] */
    (xdc_Char)0x30,  /* [5104] */
    (xdc_Char)0x78,  /* [5105] */
    (xdc_Char)0x25,  /* [5106] */
    (xdc_Char)0x78,  /* [5107] */
    (xdc_Char)0x2c,  /* [5108] */
    (xdc_Char)0x20,  /* [5109] */
    (xdc_Char)0x66,  /* [5110] */
    (xdc_Char)0x75,  /* [5111] */
    (xdc_Char)0x6e,  /* [5112] */
    (xdc_Char)0x63,  /* [5113] */
    (xdc_Char)0x3a,  /* [5114] */
    (xdc_Char)0x20,  /* [5115] */
    (xdc_Char)0x30,  /* [5116] */
    (xdc_Char)0x78,  /* [5117] */
    (xdc_Char)0x25,  /* [5118] */
    (xdc_Char)0x78,  /* [5119] */
    (xdc_Char)0x2c,  /* [5120] */
    (xdc_Char)0x20,  /* [5121] */
    (xdc_Char)0x74,  /* [5122] */
    (xdc_Char)0x69,  /* [5123] */
    (xdc_Char)0x6d,  /* [5124] */
    (xdc_Char)0x65,  /* [5125] */
    (xdc_Char)0x6f,  /* [5126] */
    (xdc_Char)0x75,  /* [5127] */
    (xdc_Char)0x74,  /* [5128] */
    (xdc_Char)0x3a,  /* [5129] */
    (xdc_Char)0x20,  /* [5130] */
    (xdc_Char)0x25,  /* [5131] */
    (xdc_Char)0x64,  /* [5132] */
    (xdc_Char)0x0,  /* [5133] */
    (xdc_Char)0x4c,  /* [5134] */
    (xdc_Char)0x44,  /* [5135] */
    (xdc_Char)0x5f,  /* [5136] */
    (xdc_Char)0x72,  /* [5137] */
    (xdc_Char)0x65,  /* [5138] */
    (xdc_Char)0x61,  /* [5139] */
    (xdc_Char)0x64,  /* [5140] */
    (xdc_Char)0x79,  /* [5141] */
    (xdc_Char)0x3a,  /* [5142] */
    (xdc_Char)0x20,  /* [5143] */
    (xdc_Char)0x74,  /* [5144] */
    (xdc_Char)0x73,  /* [5145] */
    (xdc_Char)0x6b,  /* [5146] */
    (xdc_Char)0x3a,  /* [5147] */
    (xdc_Char)0x20,  /* [5148] */
    (xdc_Char)0x30,  /* [5149] */
    (xdc_Char)0x78,  /* [5150] */
    (xdc_Char)0x25,  /* [5151] */
    (xdc_Char)0x78,  /* [5152] */
    (xdc_Char)0x2c,  /* [5153] */
    (xdc_Char)0x20,  /* [5154] */
    (xdc_Char)0x66,  /* [5155] */
    (xdc_Char)0x75,  /* [5156] */
    (xdc_Char)0x6e,  /* [5157] */
    (xdc_Char)0x63,  /* [5158] */
    (xdc_Char)0x3a,  /* [5159] */
    (xdc_Char)0x20,  /* [5160] */
    (xdc_Char)0x30,  /* [5161] */
    (xdc_Char)0x78,  /* [5162] */
    (xdc_Char)0x25,  /* [5163] */
    (xdc_Char)0x78,  /* [5164] */
    (xdc_Char)0x2c,  /* [5165] */
    (xdc_Char)0x20,  /* [5166] */
    (xdc_Char)0x70,  /* [5167] */
    (xdc_Char)0x72,  /* [5168] */
    (xdc_Char)0x69,  /* [5169] */
    (xdc_Char)0x3a,  /* [5170] */
    (xdc_Char)0x20,  /* [5171] */
    (xdc_Char)0x25,  /* [5172] */
    (xdc_Char)0x64,  /* [5173] */
    (xdc_Char)0x0,  /* [5174] */
    (xdc_Char)0x4c,  /* [5175] */
    (xdc_Char)0x44,  /* [5176] */
    (xdc_Char)0x5f,  /* [5177] */
    (xdc_Char)0x62,  /* [5178] */
    (xdc_Char)0x6c,  /* [5179] */
    (xdc_Char)0x6f,  /* [5180] */
    (xdc_Char)0x63,  /* [5181] */
    (xdc_Char)0x6b,  /* [5182] */
    (xdc_Char)0x3a,  /* [5183] */
    (xdc_Char)0x20,  /* [5184] */
    (xdc_Char)0x74,  /* [5185] */
    (xdc_Char)0x73,  /* [5186] */
    (xdc_Char)0x6b,  /* [5187] */
    (xdc_Char)0x3a,  /* [5188] */
    (xdc_Char)0x20,  /* [5189] */
    (xdc_Char)0x30,  /* [5190] */
    (xdc_Char)0x78,  /* [5191] */
    (xdc_Char)0x25,  /* [5192] */
    (xdc_Char)0x78,  /* [5193] */
    (xdc_Char)0x2c,  /* [5194] */
    (xdc_Char)0x20,  /* [5195] */
    (xdc_Char)0x66,  /* [5196] */
    (xdc_Char)0x75,  /* [5197] */
    (xdc_Char)0x6e,  /* [5198] */
    (xdc_Char)0x63,  /* [5199] */
    (xdc_Char)0x3a,  /* [5200] */
    (xdc_Char)0x20,  /* [5201] */
    (xdc_Char)0x30,  /* [5202] */
    (xdc_Char)0x78,  /* [5203] */
    (xdc_Char)0x25,  /* [5204] */
    (xdc_Char)0x78,  /* [5205] */
    (xdc_Char)0x0,  /* [5206] */
    (xdc_Char)0x4c,  /* [5207] */
    (xdc_Char)0x4d,  /* [5208] */
    (xdc_Char)0x5f,  /* [5209] */
    (xdc_Char)0x79,  /* [5210] */
    (xdc_Char)0x69,  /* [5211] */
    (xdc_Char)0x65,  /* [5212] */
    (xdc_Char)0x6c,  /* [5213] */
    (xdc_Char)0x64,  /* [5214] */
    (xdc_Char)0x3a,  /* [5215] */
    (xdc_Char)0x20,  /* [5216] */
    (xdc_Char)0x74,  /* [5217] */
    (xdc_Char)0x73,  /* [5218] */
    (xdc_Char)0x6b,  /* [5219] */
    (xdc_Char)0x3a,  /* [5220] */
    (xdc_Char)0x20,  /* [5221] */
    (xdc_Char)0x30,  /* [5222] */
    (xdc_Char)0x78,  /* [5223] */
    (xdc_Char)0x25,  /* [5224] */
    (xdc_Char)0x78,  /* [5225] */
    (xdc_Char)0x2c,  /* [5226] */
    (xdc_Char)0x20,  /* [5227] */
    (xdc_Char)0x66,  /* [5228] */
    (xdc_Char)0x75,  /* [5229] */
    (xdc_Char)0x6e,  /* [5230] */
    (xdc_Char)0x63,  /* [5231] */
    (xdc_Char)0x3a,  /* [5232] */
    (xdc_Char)0x20,  /* [5233] */
    (xdc_Char)0x30,  /* [5234] */
    (xdc_Char)0x78,  /* [5235] */
    (xdc_Char)0x25,  /* [5236] */
    (xdc_Char)0x78,  /* [5237] */
    (xdc_Char)0x2c,  /* [5238] */
    (xdc_Char)0x20,  /* [5239] */
    (xdc_Char)0x63,  /* [5240] */
    (xdc_Char)0x75,  /* [5241] */
    (xdc_Char)0x72,  /* [5242] */
    (xdc_Char)0x72,  /* [5243] */
    (xdc_Char)0x54,  /* [5244] */
    (xdc_Char)0x68,  /* [5245] */
    (xdc_Char)0x72,  /* [5246] */
    (xdc_Char)0x65,  /* [5247] */
    (xdc_Char)0x61,  /* [5248] */
    (xdc_Char)0x64,  /* [5249] */
    (xdc_Char)0x3a,  /* [5250] */
    (xdc_Char)0x20,  /* [5251] */
    (xdc_Char)0x25,  /* [5252] */
    (xdc_Char)0x64,  /* [5253] */
    (xdc_Char)0x0,  /* [5254] */
    (xdc_Char)0x4c,  /* [5255] */
    (xdc_Char)0x4d,  /* [5256] */
    (xdc_Char)0x5f,  /* [5257] */
    (xdc_Char)0x73,  /* [5258] */
    (xdc_Char)0x65,  /* [5259] */
    (xdc_Char)0x74,  /* [5260] */
    (xdc_Char)0x50,  /* [5261] */
    (xdc_Char)0x72,  /* [5262] */
    (xdc_Char)0x69,  /* [5263] */
    (xdc_Char)0x3a,  /* [5264] */
    (xdc_Char)0x20,  /* [5265] */
    (xdc_Char)0x74,  /* [5266] */
    (xdc_Char)0x73,  /* [5267] */
    (xdc_Char)0x6b,  /* [5268] */
    (xdc_Char)0x3a,  /* [5269] */
    (xdc_Char)0x20,  /* [5270] */
    (xdc_Char)0x30,  /* [5271] */
    (xdc_Char)0x78,  /* [5272] */
    (xdc_Char)0x25,  /* [5273] */
    (xdc_Char)0x78,  /* [5274] */
    (xdc_Char)0x2c,  /* [5275] */
    (xdc_Char)0x20,  /* [5276] */
    (xdc_Char)0x66,  /* [5277] */
    (xdc_Char)0x75,  /* [5278] */
    (xdc_Char)0x6e,  /* [5279] */
    (xdc_Char)0x63,  /* [5280] */
    (xdc_Char)0x3a,  /* [5281] */
    (xdc_Char)0x20,  /* [5282] */
    (xdc_Char)0x30,  /* [5283] */
    (xdc_Char)0x78,  /* [5284] */
    (xdc_Char)0x25,  /* [5285] */
    (xdc_Char)0x78,  /* [5286] */
    (xdc_Char)0x2c,  /* [5287] */
    (xdc_Char)0x20,  /* [5288] */
    (xdc_Char)0x6f,  /* [5289] */
    (xdc_Char)0x6c,  /* [5290] */
    (xdc_Char)0x64,  /* [5291] */
    (xdc_Char)0x50,  /* [5292] */
    (xdc_Char)0x72,  /* [5293] */
    (xdc_Char)0x69,  /* [5294] */
    (xdc_Char)0x3a,  /* [5295] */
    (xdc_Char)0x20,  /* [5296] */
    (xdc_Char)0x25,  /* [5297] */
    (xdc_Char)0x64,  /* [5298] */
    (xdc_Char)0x2c,  /* [5299] */
    (xdc_Char)0x20,  /* [5300] */
    (xdc_Char)0x6e,  /* [5301] */
    (xdc_Char)0x65,  /* [5302] */
    (xdc_Char)0x77,  /* [5303] */
    (xdc_Char)0x50,  /* [5304] */
    (xdc_Char)0x72,  /* [5305] */
    (xdc_Char)0x69,  /* [5306] */
    (xdc_Char)0x20,  /* [5307] */
    (xdc_Char)0x25,  /* [5308] */
    (xdc_Char)0x64,  /* [5309] */
    (xdc_Char)0x0,  /* [5310] */
    (xdc_Char)0x4c,  /* [5311] */
    (xdc_Char)0x44,  /* [5312] */
    (xdc_Char)0x5f,  /* [5313] */
    (xdc_Char)0x65,  /* [5314] */
    (xdc_Char)0x78,  /* [5315] */
    (xdc_Char)0x69,  /* [5316] */
    (xdc_Char)0x74,  /* [5317] */
    (xdc_Char)0x3a,  /* [5318] */
    (xdc_Char)0x20,  /* [5319] */
    (xdc_Char)0x74,  /* [5320] */
    (xdc_Char)0x73,  /* [5321] */
    (xdc_Char)0x6b,  /* [5322] */
    (xdc_Char)0x3a,  /* [5323] */
    (xdc_Char)0x20,  /* [5324] */
    (xdc_Char)0x30,  /* [5325] */
    (xdc_Char)0x78,  /* [5326] */
    (xdc_Char)0x25,  /* [5327] */
    (xdc_Char)0x78,  /* [5328] */
    (xdc_Char)0x2c,  /* [5329] */
    (xdc_Char)0x20,  /* [5330] */
    (xdc_Char)0x66,  /* [5331] */
    (xdc_Char)0x75,  /* [5332] */
    (xdc_Char)0x6e,  /* [5333] */
    (xdc_Char)0x63,  /* [5334] */
    (xdc_Char)0x3a,  /* [5335] */
    (xdc_Char)0x20,  /* [5336] */
    (xdc_Char)0x30,  /* [5337] */
    (xdc_Char)0x78,  /* [5338] */
    (xdc_Char)0x25,  /* [5339] */
    (xdc_Char)0x78,  /* [5340] */
    (xdc_Char)0x0,  /* [5341] */
    (xdc_Char)0x4c,  /* [5342] */
    (xdc_Char)0x4d,  /* [5343] */
    (xdc_Char)0x5f,  /* [5344] */
    (xdc_Char)0x73,  /* [5345] */
    (xdc_Char)0x65,  /* [5346] */
    (xdc_Char)0x74,  /* [5347] */
    (xdc_Char)0x41,  /* [5348] */
    (xdc_Char)0x66,  /* [5349] */
    (xdc_Char)0x66,  /* [5350] */
    (xdc_Char)0x69,  /* [5351] */
    (xdc_Char)0x6e,  /* [5352] */
    (xdc_Char)0x69,  /* [5353] */
    (xdc_Char)0x74,  /* [5354] */
    (xdc_Char)0x79,  /* [5355] */
    (xdc_Char)0x3a,  /* [5356] */
    (xdc_Char)0x20,  /* [5357] */
    (xdc_Char)0x74,  /* [5358] */
    (xdc_Char)0x73,  /* [5359] */
    (xdc_Char)0x6b,  /* [5360] */
    (xdc_Char)0x3a,  /* [5361] */
    (xdc_Char)0x20,  /* [5362] */
    (xdc_Char)0x30,  /* [5363] */
    (xdc_Char)0x78,  /* [5364] */
    (xdc_Char)0x25,  /* [5365] */
    (xdc_Char)0x78,  /* [5366] */
    (xdc_Char)0x2c,  /* [5367] */
    (xdc_Char)0x20,  /* [5368] */
    (xdc_Char)0x66,  /* [5369] */
    (xdc_Char)0x75,  /* [5370] */
    (xdc_Char)0x6e,  /* [5371] */
    (xdc_Char)0x63,  /* [5372] */
    (xdc_Char)0x3a,  /* [5373] */
    (xdc_Char)0x20,  /* [5374] */
    (xdc_Char)0x30,  /* [5375] */
    (xdc_Char)0x78,  /* [5376] */
    (xdc_Char)0x25,  /* [5377] */
    (xdc_Char)0x78,  /* [5378] */
    (xdc_Char)0x2c,  /* [5379] */
    (xdc_Char)0x20,  /* [5380] */
    (xdc_Char)0x6f,  /* [5381] */
    (xdc_Char)0x6c,  /* [5382] */
    (xdc_Char)0x64,  /* [5383] */
    (xdc_Char)0x43,  /* [5384] */
    (xdc_Char)0x6f,  /* [5385] */
    (xdc_Char)0x72,  /* [5386] */
    (xdc_Char)0x65,  /* [5387] */
    (xdc_Char)0x3a,  /* [5388] */
    (xdc_Char)0x20,  /* [5389] */
    (xdc_Char)0x25,  /* [5390] */
    (xdc_Char)0x64,  /* [5391] */
    (xdc_Char)0x2c,  /* [5392] */
    (xdc_Char)0x20,  /* [5393] */
    (xdc_Char)0x6f,  /* [5394] */
    (xdc_Char)0x6c,  /* [5395] */
    (xdc_Char)0x64,  /* [5396] */
    (xdc_Char)0x41,  /* [5397] */
    (xdc_Char)0x66,  /* [5398] */
    (xdc_Char)0x66,  /* [5399] */
    (xdc_Char)0x69,  /* [5400] */
    (xdc_Char)0x6e,  /* [5401] */
    (xdc_Char)0x69,  /* [5402] */
    (xdc_Char)0x74,  /* [5403] */
    (xdc_Char)0x79,  /* [5404] */
    (xdc_Char)0x20,  /* [5405] */
    (xdc_Char)0x25,  /* [5406] */
    (xdc_Char)0x64,  /* [5407] */
    (xdc_Char)0x2c,  /* [5408] */
    (xdc_Char)0x20,  /* [5409] */
    (xdc_Char)0x6e,  /* [5410] */
    (xdc_Char)0x65,  /* [5411] */
    (xdc_Char)0x77,  /* [5412] */
    (xdc_Char)0x41,  /* [5413] */
    (xdc_Char)0x66,  /* [5414] */
    (xdc_Char)0x66,  /* [5415] */
    (xdc_Char)0x69,  /* [5416] */
    (xdc_Char)0x6e,  /* [5417] */
    (xdc_Char)0x69,  /* [5418] */
    (xdc_Char)0x74,  /* [5419] */
    (xdc_Char)0x79,  /* [5420] */
    (xdc_Char)0x20,  /* [5421] */
    (xdc_Char)0x25,  /* [5422] */
    (xdc_Char)0x64,  /* [5423] */
    (xdc_Char)0x0,  /* [5424] */
    (xdc_Char)0x4c,  /* [5425] */
    (xdc_Char)0x44,  /* [5426] */
    (xdc_Char)0x5f,  /* [5427] */
    (xdc_Char)0x73,  /* [5428] */
    (xdc_Char)0x63,  /* [5429] */
    (xdc_Char)0x68,  /* [5430] */
    (xdc_Char)0x65,  /* [5431] */
    (xdc_Char)0x64,  /* [5432] */
    (xdc_Char)0x75,  /* [5433] */
    (xdc_Char)0x6c,  /* [5434] */
    (xdc_Char)0x65,  /* [5435] */
    (xdc_Char)0x3a,  /* [5436] */
    (xdc_Char)0x20,  /* [5437] */
    (xdc_Char)0x63,  /* [5438] */
    (xdc_Char)0x6f,  /* [5439] */
    (xdc_Char)0x72,  /* [5440] */
    (xdc_Char)0x65,  /* [5441] */
    (xdc_Char)0x49,  /* [5442] */
    (xdc_Char)0x64,  /* [5443] */
    (xdc_Char)0x3a,  /* [5444] */
    (xdc_Char)0x20,  /* [5445] */
    (xdc_Char)0x25,  /* [5446] */
    (xdc_Char)0x64,  /* [5447] */
    (xdc_Char)0x2c,  /* [5448] */
    (xdc_Char)0x20,  /* [5449] */
    (xdc_Char)0x77,  /* [5450] */
    (xdc_Char)0x6f,  /* [5451] */
    (xdc_Char)0x72,  /* [5452] */
    (xdc_Char)0x6b,  /* [5453] */
    (xdc_Char)0x46,  /* [5454] */
    (xdc_Char)0x6c,  /* [5455] */
    (xdc_Char)0x61,  /* [5456] */
    (xdc_Char)0x67,  /* [5457] */
    (xdc_Char)0x3a,  /* [5458] */
    (xdc_Char)0x20,  /* [5459] */
    (xdc_Char)0x25,  /* [5460] */
    (xdc_Char)0x64,  /* [5461] */
    (xdc_Char)0x2c,  /* [5462] */
    (xdc_Char)0x20,  /* [5463] */
    (xdc_Char)0x63,  /* [5464] */
    (xdc_Char)0x75,  /* [5465] */
    (xdc_Char)0x72,  /* [5466] */
    (xdc_Char)0x53,  /* [5467] */
    (xdc_Char)0x65,  /* [5468] */
    (xdc_Char)0x74,  /* [5469] */
    (xdc_Char)0x4c,  /* [5470] */
    (xdc_Char)0x6f,  /* [5471] */
    (xdc_Char)0x63,  /* [5472] */
    (xdc_Char)0x61,  /* [5473] */
    (xdc_Char)0x6c,  /* [5474] */
    (xdc_Char)0x3a,  /* [5475] */
    (xdc_Char)0x20,  /* [5476] */
    (xdc_Char)0x25,  /* [5477] */
    (xdc_Char)0x64,  /* [5478] */
    (xdc_Char)0x2c,  /* [5479] */
    (xdc_Char)0x20,  /* [5480] */
    (xdc_Char)0x63,  /* [5481] */
    (xdc_Char)0x75,  /* [5482] */
    (xdc_Char)0x72,  /* [5483] */
    (xdc_Char)0x53,  /* [5484] */
    (xdc_Char)0x65,  /* [5485] */
    (xdc_Char)0x74,  /* [5486] */
    (xdc_Char)0x58,  /* [5487] */
    (xdc_Char)0x3a,  /* [5488] */
    (xdc_Char)0x20,  /* [5489] */
    (xdc_Char)0x25,  /* [5490] */
    (xdc_Char)0x64,  /* [5491] */
    (xdc_Char)0x2c,  /* [5492] */
    (xdc_Char)0x20,  /* [5493] */
    (xdc_Char)0x63,  /* [5494] */
    (xdc_Char)0x75,  /* [5495] */
    (xdc_Char)0x72,  /* [5496] */
    (xdc_Char)0x4d,  /* [5497] */
    (xdc_Char)0x61,  /* [5498] */
    (xdc_Char)0x73,  /* [5499] */
    (xdc_Char)0x6b,  /* [5500] */
    (xdc_Char)0x4c,  /* [5501] */
    (xdc_Char)0x6f,  /* [5502] */
    (xdc_Char)0x63,  /* [5503] */
    (xdc_Char)0x61,  /* [5504] */
    (xdc_Char)0x6c,  /* [5505] */
    (xdc_Char)0x3a,  /* [5506] */
    (xdc_Char)0x20,  /* [5507] */
    (xdc_Char)0x25,  /* [5508] */
    (xdc_Char)0x64,  /* [5509] */
    (xdc_Char)0x0,  /* [5510] */
    (xdc_Char)0x4c,  /* [5511] */
    (xdc_Char)0x44,  /* [5512] */
    (xdc_Char)0x5f,  /* [5513] */
    (xdc_Char)0x6e,  /* [5514] */
    (xdc_Char)0x6f,  /* [5515] */
    (xdc_Char)0x57,  /* [5516] */
    (xdc_Char)0x6f,  /* [5517] */
    (xdc_Char)0x72,  /* [5518] */
    (xdc_Char)0x6b,  /* [5519] */
    (xdc_Char)0x3a,  /* [5520] */
    (xdc_Char)0x20,  /* [5521] */
    (xdc_Char)0x63,  /* [5522] */
    (xdc_Char)0x6f,  /* [5523] */
    (xdc_Char)0x72,  /* [5524] */
    (xdc_Char)0x65,  /* [5525] */
    (xdc_Char)0x49,  /* [5526] */
    (xdc_Char)0x64,  /* [5527] */
    (xdc_Char)0x3a,  /* [5528] */
    (xdc_Char)0x20,  /* [5529] */
    (xdc_Char)0x25,  /* [5530] */
    (xdc_Char)0x64,  /* [5531] */
    (xdc_Char)0x2c,  /* [5532] */
    (xdc_Char)0x20,  /* [5533] */
    (xdc_Char)0x63,  /* [5534] */
    (xdc_Char)0x75,  /* [5535] */
    (xdc_Char)0x72,  /* [5536] */
    (xdc_Char)0x53,  /* [5537] */
    (xdc_Char)0x65,  /* [5538] */
    (xdc_Char)0x74,  /* [5539] */
    (xdc_Char)0x4c,  /* [5540] */
    (xdc_Char)0x6f,  /* [5541] */
    (xdc_Char)0x63,  /* [5542] */
    (xdc_Char)0x61,  /* [5543] */
    (xdc_Char)0x6c,  /* [5544] */
    (xdc_Char)0x3a,  /* [5545] */
    (xdc_Char)0x20,  /* [5546] */
    (xdc_Char)0x25,  /* [5547] */
    (xdc_Char)0x64,  /* [5548] */
    (xdc_Char)0x2c,  /* [5549] */
    (xdc_Char)0x20,  /* [5550] */
    (xdc_Char)0x63,  /* [5551] */
    (xdc_Char)0x75,  /* [5552] */
    (xdc_Char)0x72,  /* [5553] */
    (xdc_Char)0x53,  /* [5554] */
    (xdc_Char)0x65,  /* [5555] */
    (xdc_Char)0x74,  /* [5556] */
    (xdc_Char)0x58,  /* [5557] */
    (xdc_Char)0x3a,  /* [5558] */
    (xdc_Char)0x20,  /* [5559] */
    (xdc_Char)0x25,  /* [5560] */
    (xdc_Char)0x64,  /* [5561] */
    (xdc_Char)0x2c,  /* [5562] */
    (xdc_Char)0x20,  /* [5563] */
    (xdc_Char)0x63,  /* [5564] */
    (xdc_Char)0x75,  /* [5565] */
    (xdc_Char)0x72,  /* [5566] */
    (xdc_Char)0x4d,  /* [5567] */
    (xdc_Char)0x61,  /* [5568] */
    (xdc_Char)0x73,  /* [5569] */
    (xdc_Char)0x6b,  /* [5570] */
    (xdc_Char)0x4c,  /* [5571] */
    (xdc_Char)0x6f,  /* [5572] */
    (xdc_Char)0x63,  /* [5573] */
    (xdc_Char)0x61,  /* [5574] */
    (xdc_Char)0x6c,  /* [5575] */
    (xdc_Char)0x3a,  /* [5576] */
    (xdc_Char)0x20,  /* [5577] */
    (xdc_Char)0x25,  /* [5578] */
    (xdc_Char)0x64,  /* [5579] */
    (xdc_Char)0x0,  /* [5580] */
    (xdc_Char)0x78,  /* [5581] */
    (xdc_Char)0x64,  /* [5582] */
    (xdc_Char)0x63,  /* [5583] */
    (xdc_Char)0x2e,  /* [5584] */
    (xdc_Char)0x0,  /* [5585] */
    (xdc_Char)0x72,  /* [5586] */
    (xdc_Char)0x75,  /* [5587] */
    (xdc_Char)0x6e,  /* [5588] */
    (xdc_Char)0x74,  /* [5589] */
    (xdc_Char)0x69,  /* [5590] */
    (xdc_Char)0x6d,  /* [5591] */
    (xdc_Char)0x65,  /* [5592] */
    (xdc_Char)0x2e,  /* [5593] */
    (xdc_Char)0x0,  /* [5594] */
    (xdc_Char)0x41,  /* [5595] */
    (xdc_Char)0x73,  /* [5596] */
    (xdc_Char)0x73,  /* [5597] */
    (xdc_Char)0x65,  /* [5598] */
    (xdc_Char)0x72,  /* [5599] */
    (xdc_Char)0x74,  /* [5600] */
    (xdc_Char)0x0,  /* [5601] */
    (xdc_Char)0x43,  /* [5602] */
    (xdc_Char)0x6f,  /* [5603] */
    (xdc_Char)0x72,  /* [5604] */
    (xdc_Char)0x65,  /* [5605] */
    (xdc_Char)0x0,  /* [5606] */
    (xdc_Char)0x44,  /* [5607] */
    (xdc_Char)0x65,  /* [5608] */
    (xdc_Char)0x66,  /* [5609] */
    (xdc_Char)0x61,  /* [5610] */
    (xdc_Char)0x75,  /* [5611] */
    (xdc_Char)0x6c,  /* [5612] */
    (xdc_Char)0x74,  /* [5613] */
    (xdc_Char)0x73,  /* [5614] */
    (xdc_Char)0x0,  /* [5615] */
    (xdc_Char)0x44,  /* [5616] */
    (xdc_Char)0x69,  /* [5617] */
    (xdc_Char)0x61,  /* [5618] */
    (xdc_Char)0x67,  /* [5619] */
    (xdc_Char)0x73,  /* [5620] */
    (xdc_Char)0x0,  /* [5621] */
    (xdc_Char)0x45,  /* [5622] */
    (xdc_Char)0x72,  /* [5623] */
    (xdc_Char)0x72,  /* [5624] */
    (xdc_Char)0x6f,  /* [5625] */
    (xdc_Char)0x72,  /* [5626] */
    (xdc_Char)0x0,  /* [5627] */
    (xdc_Char)0x47,  /* [5628] */
    (xdc_Char)0x61,  /* [5629] */
    (xdc_Char)0x74,  /* [5630] */
    (xdc_Char)0x65,  /* [5631] */
    (xdc_Char)0x0,  /* [5632] */
    (xdc_Char)0x4c,  /* [5633] */
    (xdc_Char)0x6f,  /* [5634] */
    (xdc_Char)0x67,  /* [5635] */
    (xdc_Char)0x0,  /* [5636] */
    (xdc_Char)0x4d,  /* [5637] */
    (xdc_Char)0x61,  /* [5638] */
    (xdc_Char)0x69,  /* [5639] */
    (xdc_Char)0x6e,  /* [5640] */
    (xdc_Char)0x0,  /* [5641] */
    (xdc_Char)0x4d,  /* [5642] */
    (xdc_Char)0x65,  /* [5643] */
    (xdc_Char)0x6d,  /* [5644] */
    (xdc_Char)0x6f,  /* [5645] */
    (xdc_Char)0x72,  /* [5646] */
    (xdc_Char)0x79,  /* [5647] */
    (xdc_Char)0x0,  /* [5648] */
    (xdc_Char)0x52,  /* [5649] */
    (xdc_Char)0x65,  /* [5650] */
    (xdc_Char)0x67,  /* [5651] */
    (xdc_Char)0x69,  /* [5652] */
    (xdc_Char)0x73,  /* [5653] */
    (xdc_Char)0x74,  /* [5654] */
    (xdc_Char)0x72,  /* [5655] */
    (xdc_Char)0x79,  /* [5656] */
    (xdc_Char)0x0,  /* [5657] */
    (xdc_Char)0x53,  /* [5658] */
    (xdc_Char)0x74,  /* [5659] */
    (xdc_Char)0x61,  /* [5660] */
    (xdc_Char)0x72,  /* [5661] */
    (xdc_Char)0x74,  /* [5662] */
    (xdc_Char)0x75,  /* [5663] */
    (xdc_Char)0x70,  /* [5664] */
    (xdc_Char)0x0,  /* [5665] */
    (xdc_Char)0x53,  /* [5666] */
    (xdc_Char)0x79,  /* [5667] */
    (xdc_Char)0x73,  /* [5668] */
    (xdc_Char)0x74,  /* [5669] */
    (xdc_Char)0x65,  /* [5670] */
    (xdc_Char)0x6d,  /* [5671] */
    (xdc_Char)0x0,  /* [5672] */
    (xdc_Char)0x53,  /* [5673] */
    (xdc_Char)0x79,  /* [5674] */
    (xdc_Char)0x73,  /* [5675] */
    (xdc_Char)0x4d,  /* [5676] */
    (xdc_Char)0x69,  /* [5677] */
    (xdc_Char)0x6e,  /* [5678] */
    (xdc_Char)0x0,  /* [5679] */
    (xdc_Char)0x54,  /* [5680] */
    (xdc_Char)0x65,  /* [5681] */
    (xdc_Char)0x78,  /* [5682] */
    (xdc_Char)0x74,  /* [5683] */
    (xdc_Char)0x0,  /* [5684] */
    (xdc_Char)0x74,  /* [5685] */
    (xdc_Char)0x69,  /* [5686] */
    (xdc_Char)0x2e,  /* [5687] */
    (xdc_Char)0x0,  /* [5688] */
    (xdc_Char)0x73,  /* [5689] */
    (xdc_Char)0x79,  /* [5690] */
    (xdc_Char)0x73,  /* [5691] */
    (xdc_Char)0x62,  /* [5692] */
    (xdc_Char)0x69,  /* [5693] */
    (xdc_Char)0x6f,  /* [5694] */
    (xdc_Char)0x73,  /* [5695] */
    (xdc_Char)0x2e,  /* [5696] */
    (xdc_Char)0x0,  /* [5697] */
    (xdc_Char)0x66,  /* [5698] */
    (xdc_Char)0x61,  /* [5699] */
    (xdc_Char)0x6d,  /* [5700] */
    (xdc_Char)0x69,  /* [5701] */
    (xdc_Char)0x6c,  /* [5702] */
    (xdc_Char)0x79,  /* [5703] */
    (xdc_Char)0x2e,  /* [5704] */
    (xdc_Char)0x0,  /* [5705] */
    (xdc_Char)0x6d,  /* [5706] */
    (xdc_Char)0x73,  /* [5707] */
    (xdc_Char)0x70,  /* [5708] */
    (xdc_Char)0x34,  /* [5709] */
    (xdc_Char)0x33,  /* [5710] */
    (xdc_Char)0x30,  /* [5711] */
    (xdc_Char)0x2e,  /* [5712] */
    (xdc_Char)0x0,  /* [5713] */
    (xdc_Char)0x48,  /* [5714] */
    (xdc_Char)0x77,  /* [5715] */
    (xdc_Char)0x69,  /* [5716] */
    (xdc_Char)0x0,  /* [5717] */
    (xdc_Char)0x49,  /* [5718] */
    (xdc_Char)0x6e,  /* [5719] */
    (xdc_Char)0x74,  /* [5720] */
    (xdc_Char)0x72,  /* [5721] */
    (xdc_Char)0x69,  /* [5722] */
    (xdc_Char)0x6e,  /* [5723] */
    (xdc_Char)0x73,  /* [5724] */
    (xdc_Char)0x69,  /* [5725] */
    (xdc_Char)0x63,  /* [5726] */
    (xdc_Char)0x73,  /* [5727] */
    (xdc_Char)0x53,  /* [5728] */
    (xdc_Char)0x75,  /* [5729] */
    (xdc_Char)0x70,  /* [5730] */
    (xdc_Char)0x70,  /* [5731] */
    (xdc_Char)0x6f,  /* [5732] */
    (xdc_Char)0x72,  /* [5733] */
    (xdc_Char)0x74,  /* [5734] */
    (xdc_Char)0x0,  /* [5735] */
    (xdc_Char)0x54,  /* [5736] */
    (xdc_Char)0x61,  /* [5737] */
    (xdc_Char)0x73,  /* [5738] */
    (xdc_Char)0x6b,  /* [5739] */
    (xdc_Char)0x53,  /* [5740] */
    (xdc_Char)0x75,  /* [5741] */
    (xdc_Char)0x70,  /* [5742] */
    (xdc_Char)0x70,  /* [5743] */
    (xdc_Char)0x6f,  /* [5744] */
    (xdc_Char)0x72,  /* [5745] */
    (xdc_Char)0x74,  /* [5746] */
    (xdc_Char)0x0,  /* [5747] */
    (xdc_Char)0x54,  /* [5748] */
    (xdc_Char)0x69,  /* [5749] */
    (xdc_Char)0x6d,  /* [5750] */
    (xdc_Char)0x65,  /* [5751] */
    (xdc_Char)0x72,  /* [5752] */
    (xdc_Char)0x0,  /* [5753] */
    (xdc_Char)0x43,  /* [5754] */
    (xdc_Char)0x6c,  /* [5755] */
    (xdc_Char)0x6f,  /* [5756] */
    (xdc_Char)0x63,  /* [5757] */
    (xdc_Char)0x6b,  /* [5758] */
    (xdc_Char)0x46,  /* [5759] */
    (xdc_Char)0x72,  /* [5760] */
    (xdc_Char)0x65,  /* [5761] */
    (xdc_Char)0x71,  /* [5762] */
    (xdc_Char)0x73,  /* [5763] */
    (xdc_Char)0x0,  /* [5764] */
    (xdc_Char)0x42,  /* [5765] */
    (xdc_Char)0x49,  /* [5766] */
    (xdc_Char)0x4f,  /* [5767] */
    (xdc_Char)0x53,  /* [5768] */
    (xdc_Char)0x0,  /* [5769] */
    (xdc_Char)0x6b,  /* [5770] */
    (xdc_Char)0x6e,  /* [5771] */
    (xdc_Char)0x6c,  /* [5772] */
    (xdc_Char)0x2e,  /* [5773] */
    (xdc_Char)0x0,  /* [5774] */
    (xdc_Char)0x43,  /* [5775] */
    (xdc_Char)0x6c,  /* [5776] */
    (xdc_Char)0x6f,  /* [5777] */
    (xdc_Char)0x63,  /* [5778] */
    (xdc_Char)0x6b,  /* [5779] */
    (xdc_Char)0x0,  /* [5780] */
    (xdc_Char)0x49,  /* [5781] */
    (xdc_Char)0x64,  /* [5782] */
    (xdc_Char)0x6c,  /* [5783] */
    (xdc_Char)0x65,  /* [5784] */
    (xdc_Char)0x0,  /* [5785] */
    (xdc_Char)0x49,  /* [5786] */
    (xdc_Char)0x6e,  /* [5787] */
    (xdc_Char)0x74,  /* [5788] */
    (xdc_Char)0x72,  /* [5789] */
    (xdc_Char)0x69,  /* [5790] */
    (xdc_Char)0x6e,  /* [5791] */
    (xdc_Char)0x73,  /* [5792] */
    (xdc_Char)0x69,  /* [5793] */
    (xdc_Char)0x63,  /* [5794] */
    (xdc_Char)0x73,  /* [5795] */
    (xdc_Char)0x0,  /* [5796] */
    (xdc_Char)0x51,  /* [5797] */
    (xdc_Char)0x75,  /* [5798] */
    (xdc_Char)0x65,  /* [5799] */
    (xdc_Char)0x75,  /* [5800] */
    (xdc_Char)0x65,  /* [5801] */
    (xdc_Char)0x0,  /* [5802] */
    (xdc_Char)0x53,  /* [5803] */
    (xdc_Char)0x65,  /* [5804] */
    (xdc_Char)0x6d,  /* [5805] */
    (xdc_Char)0x61,  /* [5806] */
    (xdc_Char)0x70,  /* [5807] */
    (xdc_Char)0x68,  /* [5808] */
    (xdc_Char)0x6f,  /* [5809] */
    (xdc_Char)0x72,  /* [5810] */
    (xdc_Char)0x65,  /* [5811] */
    (xdc_Char)0x0,  /* [5812] */
    (xdc_Char)0x53,  /* [5813] */
    (xdc_Char)0x77,  /* [5814] */
    (xdc_Char)0x69,  /* [5815] */
    (xdc_Char)0x0,  /* [5816] */
    (xdc_Char)0x54,  /* [5817] */
    (xdc_Char)0x61,  /* [5818] */
    (xdc_Char)0x73,  /* [5819] */
    (xdc_Char)0x6b,  /* [5820] */
    (xdc_Char)0x0,  /* [5821] */
    (xdc_Char)0x67,  /* [5822] */
    (xdc_Char)0x61,  /* [5823] */
    (xdc_Char)0x74,  /* [5824] */
    (xdc_Char)0x65,  /* [5825] */
    (xdc_Char)0x73,  /* [5826] */
    (xdc_Char)0x2e,  /* [5827] */
    (xdc_Char)0x0,  /* [5828] */
    (xdc_Char)0x47,  /* [5829] */
    (xdc_Char)0x61,  /* [5830] */
    (xdc_Char)0x74,  /* [5831] */
    (xdc_Char)0x65,  /* [5832] */
    (xdc_Char)0x48,  /* [5833] */
    (xdc_Char)0x77,  /* [5834] */
    (xdc_Char)0x69,  /* [5835] */
    (xdc_Char)0x0,  /* [5836] */
    (xdc_Char)0x47,  /* [5837] */
    (xdc_Char)0x61,  /* [5838] */
    (xdc_Char)0x74,  /* [5839] */
    (xdc_Char)0x65,  /* [5840] */
    (xdc_Char)0x4d,  /* [5841] */
    (xdc_Char)0x75,  /* [5842] */
    (xdc_Char)0x74,  /* [5843] */
    (xdc_Char)0x65,  /* [5844] */
    (xdc_Char)0x78,  /* [5845] */
    (xdc_Char)0x0,  /* [5846] */
    (xdc_Char)0x68,  /* [5847] */
    (xdc_Char)0x61,  /* [5848] */
    (xdc_Char)0x6c,  /* [5849] */
    (xdc_Char)0x2e,  /* [5850] */
    (xdc_Char)0x0,  /* [5851] */
    (xdc_Char)0x68,  /* [5852] */
    (xdc_Char)0x65,  /* [5853] */
    (xdc_Char)0x61,  /* [5854] */
    (xdc_Char)0x70,  /* [5855] */
    (xdc_Char)0x73,  /* [5856] */
    (xdc_Char)0x2e,  /* [5857] */
    (xdc_Char)0x0,  /* [5858] */
    (xdc_Char)0x48,  /* [5859] */
    (xdc_Char)0x65,  /* [5860] */
    (xdc_Char)0x61,  /* [5861] */
    (xdc_Char)0x70,  /* [5862] */
    (xdc_Char)0x4d,  /* [5863] */
    (xdc_Char)0x65,  /* [5864] */
    (xdc_Char)0x6d,  /* [5865] */
    (xdc_Char)0x0,  /* [5866] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[40] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x15cd,  /* left */
        (xdc_Bits16)0x15d2,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x15db,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x15e2,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x15e7,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x15f0,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x15f6,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x15fc,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1601,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1605,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x160a,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1611,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x161a,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1622,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1629,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1630,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x1635,  /* left */
        (xdc_Bits16)0x1639,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1642,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x164a,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1652,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1656,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1668,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1674,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x167a,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1685,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x168a,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x168f,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1695,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x169a,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x16a5,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x16ab,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x16b5,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x16b9,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x16be,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8021,  /* left */
        (xdc_Bits16)0x16c5,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8021,  /* left */
        (xdc_Bits16)0x16cd,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x16d7,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x1652,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x16dc,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x16e3,  /* right */
    },  /* [39] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x16eb;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x28;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_msp430_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_msp430_Hwi_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_msp430_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_msp430_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_msp430_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_msp430_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_msp430_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_msp430_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_msp430_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_msp430_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_msp430_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_msp430_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_msp430_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_msp430_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_msp430_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_msp430_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_msp430_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_msp430_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_msp430_Hwi_getFunc((ti_sysbios_family_msp430_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_msp430_Hwi_setFunc((ti_sysbios_family_msp430_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_msp430_Hwi_getHookContext((ti_sysbios_family_msp430_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_msp430_Hwi_setHookContext((ti_sysbios_family_msp430_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Hwi_getIrp((ti_sysbios_family_msp430_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_family_msp430_Timer_create(id, tickFxn, (const ti_sysbios_family_msp430_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_family_msp430_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_msp430_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_msp430_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_msp430_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_msp430_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_msp430_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getMaxTicks((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_msp430_Timer_setNextTick((ti_sysbios_family_msp430_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_msp430_Timer_start((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_msp430_Timer_stop((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_msp430_Timer_setPeriod((ti_sysbios_family_msp430_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_msp430_Timer_setPeriodMicroSecs((ti_sysbios_family_msp430_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getPeriod((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getCount((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_msp430_Timer_getFreq((ti_sysbios_family_msp430_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_msp430_Timer_getFunc((ti_sysbios_family_msp430_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_msp430_Timer_setFunc((ti_sysbios_family_msp430_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_msp430_Timer_trigger((ti_sysbios_family_msp430_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getExpiredCounts((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_msp430_Timer_getExpiredTicks((ti_sysbios_family_msp430_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_msp430_Timer_getCurrentTick((ti_sysbios_family_msp430_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_msp430_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enterFxn, ti_sysbios_interfaces_ITaskSupport_FuncPtr exitFxn, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_msp430_TaskSupport_start(curTask, enterFxn, exitFxn, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_msp430_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_msp430_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_msp430_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_msp430_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_msp430_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)ti_sysbios_heaps_HeapMem_create((const ti_sysbios_heaps_HeapMem_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.msp430.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_msp430_Hwi_Object2__ s0; char c; } ti_sysbios_family_msp430_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__DESC__C, ".const:ti_sysbios_family_msp430_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Hwi_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_family_msp430_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_msp430_Hwi___S1) - sizeof(ti_sysbios_family_msp430_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_msp430_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_msp430_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_msp430_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.msp430.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_msp430_Timer_Object2__ s0; char c; } ti_sysbios_family_msp430_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__DESC__C, ".const:ti_sysbios_family_msp430_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Timer_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_family_msp430_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_msp430_Timer___S1) - sizeof(ti_sysbios_family_msp430_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_msp430_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_msp430_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_msp430_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.msp430.ClockFreqs SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_ClockFreqs_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_family_msp430_Hwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_family_msp430_Hwi_Module__id *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_family_msp430_Hwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_family_msp430_Hwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_family_msp430_Hwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_family_msp430_Hwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_family_msp430_Hwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_family_msp430_Hwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_family_msp430_Hwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_family_msp430_Hwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_family_msp430_Hwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_family_msp430_Hwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_family_msp430_Hwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_family_msp430_Hwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_family_msp430_Hwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_family_msp430_Hwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_family_msp430_Hwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_family_msp430_Hwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_family_msp430_Hwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_family_msp430_Hwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_family_msp430_Hwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_msp430_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_msp430_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32787;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_msp430_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_msp430_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_msp430_Hwi_Object__ * const)ti_sysbios_family_msp430_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_msp430_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_msp430_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_msp430_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_msp430_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_msp430_Hwi_Params __prms;
    ti_sysbios_family_msp430_Hwi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Hwi_Instance_init__E(__obj, __args->intNum, __args->hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_family_msp430_Hwi_Handle ti_sysbios_family_msp430_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_msp430_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_msp430_Hwi_Params prms;
    ti_sysbios_family_msp430_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_msp430_Hwi_construct(ti_sysbios_family_msp430_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_msp430_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_msp430_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_msp430_Hwi_destruct(ti_sysbios_family_msp430_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, *((ti_sysbios_family_msp430_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_msp430_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_msp430_Hwi_delete(ti_sysbios_family_msp430_Hwi_Handle *instp)
{
    ti_sysbios_family_msp430_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_family_msp430_Timer_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_family_msp430_Timer_Module__id *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_family_msp430_Timer_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_family_msp430_Timer_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_family_msp430_Timer_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_family_msp430_Timer_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_family_msp430_Timer_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_family_msp430_Timer_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_family_msp430_Timer_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_family_msp430_Timer_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_family_msp430_Timer_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_family_msp430_Timer_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_family_msp430_Timer_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_family_msp430_Timer_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_family_msp430_Timer_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_family_msp430_Timer_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_family_msp430_Timer_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_family_msp430_Timer_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_family_msp430_Timer_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_family_msp430_Timer_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_family_msp430_Timer_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_family_msp430_Timer_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_family_msp430_Timer_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_family_msp430_Timer_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_family_msp430_Timer_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_family_msp430_Timer_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_family_msp430_Timer_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_family_msp430_Timer_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_family_msp430_Timer_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_msp430_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_msp430_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32790;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_msp430_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_msp430_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_msp430_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_msp430_Timer_Object__ * const)ti_sysbios_family_msp430_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_msp430_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_msp430_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_msp430_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_msp430_Timer_Args__create *__args = __aa;
    ti_sysbios_family_msp430_Timer_Params __prms;
    ti_sysbios_family_msp430_Timer_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Timer_Instance_init__E(__obj, __args->id, __args->tickFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_family_msp430_Timer_Handle ti_sysbios_family_msp430_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_msp430_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_msp430_Timer_Params prms;
    ti_sysbios_family_msp430_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_msp430_Timer_construct(ti_sysbios_family_msp430_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_msp430_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_msp430_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_msp430_Timer_destruct(ti_sysbios_family_msp430_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_msp430_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, *((ti_sysbios_family_msp430_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_msp430_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_msp430_Timer_delete(ti_sysbios_family_msp430_Timer_Handle *instp)
{
    ti_sysbios_family_msp430_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_gates_GateHwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_gates_GateHwi_Module__id *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_gates_GateHwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_gates_GateHwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_gates_GateHwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_gates_GateHwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_gates_GateHwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_gates_GateHwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_gates_GateHwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_gates_GateHwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_gates_GateHwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_gates_GateHwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_gates_GateHwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_gates_GateHwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_gates_GateMutex_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_gates_GateMutex_Module__id *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_gates_GateMutex_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_gates_GateMutex_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_gates_GateMutex_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_gates_GateMutex_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_gates_GateMutex_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_gates_GateMutex_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_gates_GateMutex_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_gates_GateMutex_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_gates_GateMutex_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_gates_GateMutex_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_gates_GateMutex_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_gates_GateMutex_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_hal_Hwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_hal_Hwi_Module__id *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_hal_Hwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_hal_Hwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_hal_Hwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_hal_Hwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_hal_Hwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_hal_Hwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_hal_Hwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_hal_Hwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_hal_Hwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_hal_Hwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_hal_Hwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_hal_Hwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_hal_Hwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_hal_Hwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__obj, __args->intNum, __args->hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapMem_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapMem_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapMem_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapMem_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapMem_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32807;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapMem_Object__ * const)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Clock_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Clock_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Clock_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Clock_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Clock_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Clock_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Clock_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Clock_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Clock_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Clock_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Clock_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Clock_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Clock_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Clock_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Clock_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Clock_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32794;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__obj, __args->clockFxn, __args->timeout, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(obj, clockFxn, timeout, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Queue_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Queue_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Queue_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Queue_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Queue_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Queue_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Queue_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Queue_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Queue_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Queue_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Queue_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Queue_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Queue_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Queue_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Queue_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Queue_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Semaphore_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Semaphore_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Semaphore_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Semaphore_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Semaphore_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Semaphore_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Semaphore_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Semaphore_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Semaphore_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Semaphore_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Semaphore_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Semaphore_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Semaphore_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Semaphore_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__obj, __args->count, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(obj, count, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Swi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Swi_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Swi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Swi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Swi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Swi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Swi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Swi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Swi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Swi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Swi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Swi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Swi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Swi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Swi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Swi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__obj, __args->swiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(obj, swiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Task_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Task_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Task_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Task_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Task_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Task_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Task_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Task_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Task_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Task_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Task_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Task_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Task_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Task_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Task_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Task_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Task_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Task_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Task_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Task_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Task_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__obj, __args->fxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(obj, fxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_Main_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_Main_Module_GateProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_Main_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_Main_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_Main_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_Main_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_Memory_HeapProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_Memory_HeapProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_Memory_HeapProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_Memory_HeapProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_Memory_HeapProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_Memory_HeapProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S(void)
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_System_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_System_Module_GateProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_System_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_System_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_System_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_System_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

