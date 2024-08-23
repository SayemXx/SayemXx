#include<stdio.h>
int re(int *ptr, int n){
    for(int a=1;a<=(n/2);a++){
        int x;
    x=*(ptr+(n-a));
    *(ptr+(n-a)) = *(ptr+(a-1));
    *(ptr+(a-1))=x;
    }
    printf("\nThe revage number is----");
    for(int b=0;b<n;b++){
        printf("\n\t%dst number is :%d",b+1,*(ptr+b));
    }

}
int main(){
    int n;
    printf("Enter the a value the count of numer you want to be store :");
    scanf("%d",&n);
    int arr[n];
    for(int a=0;a<n;a++){
        printf("Enter tne %dst number :",a+1);
        scanf("%d",&arr[a]);
    }
    re(&arr[0],n);
    return 0;
}