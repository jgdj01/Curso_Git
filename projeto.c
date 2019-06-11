#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
	int soma_num = a + b;
	return soma_num;
}

int main(){
	printf("Some dos numeros: %d\n", soma(3,4));
	
	return 0;
}
