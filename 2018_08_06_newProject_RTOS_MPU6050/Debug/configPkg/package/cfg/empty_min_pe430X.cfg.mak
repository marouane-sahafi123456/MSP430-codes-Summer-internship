# invoke SourceDir generated makefile for empty_min.pe430X
empty_min.pe430X: .libraries,empty_min.pe430X
.libraries,empty_min.pe430X: package/cfg/empty_min_pe430X.xdl
	$(MAKE) -f C:\Users\Admin\workspace_v8\2018_08_06_newProject_RTOS_MPU6050/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Admin\workspace_v8\2018_08_06_newProject_RTOS_MPU6050/src/makefile.libs clean

