#include <stdio.h>
#include <stdlib.h>

int subtracao(int a, int b){
	return (a-b);
}

int soma(int a, int b){
	return (a+b);
}


int main(){
	printf("Soma dos numeros: %d\n", soma(3,4));
	printf("Subtracao dos numeros: %d\n", subtracao(5,5));
	return 0;
}
