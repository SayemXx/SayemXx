#include<stdio.h>
#include<string.h>
typedef struct address{
char pn[30];//pn is people name.
int hn;//hn is house number.
char bk[5];//bk is blockk number.
char cn[15];//cn is city name.
char sn[15];//sn is state name.
}ads;
int main(){
    int n;
    printf("\nWhat amount of people address you want to store ?\nEnter a value : ");
    scanf("%d",&n);
    ads ad[n];
    for(int a=0;a<n;a++){
        printf("\n\nEnter the %d. People Name : ",a+1);   
        // fgets(ad[a].pn,30,stdin);
        scanf("%s",ad[a].pn);
        printf("\nEnter the %d. People House No : ",a+1);
        scanf("%d",&ad[a].hn);
        printf("\nEnter the %d. House Block Numer : ",a+1);
        scanf("%s",&ad[a].bk);
        printf("\nEnter the %d. People City Name : ",a+1);
        scanf("%s",&ad[a].cn);
        printf("\nEnter the %d. People State Name : ",a+1);
        scanf("%s",&ad[a].sn);

        }
        printf("\n");
        for(int b=0;b<n;b++){
            printf("\n\n%d. People Name is : ",b+1);
            puts(ad[b].pn);
            printf("%d. People House No is : %d",b+1,ad[b].hn);
            printf("\n%d. House Block Number is : %s",b+1,ad[b].bk);
            printf("\n%d. People City Name is : %s",b+1,ad[b].cn);
            printf("\n%d. People State Name is : %s",b+1,ad[b].sn);
        }
        return 0;
}