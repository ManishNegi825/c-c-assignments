#include<stdio.h>
int main()
{
  int i,j,temp;
  char str[30];
  printf("Enter your string to check ");
  fgets(str,30,stdin);
  for(i=0;str[i];i++)
  {
     int count=0;
    for(j=0;str[j];j++)
    {
       if(str[i]==str[j])
       count++;
    }
    printf("The frequency of this charcter %c is %d in the string \n",str[i],count);
  } 
return 0;
}