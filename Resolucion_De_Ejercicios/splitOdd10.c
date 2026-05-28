#include <stdio.h>
#include <stdbool.h>

bool splitOdd10(int* a, int tamaño, int mult10, int impar){
	if(tamaño == 0)
		return ( mult10 % 10 == 0 && impar % 2 != 0); 
	splitOdd10( a + 1 , tamaño - 1, mult10 + *a , impar) || splitOdd10( a + 1, tamaño - 1, mult10, impar + *a);
}

int main(){
	int m10 = 0;
	int impar = 0;
	int a[] = {5,5,5};
	int b[] = {5,5,6};
	int c[] = {5,5,6,1};
	printf("%d", splitOdd10(a, 3 , m10 , impar));
	printf("%d", splitOdd10(b, 3 , m10 , impar));
	printf("%d", splitOdd10(c, 4 , m10 , impar));
}
