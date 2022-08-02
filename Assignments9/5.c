#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number between 1 to 3 ");
    scanf("%d",&x);
    switch(x)
 {
    case 1:
    printf("Good");
    break;
    case 2:
    printf("Better");
    break;
    case 3:
    printf("best");
    break;
    case 4:
    printf("invalid");
    break;
 }
return 0;
}