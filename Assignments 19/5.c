/*Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out. */
#include<stdio.h>
int main()
{
int i,j,flag;
char str[3][50];
printf("Enter your email address ");
for(i=0;i<3;i++)
fgets(str[i],50,stdin);
for(i=0;i<3;i++)
{
 for(j=0;str[i][j];j++)
 {
   if(str[i][j]=='@') // if(strchr(str[i],'@')!=0)  another way easy one
   {                     // printf("%s ",str[i])
   flag=0;
    break;
   }
    else
    flag=1;
 }
 if(flag==1)
 printf("This string doesnt have @ in it \n %s",str[i]);
}
return 0;
}