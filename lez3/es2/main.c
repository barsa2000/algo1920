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
		int sx = 0, dx = sB-1, cx = dx/2;

		while(sx <= dx){
			if(aA[i] == aB[cx]) {
				++c;
				break;
			} else if(aA[i] < aB[cx]) {
				dx = cx - 1;
			} else {
				sx = cx +1;
			}
			cx = (sx + dx) / 2;
		}
	}

	printf("%d\n", c);


	free(aA);
	free(aB);
	return 0;
}