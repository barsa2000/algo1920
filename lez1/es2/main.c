#include <stdio.h>

int main(){
	int in;
	scanf(" %d", &in);
	int prime = 0;
	int i = 2;
	while(i < in && !prime){
		if(in % i == 0)
			prime = 1;
		++i;
	}

	printf("%d", !prime);

	return 0;
}