#include <stdio.h>

int main(){
	int a, b;
	
	printf("Mete dois numeros ai:\n");
	scanf("%d %d", &a, &b);
	
	if(a>b){
		printf("o maior numero eh %d\n",a);
	}
	else{
		printf("o maior numero eh %d",b);
	}
	return 0;
}

