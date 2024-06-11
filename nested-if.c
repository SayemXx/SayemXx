#include<stdio.h>
int main(){
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    if(number>=0){
        printf("The number is Positive ");
        if(number%2==0){
            printf("& Even");
        }else{
            printf("& Ord");
        }
    }else{
        printf("The NUmberr is Negtive ");
    }
return 0;
    
}