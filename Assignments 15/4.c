#include<stdio.h>
int* rotate_right (int a[],int size,int);
int* rotate_left (int a[],int size,int);
int main()
{
 int size,d,index,i;
 printf("enter the size of an array ");
 scanf("%d",&size);
 int b[size];
printf("Enter the value of directon press 1 for right Or press 2 for left ");
scanf("%d",&d);
printf("Enter index value for rotation ");
scanf("%d",&index);
if(d==1)
 rotate_right(b,size,index);
 else if(d==2)
 rotate_left(b,size,index);
 else
 printf("invalid value given ");
 for(i=0;i<size;i++)
 printf("%d ",b[i]);
 return 0;
}
int* rotate_right(int a[],int size,int n)
{
  int i,temp,j;
  for(i=0;i<size;i++)
  {
    printf("Enter value of array ");
    scanf("%d",&a[i]);
  }
  for(i=0;i<size;i++)
  {
     if(n>=i)
    {
       for(j=0;j<size-1;j++)
   {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
    }
  else
  break;  
}
  return a;         
}
int* rotate_left(int a[],int size,int n)
{
  int i,temp,j;
  for(i=0;i<size;i++)
  {
    printf("Enter value of array ");
    scanf("%d",&a[i]);
  }
  for(i=0;i<size;i++) 
 {
    if(n>i)
    {
   for(j=0;j<size-1;j++)
   {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
    }
    else
    break;
}
return a;
}