#include <stdio.h>
#define N 10

void reset(int array[], int len) {
	for(int i = 0; i < len ;++i){
		array[i] = 0;
	}
}

void add(int array[], int len, int val){
	if(val >= 0 && val < len)
		++array[val];
}

int main(){
	int a[N];
	reset(a, N);

	int in;
	do {
		scanf("%d", &in);
		add(a,N,in);
	} while(in != -1);

	for(int i = 0; i < N ;++i){
		printf("%d\n", a[i]);
	}
	
	return 0;
}