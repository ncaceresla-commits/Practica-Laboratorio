#include <stdio.h>

void invertir(char* str, int tamaño){
	if(tamaño == 0 )
		return;
	if(tamaño < 2)
		return;
	int temp = str[0];
	str[0] = str[tamaño - 1];
	str[tamaño - 1] = temp;
	invertir(str + 1 , tamaño - 2);
}
int main()
{
    char palabra[] = "hola";

    invertir(palabra, 4);

    printf("%s\n", palabra);

    return 0;
}
