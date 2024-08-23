#include<stdio.h>
void sp(int a, int b){
   int t;
   t=a;
   a=b;
   b=t;
   printf("\nThe swap value is ---\na = %d\nb = %d",a,b); 
}
int main (){
    int x,y;
    printf("Enter the 1st value :");
    scanf("%d",&x);
    printf("Enter the 2nd value :");
    scanf("%d",&y);
   
    printf("\n\nThe real value is --\nx = %d\ny = %d",x,y);
    sp(x,y);
    return 0;
}