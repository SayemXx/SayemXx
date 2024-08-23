#include<stdio.h>
int main(){
    FILE *ODD;
    ODD=fopen("odd.txt","w");
    int n;
    printf("Enter a odd range : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==1){
            fprintf(ODD,"%d\t",i);
        }
    }
    fprintf(ODD,"\n");
    return 0;
}