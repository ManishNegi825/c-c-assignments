#include<stdio.h>
void fib(int);
int main()
{
 int num;
printf("Enter a num ");
scanf("%d ",&num);
fib(num);
return 0;
}
void fib(int a)
{
   int pre=0,post=1,i,nxt;
   for(i=1;i<=a;i++)
   {
   printf("%d  ",pre);
       nxt=pre+post;
        pre=post;
        post=nxt;
   }

}