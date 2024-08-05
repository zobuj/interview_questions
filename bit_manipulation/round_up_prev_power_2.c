#include <stdio.h>
#include <assert.h>

int main() {
    int n = 20;

    while(n & n-1){
        n = n & n - 1;
    }

    assert(n == 16);

    printf("The previous power of 2 is %d\n", n);


    return 0;
}

