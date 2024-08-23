#include<stdio.h>
void indian(){
    printf("\nNamaste Ji\n\n");
}
void france(){
    printf("\nBanjour\n\n");
}

int main(){
     printf("\n\n\nEnter 'i' for indian and 'f' for france.\n");
    for(int a=1;;a++){
    char n;
    printf("enter :");
    scanf("%c",&n);
    if(n=='i'){
        indian();
        break;
    }
    else if(n=='f'){
        france();
        break;
    }
    else{
        printf("Invalid Input.\nPlease Enter agin.\n\n");
        continue;

    }
   } 
    return 1;
}

