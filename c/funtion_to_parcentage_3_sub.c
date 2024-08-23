#include<stdio.h>
int per(int s, int m, int k){
    return ((s+m+k)/3);
}
int main(){
    int s;
    for(int a=1;;a++){
    printf("\nEnter the mark of scince :");
    scanf("%d",&s);
    if(s>=0&&s<=100){
        break ;
    }
    else {
         printf("Invalid Input.");
    }
    }
    int m;
    for(int a=1;;a++){
    printf("\nEnter the mark of math :");
    scanf("%d",&m);
    if (m>=0&&m<=100){
      
        break;
    }
    else {
         printf("Invalid Input.");
    }
    }
    int k;
    for(int a;;a++){
    printf("\nEnter the mark of sancrikt :");
    scanf("%d",&k);
    if (k>=0&&k<=100){
        break;
    }
    else {
         printf("Invalid Input.");
    }
    }
    char c='%';
    printf("\n\nThe parsentage of 3 subject is : %d ", per(s, m, k));
    printf("%c",c);
    return 0;

}