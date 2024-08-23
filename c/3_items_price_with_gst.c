# include <stdio.h>
int main(){
    int price[3];
    printf("Enter the fist price :");
    scanf("%d",&price[0]);
    printf("Enter the second price :");
    scanf("%d",&price[1]);
    printf("Enter the third price :");
    scanf("%d",&price[2]);
    int sum=price[0]+price[1]+price[2];
    float sum1=sum*0.2;
    float sum2=sum+sum1;
    printf("Items price without GST : %d\nItems price with GST : %f",sum,sum2);
    return 0;

}