#include<stdio.h>
int main()
{
   int i,counta=0,countd=0,counts=0;
  char str[30];
  printf("Enter your string ");
  fgets(str,30,stdin);
  for(i=0;str[i];i++)
  {
    if(str[i]>47 && str[i]<58)
    countd++;
    else if(str[i]>64 && str[i]<91 || str[i]>96 && str[i]<123)
    counta++;
    else if(str[i]>31 && str[i]<48 || str[i]>57 && str[i]<65 )
    counts++;
  }
printf("The total number of digits %d, alphabet are %d & special %d charcter are used  in string ",countd,counta,counts);
 return 0;
}