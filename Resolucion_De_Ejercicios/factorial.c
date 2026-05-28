/**
 * Given n of 1 or more, return the factorial of n, 
 * which is n * (n-1) * ... * 1. Compute recursively.
 *
 * factorial(1) → 1
 * factorial(2) → 2
 * factorial(3) → 6
 */
#include <stdio.h>

int factorial(int n) {
	if ( n == 1 ){
		return 1;
	}
	return n * factorial(n-1);
}
int main(){
	int f = factorial(4);
	printf("%d", f);
}
