#include <stdio.h>

int main(){
	int N;
	int sum = 0;
	scanf("%d", &N);

	for(int i = N - 1; i >= 0; --i) sum += i * 2 + 1;

	printf("%d\n", sum);


	return 0;
}