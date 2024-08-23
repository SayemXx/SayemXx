#include<stdio.h>
int main(){
    char num[100];
    int count=0;
    printf("\nEhter your name :");
    fgets(num,100,stdin);
    
    for(int a=0;num[a]!='\0';a++){
        count++;
    }
    count--;
    printf("\nYour name leanth is : %d",count);
    return 0;
}