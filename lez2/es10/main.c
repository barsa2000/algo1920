#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

char* product(char *str, int k){
	char *newStr = malloc(strlen(str) * k + 1);
	char *p = newStr;
	for(int i = 0; i < k; ++i, p += strlen(str)){
		strcpy(p, str);
	}
	return newStr;
}

int main(){
	char str[N + 1];
	int k;
	scanf("%s", str);
	scanf("%d", &k);
	char *newStr = product(str, k);
	printf("%s\n", newStr);
	free(newStr);
	return 0;
}