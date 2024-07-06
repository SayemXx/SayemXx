#include<stdio.h>
#include<string.h>
void solt(char pus[100]){
    char np[100];
 char sol[]="123";
 strcpy(np,pus);
 strcat(np,sol);
//   printf("\n");
 puts(np);
}
int main (){
    char pas[32];
    printf("\nEnter your password : ");
    //  fgets(pas,32,stdin);
    scanf("%s",pas);
   solt(pas);
   return 0;
}