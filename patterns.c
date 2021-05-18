#include<stdio.h>
#include<cs50.h>
int main(void)
{
int type,row;
type=get_int("Enter type of pattern (1 or 2)");
row=get_int("Number of rows");
if(type==1)
{
for(int i=0;i<=row;i++)
{
for(int j=row-i;j>=1;j--)
{
printf(" #");
}
printf("\n");
}
}
else if(type==2)
{
for(int i=1;i<=row;i++)
{
int k=row-i;
while(k>0)
{
printf(" ");
k--;
}
for(int j=i;j>=1;j--)
{
printf("#");
}
printf("\n");
}
}
}
