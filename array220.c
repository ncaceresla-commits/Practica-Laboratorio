#include <stdio.h>
#include <stdbool.h>

bool array220(int *a, int tamaño){
	if ( tamaño < 2 )
		return false;
	if ( *(a + 1) == (*a) * 10)
		return true;
	return array220( a + 1, tamaño - 1);
}
int main (){
	int a[] = {2,20,0,4};
	bool i = array220(a, 4);
	printf("%d", i);
}
