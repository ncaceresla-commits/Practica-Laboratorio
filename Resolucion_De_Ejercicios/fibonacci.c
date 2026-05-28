/**
 * The fibonacci sequence: 
 *   fib(0)=0, fib(1)=1, fib(n)=fib(n-1)+fib(n-2)
 *
 * fibonacci(0) → 0
 * fibonacci(1) → 1
 * fibonacci(2) → 1
 *
 */
#include <stdio.h>
int fibonacci(int n) {
	if ( n == 0 ){
		return 0;
	}
	if ( n == 1 ){
		return 1;

	}
        else{
        	return fibonacci(n - 1) + fibonacci(n - 2 );
	}
}
int main(){
	int f = fibonacci(2);
	printf("%d", f);
}
