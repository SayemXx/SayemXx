#include<stdio.h>
typedef struct complex{
    int rel;
    char img[5];
}cx;
int main(){
    int n;
    printf("\nEnter the a value that number of complex numner you want to store : ");
    scanf ("%d",&n);
    cx cm[n];
    for(int a=0;a<n;a++){
        printf("\nEnter the %d. Real Number : ",a+1);
        scanf("%d",&cm[a].rel);
        printf("\nEnter the %d. Imagenary Number : ",a+1);
        // scanf("%s",cm[a].img);
        fflush(stdin);
        fgets(cm[a].img,5,stdin);
       
    }
    for(int a=0;a<n;a++){
        printf("\n\nThe %d. Complex Number is : %d%s",a+1,cm[a].rel,cm[a].img);
    }
    return 0;
}