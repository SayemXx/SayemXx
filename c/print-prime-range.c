#include<stdio.h>
int isprime(int n){
for(int i=2;i<n;i++){
    if(n%i==0){
        return 0;
    }
}
return 1;
}
int main(){
    int s,e;
    printf("Enter the start range :");
    scanf("%d",&s);
    printf("Enter the end range :");
    scanf("%d",&e);
    printf("The is the %d to %d range prime number ---\n",s,e);
    if(s=1){
        s=2;
    }
    for(int i=s;i<=e;i++){
        if(isprime(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}