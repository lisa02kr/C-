#include "main.h"

int main() {
	init();
	while (1) {
		titleDraw();
		int menuCode = menuDraw();
		if (menuCode == 0) {
			int n = maplistDraw();
			if (n == 0) {
				gotoxy(23, 6);
				printf("EASY SELECTED");
				Sleep(1000);
			}
			else if (n == 1) {
				printf("DIFFICULT SELECTED");
				Sleep(1000);
			}
		}
		else if (menuCode == 1) {
			infoDraw();
		}
		else if (menuCode == 2) {
			return 0;
		}
		system("cls"); //Clearing all characters, Initializing Console Coordinates
	}
	return 0;

}


