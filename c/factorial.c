#include<stdio.h>
int main(){
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
    printf("The factorial of %d is :\n\n",n);
    int fac=1;
    for(int a=1;a<=n;a++){
        fac=fac*a;
        printf("%d * ",a);
    }
    printf("= %d",fac);
    return 0;
}