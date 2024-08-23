#include<stdio.h>
int fe(int n){
    if(n==1||n==0){
        if(n==0){
            n=0;
        }
        if(n==1){
            n=1;
        }
    }
    int f=fe(n-2)+fe(n-1);
    return f;
}
int sto(int arr[] ,int n){
    int b;
    for( b=0;b<n;b++){
        scanf("%d",arr[b]);
    }
}
int main(){
    int n;
    printf("Enter the value for the fibonaci number :");
    scanf("%d",&n);
    int arr[n];
   // int *ptr=arr;
   
     printf("Stored fibonaci numbers is --");
      sto(arr,n);
    for(int a=0;a<n;a++){
       printf("%d\t",arr[a]);
    }
    return 0;
}