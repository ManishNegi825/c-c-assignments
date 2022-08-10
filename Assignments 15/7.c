#include<stdio.h>
int duplicate (int*,int);
int main()
{
  int size;
  printf("Enter array size ");
  scanf("%d",&size);
  int a[size];
  int c = duplicate(a,size);
  printf("Total duplicate value is %d",c);
  return 0;
}

int duplicate (int b[], int size)
{
  int i,j,count=0;
for(i=0;i<size;i++)
scanf("%d",&b[i]);

  for(i=0;i<size;i++)
  { 
         for(j=i+1;j<size;j++)
      {
         if(b[i]==b[j])
         {
         count++;   
         break;
         }     
      }
  }
     return count;
}