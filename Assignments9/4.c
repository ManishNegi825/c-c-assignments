#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,c;
    while(1)
    {
        printf("\n 1.To check a triangle is isosceles or not ");
        printf("\n 2.To check a triangle is right angle or not ");
        printf("\n 3.To check a triangle is equilateral or not ");
        printf("\n 4.Exit  \n");
        scanf("%d",&x);
        printf("\n");
        switch (x)
        {
            case 1:
            printf("Enter three sides of an triangle ");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b||b==c||c==a)
            printf("This is an isosceles triangle ");
            else
            printf("Not an isoceles triangle");
            break;
            case 2:
            printf("Enter three sides of an triangle ");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b && b==c && c==a)
            printf("This is an equilateral triangle ");
            else
            printf("Not an equilateral triangle");
            break;
            case 3:
            printf("Enter three sides of an triangle ");
            scanf("%d %d %d",&a,&b,&c);
            if(a*a==(b*b+c*c)||b*b==(c*c+a*a)||c*c==(a*a+b*b))
            printf("This is an right angle triangle ");
            else
            printf("Not an right angle triangle");
            break;
            case 4:
            exit(0);
            default :
            printf("invaid input given ");
        }

    }
    return 0;
}