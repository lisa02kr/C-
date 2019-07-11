#include "game.h"
/*Function implementation*/

int keyControl() {
	//the getch function returns the input value immediately,
	//temporarily stores the value in temp
	char temp = getch();

	if (temp == 'w' || temp == 'W') {
		return UP;
	}
	else if (temp == 'a' || temp == 'A') {
		return LEFT;
	}
	else if (temp == 's' || temp == 'S') {
		return DOWN;
	}
	else if (temp == 'f' || temp == 'F') {
		return RIGHT;
	}
	else if (temp == ' ') {
		return SUBMIT;
	}
}


void titleDraw() {

	printf("\n\n\n\n");
	printf("        #      #   ########   #         ########   ########  \n");
	printf("        #      #        #     #         #          #         \n");
	printf("        ########   #    #     #         ########   ########  \n");
	printf("        #      #   #   #      #         #          #         \n");
	printf("        #      #    # #       ########  ########   ########  \n");
}

int menuDraw() {
	int x = 24;
	int y = 12;
	gotoxy(x - 2, y);
	printf(">  GAME START");
	gotoxy(x, y + 1);
	printf(" GAME INFORMATION");
	gotoxy(x, y + 2);
	printf(" EXIT ");

	while (1) {
		int n = keyControl();
		switch (n) {
		case UP: {
			if (y > 12) {
				gotoxy(x - 2, y);
				printf(" "); // to clear '>'
				gotoxy(x - 2, --y);
				printf(">");// to make new '>'
			}
			break;
		}
		case DOWN: {
			if (y < 14) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case SUBMIT: {
			return y - 12;
		}
		}
	}
}
int maplistDraw() {
	int x = 24;
	int y = 6;
	system("cls");
	printf("\n\n");
	printf("			[ SELECT THE MAP ]\n\n");

	gotoxy(x - 2, y);
	printf(">  EASY");
	gotoxy(x, y + 1);
	printf(" DIFFICULT");
	gotoxy(x, y + 2);
	printf(" BACK ");

	while (1) {
		int n = keyControl();
		switch (n) {
		case UP: {
			if (y > 6) {
				gotoxy(x - 2, y);
				printf(" "); // to clear '>'
				gotoxy(x - 2, --y);
				printf(">");// to make new '>'
			}
			break;
		}
		case DOWN: {
			if (y < 9) {
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case SUBMIT: {
			return y - 6;
		}
		}
	}
}


void infoDraw() {
	system("cls");
	printf("\n\n");
	printf("				[ MANUAL ]\n\n");
	printf("			CONTROL  : W, A, S, D\n");
	printf("			SELECTION: SPACE BAR\n\n\n\n\n\n");
	printf("		PRESS THE SPACE BAR TO GO TO THE MAIN SCREEN.\n\n\n\n\n\n");
	printf("						  made by HYEONJEONG LEE\n\n");

	while (1) {
		if (keyControl() == SUBMIT) {
			break;
		}
	}

}