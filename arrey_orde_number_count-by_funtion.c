#include<stdio.h>
int odd(int *ptr,int n){
 int count=0;
 for(int a=0;a<n;a++){
     if(*(ptr+a)%2!=0){
    count++;
 }}
printf("\nThe odd number count is :%d",count);
}
int main(){
    int n;
    printf("Enter a value that count of number you want to store :");
    scanf("%d",&n);
    int num[n];
    for(int a=0;a<n;a++){
        printf("Enter the %dst number :",a+1);
        scanf("%d",&num[a]);
     
    }
     odd(num,n);
return 0;
}