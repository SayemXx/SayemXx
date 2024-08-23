#include<stdio.h>
int main (){
    int a,b;
    printf("\nEnter the 1st value : ");
    scanf("%d",&a);
    printf("\nEnter the 2nd value : ");
    scanf("%d",&b);
    printf("\nBefor Swaping those value are-----\nThe 1st value is : %d\nThe 2nd value is : %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nAfter Swaping those value are-----\nThe 1st value is : %d\nThe 2nd value is : %d",a,b);
    return 0;

}