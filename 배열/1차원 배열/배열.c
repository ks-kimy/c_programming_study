#include<stdio.h>

int arr[10];
int main() {
	int i, j, k, sum = 0, temp;
	for (i = 0; i < 9; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < 9; i++) {
		sum = sum + arr[i];
	}
	temp = sum;
	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 9; j++) {
			temp = sum - (arr[i] + arr[j]);
			if (temp == 100) {
				arr[i] = -1;
				arr[j] = -1;
				break;
			}
		}
		if (temp == 100) break;
	}
	for (i = 0; i < 9; i++) {
		if (arr[i] > 0) printf("%d ", arr[i]);
	}
	return 0;

}