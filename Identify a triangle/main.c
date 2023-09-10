#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
printf("Pls enter 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
if (((a+b>c)&&(b+c>a)&&(a+c>b))&&(a=b=c))
    printf("It's an equilateral triangle");
else if (((a+b>c)&&(b+c>a)&&(a+c>b))&&((a==b)||(b==c)||(a==c)))
    printf("It's an isosceles triangle");
else if (((a+b>c)&&(b+c>a)&&(a+c>b))&&((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b)))
    printf("It's a right triangle");
else if ((a+b<=c)||(b+c<=a)||(a+c<=b))
    printf("It's not a triangle");
    return 0;
}
