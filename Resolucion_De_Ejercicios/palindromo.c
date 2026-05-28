#include <stdio.h>
#include <stdbool.h>

bool palindromo(const char* str, int tamaño){
	if(tamaño == 0)
		return true;
	if(tamaño == 1)
		return true;
	if(str[0] == str[tamaño - 1]){
		return palindromo(str + 1 , tamaño - 2);
	}
	return false;
	
}
int main()
{
    printf("%d\n", palindromo("radar", 5));
    printf("%d\n", palindromo("hola", 4));
}
