/**
 * We have bunnies, each with 2 floppy ears. 
 * Compute total ears recursively (no loops or multiplication).
 *
 * bunnyEars(0) → 0
 * bunnyEars(1) → 2
 * bunnyEars(2) → 4
 */
#include <stdio.h>

int bunnyEars(int bunnies) {
  if(bunnies  == 0 ){
     return 0;
  }
  int total;
  total = bunnyEars(bunnies - 1) + 2;
  return total;
}
int main(){
	int orejas = bunnyEars(3);
	printf("%d", orejas);
}
