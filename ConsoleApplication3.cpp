#include<stdio.h>
#include <stdlib.h>
int main() {
	
	int rows, cols, i, j;
	scanf("%d %d", &rows, &cols);
	int** intervals = (int**)malloc(rows * sizeof(int*));
	for (i = 0; i < rows; i++) {
		intervals[i] = (int*)malloc(cols * sizeof(int));
	}
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			scanf("%d", &intervals[i][j]);
		}
	}
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("%d ", intervals[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < rows; i++) {
		free(intervals[i]);
	}
	free(intervals);
	return 0;

}

