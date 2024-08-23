#include<stdio.h>
int main(){
    int n;
    printf("Enter the value :");
        scanf("%d",&n);
   for(int a=1;a<=n;a++){
     if(a%2==0){
            continue;}
    printf("%d, ",a);
   }
    return 0;
}