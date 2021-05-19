#include<stdio.h>
#include<cs50.h>
int main(void)
{
int type,row;
type=get_int("");
row=get_int("");
if(type==1)
{
for(int i=0;i<=row-1;i++)
{
for(int j=row-i;j>=1;j--)
{
printf("#");
}
  printf("\n");
}
}
else if(type==2)
{
for(int i=1;i<=row;i++)
{
  printf("\n");
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
}
}
}
