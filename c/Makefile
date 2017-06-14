# if not found the files, set PATH, INCLUDE, LIB
VC=C:\VCompiler
CC=$(VC)\Bin\cl.exe
RC=$(VC)\Bin\rc.exe
LINK=$(VC)\Bin\link.exe
LIB=$(VC)\Lib
INCLUDE=$(VC)\Include
#连接选项
LINK_FLAG = /RELEASE /LIBPATH:$(LIB) /subsystem:windows
LINK_CONSOLE_FLAG = /RELEASE /LIBPATH:$(LIB) /SUBSYSTEM:CONSOLE
#编译选项
CC_FLAG = /c /O1 /I$(INCLUDE) /GA
#需要的资源文件
RES = tool.res 

all: launcher.exe run.exe run-console.exe
	del /q /s *.obj *.res
	
.c.obj:
	$(CC) $(CC_FLAG) $< 
.rc.res:
	$(RC) $<

launcher.exe: launcher.obj tool.res
	$(LINK) $(LINK_FLAG) /out:launcher-orig.exe launcher.obj $(RES)
	upx -9 -o launcher.exe launcher-orig.exe
run.exe: run.obj tool.res
	$(LINK) $(LINK_FLAG) /out:run-orig.exe run.obj $(RES)
	upx -9 -o run.exe run-orig.exe

run-console.exe: run-console.obj
	$(LINK) $(LINK_CONSOLE_FLAG)  /out:run-console-orig.exe run-console.obj
	upx -9 -o run-console.exe run-console-orig.exe

clean:
	del /q /s *.exe *.obj *.res
 

.PHONY: all clean