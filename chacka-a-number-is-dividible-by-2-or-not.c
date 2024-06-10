#include<stdio.h>
int main(){
    int x;
    printf("Enter the Number :");
    scanf("%d",&x);
    printf("Reasult : %d",x%2==0);
    /*If the reasult is 1, the number is divisible by 2.
    And if the reasult is 0, then the number is not divisible by 2.*/
    return 0;
}