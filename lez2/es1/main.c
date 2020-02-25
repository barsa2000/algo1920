#include <stdio.h>
#define N 10

int* FindVal(int a[], int len, int val){
	int *ret = NULL;
	int i = 0;
	while(ret == NULL && i < len){
		if(a[i] == val)
			ret = &a[i];
		++i;
	}
	return ret;
}

int main(){
	int a[N];
	for(int i = 0; i < N; ++i){
		scanf("%d", &a[i]);
	}
	int val;
	scanf("%d", &val);

	if(FindVal(a, N, val) != NULL){
		printf("trovato\n");
	} else {
		printf("non trovato\n");
	}

	return 0;
}