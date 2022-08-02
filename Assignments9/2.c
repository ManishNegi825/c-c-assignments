#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
while(1)
{
printf("\n1.Addition");
printf("\n2.Subtraction");
printf("\n3.Multiplication");
printf("\n4.division");
printf("\n5.exit");
printf("\n Enter your choice ");
scanf("%d",&x);

switch(x)
  {
    case 1:
    printf("\n enter two numbers ");
    scanf("%d %d",&a,&b);
    printf("The sum is %d",a+b);
    break;
    case 2:
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    printf("The differnce is %d ",a-b);
    break;
    case 3:
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    printf("the product is %d",a*b);
    break;
    case 4:
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    printf("The division is %d",a/b);
    break;
    case 5:
    exit(0);
    defualt :
    printf("Invalid choice");
  }
}
return 0;
}