#include<stdio.h>
float con( float n){
 
 
    return ((n*9/5)+32);
}
int main(){
    float n;
    printf("Enter the tamp in Celsius :");
    scanf("%f",&n);
    printf("\nThe tamp in Fahrenheit is : %f\n",con(n));
    return 0;
    }