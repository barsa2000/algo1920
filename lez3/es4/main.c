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

	int sC = sA + sB;
	int *aC = malloc(sC * sizeof(int));	

	int a = 0, b = 0, c = 0;
	while(a < sA && b < sB){
		if(aA[a] < aB[b]) {
			aC[c] = aA[a];
			++c;
			++a;
		} else {
			aC[c] = aB[b];
			++c;
			++b;
		}

	}

	if(a != sA) {
		for(;a < sA; ++a, ++c) aC[c] = aA[a];
	}

	if(b != sB) {
		for(;b < sB; ++b, ++c) aC[c] = aB[b];
	}

	for(int i = 0; i < sC; ++i) printf("%d\n", aC[i]);



	free(aA);
	free(aB);
	free(aC);
	return 0;
}