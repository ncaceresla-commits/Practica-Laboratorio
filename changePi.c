#include <stdio.h>

void changePi(const char* str){
	if(*str == '\0'){
		return;
	}
	if( *str == 'p' && *(str +1) == 'i'){
		printf("3.14");
		changePi(str + 2);
	}else{
	printf("%c", *str);
	changePi(str + 1);
	}

}
int main() {

    changePi("xpix");
    printf("\n");

    changePi("pipi");
    printf("\n");

    changePi("pip");
    printf("\n");

    return 0;
}
