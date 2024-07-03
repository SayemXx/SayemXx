#include<stdio.h>
void fun(int mark[], int n){
    for (int a=0;a<n;a++){
        printf("\n%dst Number is : %d",a+1,mark[a]);
    }
}
int main(){
    int n;
   
    printf("Enter the value that count of mark you want to be store :");
    scanf("%d",&n);
    int mark[n];
    for(int a=0;a<n;a++){
        printf("Enter the %dst mark :",a+1);
        scanf("%d",&mark[a]);
    }
    int *pir=&mark[0];
    fun(mark[0],n);
return 0;
}