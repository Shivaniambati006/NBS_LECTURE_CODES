#include <stdio.h>

void fun(int n) {
    if (n > 1) 
    fun(n-1);
    printf("%d\t",n);
}
void fun(int n) {
    if (n > 1) 
    fun(n-1);
    printf("%d\t",n);
}


int main() {
    
    printf("%d",fun(5));

}

