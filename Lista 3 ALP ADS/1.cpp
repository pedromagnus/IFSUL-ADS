#include <stdio.h>

int main(){
	
	int num;
	
	printf("Mete um numero ai:\n");
	scanf("%d",&num);
	
	if(num%2 == 0){
		printf("o numero eh par");
	}
	else{
		printf("o numero eh impar");
	}
	return 0;
}

