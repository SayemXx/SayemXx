#include<stdio.h>

int main(){
    int n;
    printf("Enter the value for the fibonaci number :");
    scanf("%d",&n);
     printf("Stored fibonaci numbers is --");
     int fib[n];
     fib[0]=0;
     fib[1]=1;
     printf("\n%d\t%d\t",fib[0],fib[1]);
    for (int a=2;a<n;a++){
        fib[a]=fib[a-2]+fib[a-1];
        printf("%d\t",fib[a]);
    }
   
     
    return 0;
}