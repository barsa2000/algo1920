#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int *a = (int*) malloc(N * sizeof(int));
	for(int i = 0; i < N; ++i){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < N / 2; ++i){
		int t = a[i];
		a[i] = a[N - 1 - i];
		a[N - 1 - i] = t;
	}

	for(int i = 0; i < N; ++i){
		printf("%d\n", a[i]);
	}

	free(a);

	return 0;
}