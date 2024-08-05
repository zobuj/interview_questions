#include <stdio.h>
#include <assert.h>


#define P2(n) n, n^1, n^1, n
#define P4(n) P2(n), P2(n^1), P2(n^1), P2(n) 
#define P6(n) P4(n), P4(n^1), P4(n^1), P4(n) 
#define FIND_PARITY P6(0), P6(1), P6(1), P6(0)

unsigned int lookup[256] = {FIND_PARITY};

int main() {
    

    int n = 126; // 1111110

    n = (n & 0x0000FFFF) ^ (n >> 16);
    n = (n & 0x000000FF) ^ (n >> 8);
    n = (n & 0x0000000F) ^ (n >> 4);
    n = (n & 0x00000003) ^ (n >> 2);
    n = (n & 0x00000001) ^ (n >> 1);

    assert((n&1) == 0);

    if(n&1) printf("The parity is odd\n");
    else printf("The parity is even\n");


    int x = 18;
    x ^= x >> 16;
    x ^= x >> 8;
    assert(lookup[x & 0xff] == (n&1));



    return 0;
}

