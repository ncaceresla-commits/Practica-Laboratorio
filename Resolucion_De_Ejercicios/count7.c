
/**
 * Given a non-negative int n, return the count of occurrences of digit 7.
 * For example, 717 yields 2.
 *
 * count7(7) → 1
 * count7(717) → 2
 * count7(123) → 0
 */
#include <stdio.h>

int count7(int n) {
	if ( n == 0){
		return 0;
	}
	if ( n % 10 == 7 ){
		return 1 + count7( n / 10 );
	}
	return count7( n / 10 );
      	return 0;
}
int main(){
	int digitos = count7(27778);
	printf("%d", digitos);
}
