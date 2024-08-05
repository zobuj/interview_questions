#include <stdio.h>
#include <assert.h>

int main(){
    int n = 10; // 1010
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }

    assert(count == 2);

    printf("Number of set bits: %d\n", count);

    return 0;
}