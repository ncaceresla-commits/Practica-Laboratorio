
/**
 * Given a non-negative int n, return the count of 8's.
 * However, if an 8 has another 8 immediately to its right,
 * that 8 counts double.
 *
 * count8(8) → 1
 * count8(818) → 2
 * count8(8818) → 4
 */
#include <stdio.h>

int count8(int n) {
 	if ( n == 0 ){
		return 0;
	}
	if ( n % 10 == 8 ){
		if (( n / 10 ) % 10 == 8 ){
			return 2 + count8(n/10);
		}
			return 1 + count8(n / 10);
		}

	return count8(n / 10 );
}

int main(){
	int digito = count8(8818);
	printf("%d", digito);
}
