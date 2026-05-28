#include <stdbool.h>
#include <stdio.h>

bool par(const char* str, int tamaño){
	if( tamaño == 0)
		return true;
	if( str[0] == '(' && str[tamaño - 1] == ')'){
		return par( str + 1, tamaño - 2);
	
	}
	
	return false;
}
int main(){
	bool r = par("(())", 4);
	bool f = par("((x))", 5);
	printf("%d", r);
	printf("%d", f);


}
