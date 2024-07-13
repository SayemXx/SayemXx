#include<stdio.h>
void slice(char sub[]){
    int n,m;
    printf("\nEnter the 1st index : ");
    scanf("%d",&n);
    printf("\nEner the 2nd index : ");
    scanf("%d",&m);
    if(n>m){
        int r=m;
        m=n;
        n=r;
    }
    printf("\nYour slice word is : ");
    for(int a=n;a<=m;a++){
        printf("%c",sub[a]);
    }


}
int main(){
    printf("\nThe is a slice a string fumtion program.\n\n");
    char sub[20];
    printf("\nEnter a word : ");
    fgets(sub,20,stdin);
    slice(sub);
    return 0;
}