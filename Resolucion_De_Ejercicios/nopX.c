#include <stdio.h>

void nopX(const char* origen, char* destino){
	if ( *origen  == '\0'){
		*destino = '\0';
		return ;
	}
	if( *origen != 'x'){
		*destino = *origen;
		nopX(origen + 1, destino + 1 );
	}else{
		 nopX(origen + 1, destino );
	}
}

int main(){
	char resultado[100];
	printf("Hola mundo");
	nopX("xxxbasurxa", resultado);
	printf("%s", resultado);
	return 0;
	
}
