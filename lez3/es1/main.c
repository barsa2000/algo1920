#include <stdio.h>
#include <stdlib.h>

int main(){
	int sA;
	scanf("%d", &sA);
	int *aA = malloc(sA * sizeof(int));
	for(int i = 0; i < sA; ++i) scanf("%d", &aA[i]);
	
	int sB;
	scanf("%d", &sB);
	int *aB = malloc(sB * sizeof(int));	
	for(int i = 0; i < sB; ++i) scanf("%d", &aB[i]);
	
	int c = 0;

	for(int i = 0; i < sA; ++i){
		int j = 0;

		while(j < sB){
			if(aA[i] == aB[j]){
				++c;
				break;
			}
			++j;
		}
	}

	printf("%d\n", c);


	free(aA);
	free(aB);
	return 0;
}