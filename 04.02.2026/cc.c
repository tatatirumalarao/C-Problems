#include <stdio.h>
int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
int main() {
    printf("%d\n", maximum(10, 20));   
    printf("%d\n", maximum(50, 30));   
    printf("%d\n", maximum(7, 7));     
    printf("%d\n", maximum(-5, 3));    
    printf("%d\n", maximum(100, 90));  
    return 0;
}