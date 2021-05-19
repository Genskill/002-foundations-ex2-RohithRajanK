#include<stdio.h>
#include<cs50.h>
int main(void)
{
float a,b,c,a2,b2,c2,h,m,l;
a=get_float("side 1 ");
b=get_float("side 2 ");
c=get_float("side 3 ");
a2=a*a;
b2=b*b;
c2=c*c;
if(a2>b2&&a2>c2)
{
h=a2;
m=b2;
l=c2;
}
else if (b2>a2&&b2>c2)
{
h=b2;
m=a2;
l=c2;
}
else if(c2>a2&&c2>b2)
{
h=c2;
m=a2;
l=b2;
}
if(m+l==h)
{
printf("Yes");
}
else
{
printf("No");
}
}
