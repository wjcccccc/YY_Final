#include <iostream>
#include <vector>
#include <stdio.h>

int main() {
    int* ptr;
    int arr[] = {3, 6, 9, 12, 15, 18, 21, 24, 27};
    ptr = arr;
    printf("(a): %p\n", ptr);
    printf("(b): %d\n", ptr[3]);
    printf("(c): %p\n", ptr+3);
    printf("(d): invalid\n");
    printf("(e): %d\n", 3**ptr);
    printf("(f): %d\n\n", *(3+ptr));

    printf("(g): %d\n", *ptr+3);
    printf("(h): %d\n", *(ptr+3));
    printf("(i): invalid\n");
    printf("(j): invalid\n");
    printf("(k): %d\n", 3[ptr]);
    printf("(I): %p\n\n", &(ptr[3]));

    printf("(m): invalid:\n");
    printf("(n): %d\n", (ptr+3)[3]);
    printf("(o): %d\n", *ptr);
    printf("(p): invalid\n");
    printf("(q): %p\n", &ptr);
    printf("(r): invalid");
    return 0;

}

   