#include<stdio.h>
 int fact(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, fact(n));
    return 0;
}

 int fact(int n) {
    if (n!=0)
        return n*fact(n-1);
    else
        return 1;
}
