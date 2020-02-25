#include <stdio.h>

void swap(int *x, int *y, int *z){
	int t = *x;
	*x = *z;
	*z = *y;
	*y = t;
}

int main(){
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	swap(&x, &y, &z);

	printf("%d\n%d\n%d\n", x, y, z);


	return 0;
}