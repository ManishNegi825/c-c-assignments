#include<stdio.h>
int main()
{
char str[35];
printf("Enter you string user ");
fgets(str,35,stdin);
int i,temp,j;
for(i=0;str[i];i++)
{
  for(j=i+1;str[j];j++)
  {
    if(str[i]>str[j])
    {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
  }
  }
}
printf("%s",str);
return 0;
}