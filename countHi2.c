#include <stdio.h>

int countHi2(const char* t){
        if ( *t == '\0')
                return 0;
        if (( *t == 'h' && *(t + 1) == 'i'&& *(t - 2) != 'x')
                return 1 + countHi2( t + 1);

        return countHi2( t + 1);
}
int main(){
        int i = countHi2("xihxxhi");
        printf("%d", i );

}
~
