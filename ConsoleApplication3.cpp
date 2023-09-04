#include<stdio.h>
#include <stdlib.h>
#include "FindAlgorithm.h"
int main() {
	int a[6] = { 0,7,9,11,15,16 },i,n;
	scanf("%d", &n);
	if (binarySearch(a, 6,n) != -1) {
		printf("%d\n", binarySearch(a, 6, n));
	}
	return 0;
}

