#include <stdio.h>

void main() {

	char ch;

	scanf_s("%c", &ch);

	if (ch >= 'A' && ch <= 'Z') {
		printf("�빮��\n");
	}
	else if (ch >= 'a' && ch <= 'z') {
		printf("�ҹ���\n");
	}
	else if (ch >= 0 && ch <= 9) {
		printf("����\n");
	}

	printf("�ƽ�Ű : %d", ch);

}