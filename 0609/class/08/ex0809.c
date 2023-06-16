#include <stdio.h>

int main(void) {
    printf("\\a: ABC\aDEF\n");
    printf("\\b: ABC\bDEF\n");
    printf("\\f: ABC\fDEF\n");
    printf("\\n: ABC\nDEF\n");
    printf("\\r: ABC\rDEF\n");
    printf("\\t: ABC\tDEF\n");
    printf("\\v: ABC\vDEF\n");
    printf("\\\\: ABC\\DEF\n");
    printf("\\?: ABC\?DEF\n");
    printf("\\': ABC\'DEF\n");
    printf("\\\": ABC\"DEF\n");
    printf("\\101: ABC\1010DEF\n"); 
    printf("\\x41: ABC\x41" "DEF\n"); 

    return 0;
}
