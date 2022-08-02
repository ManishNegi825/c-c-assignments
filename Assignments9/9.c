#include<stdio.h>
int main()
{
int value,negative,positive;
printf("Enter a value ");
scanf("%d",&value);
switch(value>0)
{
case 1:
negative=value-0;
value=value-(negative+1);
printf("here is your converted value %d ",value);
break;
case 0:
positive=value;
value= value-(positive-1);
printf("Converted vlaue %d ",value);
break;
}
return 0;
}