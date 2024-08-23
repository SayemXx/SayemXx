#include<stdio.h>
int main(){
    char charecter;
    printf("Enter a Charecter :");
    scanf("%c",&charecter);
    if(charecter>='a'&&charecter<='z'){
        printf("Lower Case");
    }
    else if(charecter>='A'&&charecter<='Z'){
        printf("Upper Case");
    }
    else{
        printf("This charecter is not a English Letter");
    }
    return 0;
}