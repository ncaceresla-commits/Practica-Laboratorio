#include <stdio.h>

int countPairs(const char* str){
	if(*str == '\0' || *(str + 1) == '\0' || *(str + 2) == '\0'){
		return 0 ;
	}
	if(*str == *(str + 2)){
		return 1 + countPairs(str + 1);
	}
	return countPairs(str + 1);

}

int main(){
	int a = countPairs("axa");
	int b = countPairs("axax");
	int c = countPairs("axbx");
	printf("%d %d %d \n", a , b , c);
	return 0;

}
