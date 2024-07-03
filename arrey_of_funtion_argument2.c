#include<stdio.h>
void fun(int *ptr, int n){
    for (int a=0;a<n;a++){
        printf("\n%dst Number is : %d",a+1,*(ptr+a));
    }
}
int main(){
    int n;
    
    printf("Enter the value that count of mark you want to be store :");
    scanf("%d",&n);
    int mark[n];
    int *ptr=&mark[0];
    for(int a=0;a<n;a++){
        printf("Enter the %dst mark :",a+1);
        scanf("%d",ptr+a);
    }
    fun(&mark[0],n);
return 0;
}