#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

char* my_strcat1(char *s1, char *s2) {
	strcpy(s1 + strlen(s1), s2);
	return s1;
}

int main(){
	char str1[N*2 + 1], str2[N + 1];
	scanf("%s", str1);
	scanf("%s", str2);
	printf("%s\n", my_strcat1(str1,str2));
	return 0;
}