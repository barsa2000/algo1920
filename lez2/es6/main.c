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
	char *str1, *str2;
	int l1, l2;

	scanf("%d", &l1);
	str1 = malloc(l1+1);
	scanf("%s", str1);

	scanf("%d", &l2);
	str2 = malloc(l2+1);
	scanf("%s", str2);

	char *newStr = my_strcat1(str1,str2);
	printf("%s\n", newStr);
	free(newStr);
	free(str1);
	free(str2);
	return 0;
}