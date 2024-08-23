#include <stdio.h>
#include <string.h>

typedef struct vector_sum{
    int x;
    int y;
}vs;

int main (){
    int n;
    printf("Which amunt of Vector you want to addad?\nEnter a Value : ");
    scanf("%d",&n);
    vs vt[n];
    for(int a=0;a<n;a++){
        printf("\n\n\nEnter the %d. Vector value of X = ",a+1);
        scanf("%d",&vt[a].x);
        printf("Enter the %d. Vector value of Y = ",a+1);
        scanf("%d",&vt[a].y);
        printf("\nYour %d. Vector is : %di + %dj",a+1,vt[a].x,vt[a].y);

    }
    int storex=0;
    int storey=0;
    for(int a=0;a<n;a++){
        storex+=vt[a].x;
        storey+=vt[a].y;
    }
    printf("\n\nResult of %d. Vector aditon is :  %di + %dj  ",n,storex,storey);
    return 0;
}