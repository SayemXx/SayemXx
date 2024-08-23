#include<stdio.h>
int main(){
    int mark[5];
    int *ptr=mark;
    for(int a=0;a<5;a++){
        printf("\n%dst mark :",a+1);
        scanf("%d",(ptr+a));
    }
    for(int a=0;a<5;a++){
        printf("\n%dst mark is :%d",a+1,*(ptr+a));
    }
    return 0;
}