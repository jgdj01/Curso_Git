#include <stdio.h>
#include <stdlib.h>

int subtracao(int a, int b){
	int sub_num = a - b;
	return sub_num;
}

int soma(int a, int b){
	int soma_num = a + b;
	return soma_num;
}


int main(){
	printf("Soma dos numeros: %d\n", soma(3,4));
	printf("Subtracao dos numeros: %d\n", subtracao(5,5));
	return 0;
}
