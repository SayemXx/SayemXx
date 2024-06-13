#include<stdio.h>
int main(){
    int s;
    printf("Enter the start Value :");
    scanf("%d",&s);
     int n;
    printf("Enter the end Value :");
    scanf("%d",&n);
    int sum=0;
    printf("1\n");
    for(int a=s;a<=n;a++){
        sum=sum+a;
        printf("+\n%d\n",a+1);
    }
    printf("For %d Natural Numbers  Sum is : %d",n,sum);
    return 0;
}