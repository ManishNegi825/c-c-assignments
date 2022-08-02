/*Write a program which takes the month number as an input and display number of days in that month. */
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number between 1 to 7 ");
    scanf("%d",&x);
    switch (x)
 {
    case 1:
    printf("Good moring today is monday");
    break;
    case 2:
    printf("Have a great day today is tuesday");
    break;
    case 3:
    printf("God bless you its wednesday");
    break;
    case 4:
    printf("learn something new today is thursday");
    break;
    case 5:
    printf("Sharp your skills its friday");
    break;
    case 6:
    printf("Greeting over its saturday");
    break;
    case 7:
    printf("Party times,its sunday");
    break;
    default:
    printf("Invalid value entered ");
 }
    return 0;
}