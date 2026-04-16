#include <stdio.h>

int main(){
	
	int num;
	
	printf("Mete um numero ai:\n");
	scanf("%d",&num);
	
	if(num > 20){
		printf("o numero eh maior que 20");
	}
	else if(num == 20){
		printf("o numero eh 20");
	}
	else{
		printf("o numero eh menor que 20");
	}
	return 0;
}

