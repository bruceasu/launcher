;*****************************
;launcher.asm                * 
;功能：启动波外部程序        *
;*****************************


SW_HIDE = 0 ; 常量定义
.386p
.model flat,stdcall ;平坦内存模式

ExitProcess proto,dwExitCode:dword
WinExec proto,dwPath:dword,dwOps:dword
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
; Include 文件定义
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

;includelib          user32.lib
includelib          kernel32.lib

.data 
Path db 'bin\run.bat',0

.code
main:
;push SW_HIDE ; WinExec的参数入栈
;push offset Path ;
;call WinExec
invoke  WinExec,offset Path,SW_HIDE
push 0 ;ExtiProcess的参数入栈
call ExitProcess

end main
