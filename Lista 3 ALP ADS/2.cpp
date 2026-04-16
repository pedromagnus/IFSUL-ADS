#include <stdio.h>

int main(){
	
	int num;
	
	printf("Mete um numero ai:\n");
	scanf("%d",&num);
	
	if(num >= 0){
		printf("o numero eh positivo");
	}
	else{
		printf("o numero eh negativo");
	}
	return 0;
}

