#include <windows.h>
#include <stdio.h>
#include "resource.h"
#define MAXPATH 300
int APIENTRY WinMain(HINSTANCE hInstance,     //��ǰ����ʵ�����
                     HINSTANCE hPrevInstance, //ǰһ��ʵ�������Win32��ΪNULL                      
                     LPSTR     lpCmdLine,     //�����в����ַ�                      
                     int       nCmdShow       //���ڵ���ʾ��ʽ                      
                     )

{      
	char buffer[MAXPATH];
    getcwd(buffer, MAXPATH);
    strcat(buffer, "\\bin\\launcher.bat");
	//char buffer[] = "bin\\launcher.bat";
	WinExec(buffer, SW_HIDE); // SW_HIDE, SW_SHOW

    return 0;  //��������ֵ
}