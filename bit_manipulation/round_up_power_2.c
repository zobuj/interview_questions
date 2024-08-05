#include <stdio.h>
#include <assert.h>

int main() {

    int n = 20; // 10100
    
    n = n - 1; // 10011

    while(n & n-1){
        n = n & n-1;
    }

    assert((n<<1)==32);

    printf("The next power of 2 is %d\n", n << 1);

    return 0;
}