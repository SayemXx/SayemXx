#include<stdio.h>
int main(){
    int mark;
    printf("Enter the Mark :");
    scanf("%d",&mark);
    if(100>=mark&&mark>=80){
        printf("GPA-5");
    }
    else if(mark<80&&mark>=70) {
        printf("GPA-4");
    }

    else if(mark<70&&mark>=60) {
        printf("GPA-3");
    }

    else if(mark<60&&mark>=50) {
        printf("GPA-3");
    }

    else if(mark<50&&mark>=40) {
        printf("GPA-2");
    }
    else if(mark<40&&mark>=30){
        printf("GPA-1");
    }
    else if(0>mark||mark>100){
    printf("Invalid Mark\n");
   }
    else{
        printf("GPA-0 OR FAIL");
    }
    return 0;
}