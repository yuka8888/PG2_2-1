#include<stdio.h>

int main() {
	int state = 0;
	int i = 0;
	int arr[4] = { 0 };
	int pos = 3;

	printf("state = ");
	scanf_s("%d", &state);


	while (state > 0) {
		arr[pos] = state % 2;
		state = state / 2;
		pos--;
	}

	if (arr[3] == 1) {
		printf("�퓬�s�\���\n");
	}
	if (arr[2] == 1) {
		printf("�ŏ��\n");
	}
	if (arr[1] == 1) {
		printf("�Ή����\n");
	}
	if (arr[0] == 1) {
		printf("������\n");
	}


	return 0;
}

