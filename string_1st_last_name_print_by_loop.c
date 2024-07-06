#include<stdio.h>
int p(char *ptr){
    for(int a=0;*(ptr+a)!='\0';a++){
    printf("%c",*(ptr+a));
    }
}
   int main(){
    char fn[]="Sayem ";
    char mn[]="Islam ";
    char ln[]="Leon.";
    p(fn);
    p(mn);

    p(ln);
    return 0;
   }