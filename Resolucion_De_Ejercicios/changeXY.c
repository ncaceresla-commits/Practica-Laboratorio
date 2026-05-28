#include <stdio.h>

void changeX(char* str){
	if(*str == '\0')
		return ;
	if(*str == 'x'){
		*str = 'y';
	}
	changeX(str + 1);
}

int main(){
	char palabra[] = "codex";
	changeX(palabra);
	printf("%s \n", palabra);
}
