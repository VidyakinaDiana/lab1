
#include <stdio.h>
#include <ctype.h>
//lab2 var 9

int checkLetter(char d) {
	if ((d >= 'a') && (d <= 'z')) {
		return 1;
	}
	if ((d >= 'A') && (d <= 'Z')) {
		return 1;
	}
	return 0;
}

int main() {

	char dat[100000];
	for (int i = 0;i < sizeof(dat);i++) {
		dat[i] = NULL;
	}
	printf("%s", "Enter the string on English:\n");
	fgets(dat, sizeof(dat), stdin);

	int st = 0;
	for (int i = 0;i < sizeof(dat);i++) {
		if (dat[i] == '\n') {
			break;
		}
		if (checkLetter(dat[i]) == 1) {
			printf("%c", dat[i]);
			st = 1;
		}
		else {
			if (st == 1) {
				printf("\n");
				st = 0;
			}
		}
	}
	return 0;
}