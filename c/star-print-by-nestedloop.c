#include<stdio.h>
int main(){
    char ch;
    printf("Enter the Char :");
    scanf("%c",&ch);
    int r;
    printf("\nRow for Star :");
    scanf("%d",&r);
    int c;
    printf("\nCollam for Star :");
    scanf("%d",&c);
    printf("\n\nThis is your maked stacture ----");
    for(int i=1;i<=r;i++){
    for(int i=1;i<=c;i++){
        printf("%c",ch);
    }
    printf("\n");
    }
    return 0;
}