#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

char* my_strcat1(char *s1, char *s2) {
	char *newStr = malloc(strlen(s1) + strlen(s2) + 1);
	strcpy(newStr, s1);
	strcpy(newStr + strlen(s1), s2);
	return newStr;
}

int main(){
	char str1[N], str2[N];
	scanf("%s", str1);
	scanf("%s", str2);
	char *newStr = my_strcat1(str1,str2);
	printf("%s\n", newStr);
	free(newStr);
	return 0;
}