#include <stdio.h>

int main(){
	int in = 1;
	int tot = 0;
	
	while(in != 0){
		scanf("%d", &in);
		tot += in;
	}

	printf("%d\n", tot);

	return 0;
}