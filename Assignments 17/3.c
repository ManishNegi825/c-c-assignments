#include<iostream>
using namespace std;
int main ()
{
  int j,count=0;
  char str[25],a,e,o,u,i;
printf("Enter your string ");
fgets(str,25,stdin);
for(j=0;str[j];j++)
{
  if(str[j]== 'a' || str[j]=='e' ||str[j]=='o' ||str[j]=='u' ||str[j]=='i')
  count++;
}
printf("The toatal vowels are in string is %d",count);
return 0;
}