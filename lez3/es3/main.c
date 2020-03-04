#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){
	if(a > b) return a;
	else return b;
} 

int main(){
	int sA;
	scanf("%d", &sA);
	int *aA = malloc(sA * sizeof(int));
	for(int i = 0; i < sA; ++i) scanf("%d", &aA[i]);
	

	int best = 0, sum = 0;
	for(int i = 0; i < sA; ++i){
		sum = max(aA[i], sum + aA[i]);
		best = max(best, sum);
	}

	printf("%d\n", best);


	free(aA);
	return 0;
}