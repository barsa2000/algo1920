#include <stdio.h>
#include <string.h>

int anagramma(unsigned char *s1, unsigned char *s2) {
	unsigned int a1[256] = {0}, a2[256] = {0};
	for(int i = 0; i < strlen(s1); ++i){
		++a1[s1[i]];
	}
	for(int i = 0; i < strlen(s2); ++i){
		++a2[s2[i]];
	}
	int check = 1;
	int i = 0;
	while(check && i < 256) {if(a1[i] != a2[i]) check = 0; ++i;}
	return check;
}

int main(){
	unsigned char s1[1000], s2[1000];
	scanf("%s", s1);
	scanf("%s", s2);
	
	printf("%d\n", anagramma(s1,s2));
	
	return 0;
}