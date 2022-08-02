/*Write a program which takes the month number as an input and display number of days in that month. */
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number between 1 to 12 ");
    scanf("%d",&x);
    switch (x)
 {
    case 1:
    printf("Janurary has 31 days ");
    break;
    case 2:
    printf("Feburary has 28 days ");
    break;
    case 3:
    printf("March has 31 days ");
    break;
    case 4:
    printf("April has 30 days ");
    break;
    case 5:
    printf("May has 31 days ");
    break;
    case 6:
    printf("june has 30 days ");
    break;
    case 7:
    printf("july has 31 days ");
    break;
    case 8:
    printf("August has 31 days ");
    break;
    case 9:
    printf("September has 30 days ");
    break;
    case 10:
    printf("October has 31 days ");
    break;
    case 11:
    printf("November has 30 days ");
    break;
    case 12:
    printf("december has 31 days ");
    break;
    default:
    printf("Invalid value entered ");
 }
    return 0;
}
