#include<stdio.h>
#include <stdlib.h>
int main() {
	int a[6] = { 0,1,2,3,4,5 },i,n;
	scanf("%d", &n);
	int low = 0;
	int high = 5;
	int mid = (low + high) / 2;
	while(low<=high){
		int mid = (low + high) / 2;
		if (a[mid] == n) {
			printf("find it\n");
			printf("%d\n",mid);
			break;
		}
		else if (a[mid]<n) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("wrong!\n");
	}
	return 0;
}

