#include <stdio.h>

typedef unsigned char uchar;

uchar pbcd(int n);

int main(void)
{
    printf("test");
    int n = 12345;
    uchar ans = pbcd(n);
    printf("Expected: 69\n");
    printf("The two least significant bits of %d is %u\n", n, ans);
    
}

uchar pbcd (int n) 
{
    return (n % 100 / 10 << 4) + (n % 10);
} 

