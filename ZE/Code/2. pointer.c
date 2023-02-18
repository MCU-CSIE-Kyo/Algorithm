#include <stdio.h>

int main() {
    int a;
    int *p1;
    int **p2;
    a = 10;
    p1 = &a;
    p2 = &p1;

    printf("a : %d\n", a);
    printf("&a : %x\n", &a);
    printf("p1 : %x\n", p1);
    printf("&p1 : %x\n", &p1);
    printf("p2 : %x\n", p2);
    printf("*p2 : %x\n", *p2);
    printf("**p2 : %d\n", **p2);

    return 0;
}
