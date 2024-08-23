#include<stdio.h>
int main(){
    int n,c;
    printf("Enter the nmber : ");
    scanf("%d",&n);
    printf("\nEnter the table counter : ");
    scanf("%d",&c);
    printf("\n\n\nThe %d table is -\n",n);
    for(int a=1;a<=c;a++){
        printf("\n%d * %d = %d\n",n,a,n*a);
    }
    return 0;
}
