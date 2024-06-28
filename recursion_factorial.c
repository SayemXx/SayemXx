#include<stdio.h>
int fac(int n){
    if (n==1){
        return 1;
    }
    return fac(n-1)*n;
}
int main(){
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
    printf("The %d number of factorial is : %d ",n,fac(n));
    return 0;
}