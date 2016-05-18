// Include Global Librarys
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Include Windows Librarys
#ifdef _WIN32
#include <windows.h>
#include <locale.h>
#endif

// Defines
#define TRUE 1
#define FALSE 0

void clearscreen()
{
	#ifdef _WIN32
		system ("CLS");
	#else
		system ("clear");
	#endif
}
