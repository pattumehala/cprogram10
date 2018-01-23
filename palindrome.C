#include<stdio.h>
int main()
{
int n,num,digit,reverse=0;
printf("enter the number",n);
scanf("%d",&n);
num=n;
while(n!=0)
{
digit=n%10;
n=n/10;
reverse=reverse*10+digit;
if(num==reverse)
{
printf("It is a palindrome",num);
}
else
{
printf("It is not a palindrome",num);
}
return 0;
}
