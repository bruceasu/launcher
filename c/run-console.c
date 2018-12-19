#include <stdio.h>
#define MAXPATH 300
int main(int argc, char** argv)
{      
	char buffer[MAXPATH] = "bin\\run.bat";
	system(buffer);
    return 0;
}