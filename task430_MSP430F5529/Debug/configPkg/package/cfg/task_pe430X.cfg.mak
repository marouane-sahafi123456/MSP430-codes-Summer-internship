# invoke SourceDir generated makefile for task.pe430X
task.pe430X: .libraries,task.pe430X
.libraries,task.pe430X: package/cfg/task_pe430X.xdl
	$(MAKE) -f C:\Users\Admin\workspace_v8\task430_MSP430F5529/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Admin\workspace_v8\task430_MSP430F5529/src/makefile.libs clean

