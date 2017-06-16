VC=C:\VCompiler
LIB=$(VC)\Lib
INCLUDE=$(VC)\Include
LINK=$(VC)\Bin\link.exe
ML=$(VC)\Bin\ml.exe
RC=$(VC)\Bin\rc.exe
CVTRES=$(VC)\Bin\cvtres.exe
NAME1 = launcher
#OBJS1 = $(NAME1).obj tool.obj
OBJS1 = $(NAME1).obj

NAME2 = run
#OBJS2 = $(NAME2).obj tool.obj
OBJS2 = $(NAME2).obj

NAME3 = run-console
OBJS3 = $(NAME3).obj

NAME4 = launcher-console
OBJS4 = $(NAME4).obj

#连接选项
LINK_FLAG = /RELEASE /LIBPATH:$(LIB) /subsystem:windows
LINK_CONSOLE_FLAG = /RELEASE /LIBPATH:$(LIB) /subsystem:console
#编译选项
ML_FLAG = /c /I$(INCLUDE)

all: $(NAME1).EXE  $(NAME2).EXE $(NAME3).EXE $(NAME4).EXE
	del /q /s *.obj *.res

$(NAME1).EXE: $(OBJS1)
	$(LINK) $(LINK_FLAG) /out:$(NAME1)-orig.exe $(OBJS1)
	upx -9 -o $(NAME1).exe $(NAME1)-orig.exe

$(NAME2).EXE: $(OBJS2)
	$(LINK) $(LINK_FLAG) /out:$(NAME2)-orig.exe $(OBJS2)
	upx -9 -o $(NAME2).exe $(NAME2)-orig.exe

$(NAME3).EXE: $(OBJS3)
	$(LINK) $(LINK_CONSOLE_FLAG) /out:$(NAME3)-orig.exe $(OBJS3)
	upx -9 -o $(NAME3).exe $(NAME3)-orig.exe

$(NAME4).EXE: $(OBJS4)
	$(LINK) $(LINK_CONSOLE_FLAG) /out:$(NAME4)-orig.exe $(OBJS4)
	upx -9 -o $(NAME4).exe $(NAME4)-orig.exe

.asm.obj:
	$(ML) $(ML_FLAG) $<

.rc.res:
	$(RC) $<

tool.obj: tool.res
	$(CVTRES) tool.res

clean:
	del /q /s *.exe *.obj *.res
 

.PHONY: all clean