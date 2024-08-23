#include<stdio.h>
int main(){
    char w[]="i'm a boy. I like to write code in c. But I want to be a master in every programing language. So, I do work hard.";
    char ch;
    int count=0;
    printf("\nEnter a letter for cheack :");
    scanf("%c",&ch);
    for(int a=0;w[a]!='\0';a++){
        if(w[a]==ch){
            count++;
        }
    
    }
    printf("Result is : ");
    if(count>0){
        printf("Yes %d char is mached.",count);
    }
    else{
        printf("No mached.");
    }
}