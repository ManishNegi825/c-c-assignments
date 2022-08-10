#include<stdio.h>
void different(int b[],int);
int main()
{
 int size,i;
 printf("Enter the size of array ");
 scanf("%d",&size);
 int a[size];
 different(a,size);
return 0;
}
  void different(int b[],int size)
{
 int i,j,count=0;
 for(i=0;i<size;i++)
 {
   scanf("%d",&b[i]);
 }
    for(i=0;i<size;i++)
   { 
      for(j=0;i<size;i++)
      {
           if(b[i]==b[j])
             break;
           else
             printf("%d ",b[i]); 
             count++;          
      }
  }
  if(count==0)
  printf("\n There is no unique elements");
}