#include <stdio.h>

int strDist(const char* cadena, const char* sub){
	if( *cadena == '\0'){
		return 0;
	}
	if(*cadena == *sub){
		return 1 + strDist(cadena + 1, sub + 1);
	}

}
