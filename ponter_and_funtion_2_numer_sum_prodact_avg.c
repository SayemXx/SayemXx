#include<stdio.h>
int work(int a,int b,int *sum, int *prodact){
    *sum =a+b;
    *prodact =a*b;
    return ((a+b)/2);
}
int main(){
    int a,b,sum,prodact;
    printf("\nEnter the fist value :");
    scanf("%d",&a);
    printf("\nEnter the second value :");
    scanf("%d",&b);
    printf("\nSum = %d\nProtuct = %d\nAvg = %d",sum,prodact,work(a,b,&sum,&prodact));
    return 0;

}