#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
return sum(n-1)+n;
}
int main(){
    int n;
    printf("Enter hte value :");
    scanf("%d",&n);
    printf("Sum is : %d",sum(n));
    return 0;
}