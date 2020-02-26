#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

int my_strcmp(char *s1, char *s2) {
	char *p1 = s1;
	char *p2 = s2;
	char c1,c2;
	do{
		c1 = *p1++;
		c2 = *p2++;
		if(c1 == '\0')
			break;
	} while(c1 == c2);
	return (c1-c2 < 0 ? -1 : c1-c2 > 0 ? 1 : 0);
}

int main(){
	char str1[N + 1], str2[N + 1];
	scanf("%s", str1);
	scanf("%s", str2);
	int res = my_strcmp(str1,str2);
	if(res == 0)
		printf("%d\n", res);
	else
		printf("%+d\n", res);
	return 0;
}