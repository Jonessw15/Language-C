#include <stdio.h>

int main() {

    int x = 10, *xPtr = &x, **xPtr_Ptr = &xPtr;
    float y = 5.9, *yPtr = &y, **yPtr_Ptr = &yPtr;
    
// a)
    printf("%d\n", x);
// b)
    printf("%d\n", *xPtr);
// c)
    printf("%d\n", **xPtr_Ptr);
// d)
    printf("%.1f\n", y);
// e)
    printf("%.1f\n", *yPtr);
// f)
    printf("%.1f\n", **yPtr_Ptr);
// g)
    xPtr++;
    printf("%p\n", xPtr);
// h)
    printf("%.1f\n", *yPtr++);
// i)
    printf("%p\n", &yPtr);
// j)
    printf("%p\n", &x);
// k)
    printf("%p\n", yPtr_Ptr--);


    return 0; 

}