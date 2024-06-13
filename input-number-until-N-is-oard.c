#include<stdio.h>
int main(){
    printf("You can enter even number only.\nIf you can enter 10 even number you are win.\nelae you enter oard number, You are out.\n\n\n");
    int n;
    do{
        printf("Enter :");
        scanf("%d",&n);
        if(n<=0){
            printf("Invalid Input\n");
            break;
            }
        if(n%2==0);
        else{
             printf("\nYou are out.\nBecouse %d is a oard number.",n);
              break;
        }
    }while(1);
     return 0;
}