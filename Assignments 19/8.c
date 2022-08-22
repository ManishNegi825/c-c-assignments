/*Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 ) */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char str[6][10],word1[10],word2[10];
int i,j,minimum,w1=0,w2=0;
printf("Enter your string ");
for(i=0;i<6;i++)
fgets(str[i],10,stdin);
printf("enter a 1st word to search for ");
fgets(word1,10,stdin);
printf("enter a 2nd word to search for ");
fgets(word2,10,stdin);
for(i=0;i<6;i++)
{
  if(strcmp(str[i],word1)==0)
   w1=i;
   if(strcmp(str[i],word2)==0)
   w2=i;
}
if(w1==0 && w2==0)
{
  printf("Entered words doesn't match in our string ");
}
else
{
 minimum = abs(w2-w1)-1;
 printf("The minimum differnce is %d",minimum);
}
return 0;
}