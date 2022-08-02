#include<stdio.h>
int check(int);
int main()
{
int num;
printf("Enter number ");
scanf("%d",&num);
printf("%d",check(num));
return 0;
}
int check(int a)
{
 return a & 1 ? 0:1;
}