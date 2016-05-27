#include <stdio.h>

void main() {

	char ch;

	scanf_s("%c", &ch);

	if (ch >= 'A' && ch <= 'Z') {
		printf("대문자\n");
	}
	else if (ch >= 'a' && ch <= 'z') {
		printf("소문자\n");
	}
	else if (ch >= 0 && ch <= 9) {
		printf("숫자\n");
	}

	printf("아스키 : %d", ch);

}