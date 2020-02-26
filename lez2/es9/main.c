#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

char* my_strcpy(char* dest, char* src){
	// memcpy(dest, src, strlen(src) + 1);
	for(int i = 0; i <= strlen(src); ++i){
		dest[i] = src[i];
	}

	return dest;
	
}

int main(){
	char src[N + 1];
	char *dest;
	scanf("%s", src);
	dest = malloc(strlen(src) + 1);
	printf("%s\n", my_strcpy(dest, src));
	free(dest);
	return 0;
}