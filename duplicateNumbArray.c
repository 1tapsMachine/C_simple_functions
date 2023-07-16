#include <stdio.h>
#include <stdlib.h>

int** dupNum(int arr[], int **numbers, int size) {
	int lastNumber;
	for (int i = 0; i < size; i++) {
		if (i > 0 && arr[i] == lastNumber) {
			continue;
		}
		numbers[i][0] = arr[i];
		numbers[i][1] = 1;
		lastNumber = arr[i];
	}

	for (int i = 0; i < size; i++) {
		if (numbers[i][1] == 0) {
			continue;
		}
		for (int j = i + 1; j < size; j++) {
			if (arr[i] == arr[j]) {
				numbers[i][1]++;
			}
		}
	}

	return numbers;
}
int main(void) {
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	int arr[size];
	for (int i = 0; i < size; i++) {
		printf("Enter the %d element: ", i + 1);
		scanf("%d", &arr[i]);
	}
	int **numbers = (int **)malloc(size * sizeof(int *));
	for (int i = 0; i < size; i++) {
		numbers[i] = (int *)malloc(2 * sizeof(int));
	}
	numbers = dupNum(arr, numbers, size);

	for (int i = 0; i < size; i++) {
		if (numbers[i][1] == 0) {
			continue;
		}
		printf("[\"%d\"] : \"%d\"\n", numbers[i][0], numbers[i][1]);
	}

	// Free the allocated memory
	for (int i = 0; i < size; i++) {
		free(numbers[i]);
	}
	free(numbers);

	return 0;
}
