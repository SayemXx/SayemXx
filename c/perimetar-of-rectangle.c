#include<stdio.h>
int main() {
    int length, width;
    printf("Enter the length :");
    scanf("%d",&length);
    printf("Enter the wigth :");
    scanf("%d",&width);
    printf("The perimeter of this rectangle : %d",2*(length+width));
    return 0;
}