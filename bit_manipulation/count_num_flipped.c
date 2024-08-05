#include <stdio.h>
#include <assert.h>

int main(){
    int a = 10; // 01010
    int b = 20; // 10100

    int n = a ^ b; // 11110

    int count = 0;

    while(n){
        n = n & (n-1);
        count++;
    }

    assert(count == 4);

    printf("Number of bits needed to be flipped: %d\n", count);

    return 0;
}