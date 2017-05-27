# if not found the files, set PATH, INCLUDE, LIB
VC=C:\VCompiler
CC=$(VC)\Bin\cl.exe
RC=$(VC)\Bin\rc.exe
LINK=$(VC)\Bin\link.exe
LIB=$(VC)\Lib
INCLUDE=$(VC)\Include
#连接选项
LINK_FLAG = /RELEASE /LIBPATH:$(LIB) /subsystem:windows
#编译选项
CC_FLAG = /c /O1 /I$(INCLUDE) /GA
#需要的资源文件
RES = tool.res 

all: launcher.exe run.exe
	del /q /s *.obj *.res
	
.c.obj:
	$(CC) $(CC_FLAG) $< 
.rc.res:
	$(RC) $<

launcher.exe: launcher.obj tool.res
	$(LINK) $(LINK_FLAG) /out:launcher-orig.exe launcher.obj $(RES)
	upx -9 -o launcher.exe launcher-orig.exe
run.exe: run.obj tool.res
	$(LINK) /LIBPATH:"C:\VCompiler\Lib" /out:run-orig.exe run.obj $(RES)
	upx -9 -o run.exe run-orig.exe
clean:
	del /q /s *.exe *.obj *.res
 

.PHONY: all clean