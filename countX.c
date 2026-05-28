
/**
 * Given a string, compute recursively the number of lowercase 'x' chars in the string.
 *
 * countX("xxhixx") → 4
 * countX("xhixhix") → 2
 * countX("hi") → 0
 */
#include <stdio.h>

int countX(const char* str) {
	if( *str == '\0' ){
		return 0;
	}
	if ( *str == 'x'){
		return 1 + countX( str + 1 );
	}
	return countX( str + 1 );
}
int main(){
	int r = countX("xxxtentacion");
	printf("%d", r);

}
