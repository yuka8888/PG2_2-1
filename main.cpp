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
		printf("í“¬•s”\ó‘Ô\n");
	}
	if (arr[2] == 1) {
		printf("“Åó‘Ô\n");
	}
	if (arr[1] == 1) {
		printf("Î‰»ó‘Ô\n");
	}
	if (arr[0] == 1) {
		printf("–°‚èó‘Ô\n");
	}


	return 0;
}

