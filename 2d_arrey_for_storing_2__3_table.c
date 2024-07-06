#include <stdio.h>
int main(){
    int n,m,c;
    printf("Enter the value the for table of 2 : ");
    scanf("%d",&n);
    printf("\nEnter the value of the table of 3 :");
    scanf("%d",&m);
    if(m>n){
      c=m;
    }
    else {
        c=n; 
    }
    int sto[2][c];
    printf("\nTable of 2 is---\n");
for(int a=1;a<=n;a++){
    sto[0][(a-1)]=2*a;
    printf("2 * %d = %d\n",a,sto[0][(a-1)]);
}
printf("\nTable of is----\n");
for(int b=1;b<=m;b++){
    sto[1][(b-1)]=3*b;
      printf("2 * %d = %d\n",b,sto[1][b-1]);
}
return 0;
}