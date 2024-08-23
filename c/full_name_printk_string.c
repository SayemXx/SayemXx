#include<stdio.h>
int main(){
    char fn[10];
    printf("\nEnter your 1st Name :");
    scanf("%s",fn);
    char mn[10];
    printf("\nEnter your Mid Name :");
    scanf("%s",mn);
    char ln[10];
    printf("\nEnter your Last Name :");
    scanf("%s",ln);
    printf("\nYour full Name is ----\n%s %s %s\n",fn,mn,ln);
    return 0;

}