#include <stdio.h>


int* func(){
    int a = 5;
    int *pa = &a;
    return pa;
}

int main(){
    int x = 10;
    int *ptr;
    ptr = func();
    printf("%d", *ptr+x);

    return 0;
}
