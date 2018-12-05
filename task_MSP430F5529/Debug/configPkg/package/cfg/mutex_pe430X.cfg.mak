# invoke SourceDir generated makefile for mutex.pe430X
mutex.pe430X: .libraries,mutex.pe430X
.libraries,mutex.pe430X: package/cfg/mutex_pe430X.xdl
	$(MAKE) -f C:\Users\Admin\workspace_v8\task_MSP430F5529/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Admin\workspace_v8\task_MSP430F5529/src/makefile.libs clean

