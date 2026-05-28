/**
 * Triangle numbers: Complete this without any loops! Use recursion.
 * We have triangle made of blocks. The topmost row has 1 block,
 * the next row down has 2 blocks, the next row has 3 blocks,
 * and so on until the last row has n blocks.
 * Write a function to calculate the number of blocks in a triangle of size n.
 *
 * triangle(0) → 0
 * triangle(1) → 1
 * triangle(2) → 3
 */
#include <stdio.h>
int triangle(int rows) {
	if ( rows == 0 ){
		return 0;
	}
	return triangle(rows - 1 ) + rows;
}
int main(){
	int t = triangle(4);
	printf("%d", t);
	
}
