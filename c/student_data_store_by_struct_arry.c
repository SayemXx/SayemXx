#include<stdio.h>
#include<string.h>
struct student{
char name[30];
int roll;
float cgpa;
};

int main (){
    int n;
    printf("\nEnter the amunt that number of student data you want to store : ");
    scanf("%d",&n);
    struct student cse[n];
    for (int a=0;a<n;a++){
        char n1[30];
        printf("\nEnter the %d. Student Name : ",a+1);
        fflush(stdin);
        fgets(cse[a].name,30,stdin);
        
        printf("\nEnter the %d. Student Roll : ",a+1);
        scanf("%d",&cse[a].roll);
        printf("\nEnter the %d. Student CGPA : ",a+1);
        scanf("%f",&cse[a].cgpa);
        printf("\n");

    }
    printf("\n\n");
    for ( int b=0;b<n;b++){
        printf("\n%d. Student Name is : %s",b+1,cse[b].name);
        printf("\n%d. Student Roll is : %d",b+1,cse[b].roll);
        printf("\n%d. Student CGPA is : %f",b+1,cse[b].cgpa);
        printf("\n");
    }
    return 0;
}