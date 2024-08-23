#include<stdio.h>
int countv(char w[]){
    char v[10]="aeiouAEIOU";
    int count=0;
    for(int a=0;w[a]!='\0';a++){
        // if(w[a]=='a'||w[a]=='e'||w[a]=='i'||w[a]=='o'||w[a]=='u'||w[a]=='A'||w[a]=='E'||w[a]=='I'||w[a]=='O'||w[a]=='U'){
        //     count++;}
        for(int b=0;b<=10;b++){
            if(w[a]==v[b]){
                count++;
            }
            // else{
            //     continue;
            // }
        }
    }
    printf("%d",count-1);

}
int main (){
    printf("\nThis is a function for occurrence vowle in a string. Let's begine.\n\n");
    char w[40];
    printf("\nEnter a word :");
    fgets(w,40,stdin);
    countv(w);
    return 0;

}
    