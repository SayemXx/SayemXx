#include<stdio.h>
typedef struct sudent_data{
    char nm[30];
    int ag;
    int rl;
    float cg;

}sdf;
int main(){
    FILE *fnm;
   fnm=fopen("student.txt","w");
   int a;
    printf("Enter the Value that number of \nSudents Data you want to store : ");
    scanf("%d",&a);
    sdf cs[a];
    for(int i=0;i<a;i++){
        printf("\nEnter the %d.Student name : ",i+1);
        fflush(stdin);
        fgets(cs[i].nm,30,stdin);
        fprintf(fnm,"Student name : %s",cs[i].nm);
        printf("\nEnter the %d.Student age : ",i+1);
        scanf("%d",&cs[i].ag);
        fprintf(fnm,"Student age  : %d\n",cs[i].ag);
        printf("\nEnter the %d.Student roll : ",i+1);
        scanf("%d",&cs[i].rl);
        fprintf(fnm,"Student roll : %d\n",cs[i].rl);
        printf("\nEnter the %d.Student CGPA : ",i+1);
        scanf("%f.2",&cs[i].cg);
        fprintf(fnm,"Student CGPA : %f\n",cs[i].cg);
        fprintf(fnm,"\n");
    }
    printf("\n\n");
    for ( int b=0;b<a;b++){
        printf("\n%d. Student Name is : %s",b+1,cs[b].nm);
        printf("\n%d. Student Roll is : %d",b+1,cs[b].rl);
        printf("\n%d. Student age is : %d",b+1,cs[b].ag);
        printf("\n%d. Student CGPA is : %f",b+1,cs[b].cg);
        printf("\n");
    }
fclose(fnm);
return 0;
}