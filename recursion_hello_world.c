#include<stdio.h>
void hewo(int n){
    if (n>0){
    printf("Hello World.\n");
    hewo(n-1);}
    else {
        printf("\nEnd.");
    }
}

int main(){
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
hewo(n);
return 0;
}