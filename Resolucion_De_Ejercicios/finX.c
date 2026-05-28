#include <stdio.h>

void moverX(char a[]) {

    if(a[0] == '\0')
        return;

    if(a[0] != 'x') {
        printf("%c", a[0]);
    }

    moverX(a + 1);

    if(a[0] == 'x') {
        printf("x");
    }
}

int main() {

    char a[] = "xxjdxpix";

    moverX(a);

    return 0;
}
