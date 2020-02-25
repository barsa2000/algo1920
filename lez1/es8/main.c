#include <stdio.h>
#define N 10

void minmax(int *a, int l, int *min, int *max){
	*min = *max = 0;
	for(int i = 0; i < l; ++i){
		if(a[i] > a[*max]) *max = i;
		if(a[i] < a[*min]) *min = i;
	}
}

int main(){
	int a[N];
	int min, max;
	for(int i = 0; i < N; ++i){
		scanf("%d", &a[i]);
	}
	minmax(a, N, &min, &max);
	printf("%d\n%d\n%d\n%d\n",min, a[min], max, a[max]);
	return 0;
}