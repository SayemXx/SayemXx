#include<stdio.h>
int main(){
    int a;
    printf("\nEnter the 1st value :");
    scanf("%d",&a);
    int b;
    printf("\nEnter the 2nd value :");
    scanf("%d",&b);
    printf("\n\nThe real value is--\na = %d\nb = %d",a,b);
    int t;
     t=a;
     a=b;
     b=t;
    printf("\nThe Swap value is --\na = %d\nb = %d",a,b);
    return 0;
}