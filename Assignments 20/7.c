/*Write a program to count the number of vowels and consonants in a string using a pointer.*/
#include<stdio.h>
#include<string.h>
void count(char *p,int size);
int main()
{
   char str[20];
   printf("Enter your string here  ");
   fgets(str,20,stdin);
   count(str,20);
  return 0;
}
  void count(char *ptr,int size)
  {
    int i,vowel=0,conso=0,length;
    for(i=0;ptr[i];i++)
    {
     if(*(ptr+i)==32)
     continue;
if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u'||*(ptr+i)=='A'||*(ptr+i)=='E'||*(ptr+i)=='I'||*(ptr+i)=='O'|| *(ptr+i)=='U')
{
  vowel++;
}
else
conso++;
    }
    length=strlen(ptr)-1;
    conso=length-vowel;
    printf("The number of vowel in this string are %d ",vowel);
    printf("\n The number of constant are %d",conso);
  }