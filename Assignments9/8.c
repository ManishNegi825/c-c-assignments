#include<stdio.h>
int main()
{
int unit,amount;
 float final;
 printf("Enter the unit consumption ");
 scanf("%d",&unit);
switch (unit<=50)
{
  case 1:
      amount=unit*0.50;
      break;
      case 0:
      switch(unit<=150)
      {
        case 1:
      amount=25+(unit-50)*0.75;
      break;
      case 0:
      switch (unit<=250)
      {
      case 1:
      amount=100+(unit-150)*1.20;
      break;
      case 0:
      amount = 220+(unit-250)*1.50;
      break;
}
break;
      }
break;
}
final =amount*120/100;
printf("%f",final);
return 0;
} 