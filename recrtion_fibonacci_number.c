#include<stdio.h>
int fib(int n){
     if(n==1||n==0){
        if(n==0){
            return 0;}
        if(n==1) {
         return 1;}
    }
   
   
    return fib(n-2)+fib(n-1);
}
int main(){
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
    printf("The %d tarm of Fibacci is : %d ",n,fib(n));
    return 0;
}