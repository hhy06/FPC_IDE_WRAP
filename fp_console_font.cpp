#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>
//#include <string>
using namespace std;

int main()
{
    CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 32;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL; 
	printf("A quick brown fox jumps over the lazy dog\n");
    printf("Setting to Lucida Console: press <Enter> ");
	getchar();
	
	// at first they used wcscopy_s, but it is not there in win10...?
	// 
	wcscpy(cfi.FaceName, L"Lucida Console");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	int res = system("C:\\FPC\\3.0.4\\bin\\i386-win32\\fp.exe");
	//getchar();
	return 0;
 }
