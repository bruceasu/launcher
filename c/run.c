#include <windows.h>
#include <stdio.h>
#define MAXPATH 300
int APIENTRY WinMain(HINSTANCE hInstance,     //当前窗口实例句柄
                     HINSTANCE hPrevInstance, //前一个实例句柄，Win32下为NULL                      
                     LPSTR     lpCmdLine,     //命令行参数字符                      
                     int       nCmdShow       //窗口的显示方式                      
                     )

/*int main(int argc, char** argv)*/
{      
	char buffer[MAXPATH];
    getcwd(buffer, MAXPATH);
    strcat(buffer, "\\bin\\run.bat");
	WinExec(buffer, SW_HIDE); // SW_HIDE, SW_SHOW

    return 0;  //函数返回值
}