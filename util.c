#include "util.h"

void init() {
	system("mode con cols=76 lines=30 | title GAMETITLE"); //adjust console size
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //get console handle
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}



/*cursor position shift function
The x-axis increases to the right.
The y-axis increases downwards.
*/
void gotoxy(int x, int y) {
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);//Import Console Handle
	COORD pos; //The function that sets the console cursor position (available in Windows only)
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}