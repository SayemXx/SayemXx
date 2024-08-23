#include <stdio.h>
int main(){
    FILE *fnm;
    fnm=fopen("nt.text","r");
    int b;
    for (int a=0;a<6;a++){
     fscanf(fnm,"%d",&b);
        // a=fgetc(fnm);
        printf("%d ",b);


    }
    // if(fnm==NULL){
    //     printf("The file doesn't exist\n");
    // }
    // else{
    //     printf("The file is exisit\n");
    // }
    
    // for (char a;a!=EOF;)
    // {
    // a=fgetc(fnm);
    // printf("%c",a);

    // } 
    // fprintf(fnm,"%c",'S');
    // int n[15];

    // fscanf(fnm,"%s",&n);
    // printf("\n\n%s",n);
    fclose(fnm);
    return 0;
}