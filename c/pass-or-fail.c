#include<stdio.h>
int main(){
    int Mark;
    printf("Enter your Mark :");
    scanf("%d",&Mark);
   if(100>=Mark>=30){
    printf("Pass");
   }
   else if(0>Mark||Mark>100){
    printf("Invalid Mark\n");
   }
   else{
    printf("Fall");
   }
    return 0;
}