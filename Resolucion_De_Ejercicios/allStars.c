#include <stdio.h>

void allStar(char* a, char* b){
	if(*a == '\0')
		return;
	*b = *a;
	*(b+1) = '*';
	allStar(++a, b+2);
}

int main(void){
	char hola[] = "hello";
	char hola1[100];
	allStar(hola, hola1);
	for(int i = 0; i<9;i++){
		printf("%c ", hola1[i]);
	}
}
