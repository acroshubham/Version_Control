#include<stdio.h>

int main(){
    printf("\nEner two numbers:");
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int c=a-b;
    printf("Sum of a and b is: %d", c);
    return 0;
}