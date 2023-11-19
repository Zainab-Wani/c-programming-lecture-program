#include<stdio.h>
void main()
{
    int number,rev,rem,n;
    printf("enter an integer number");
    scanf("%d",&number);
    n=number;
    while(number!=0)
    {
        rem=number%10;
        rev+=rev*10+rem;
        number/=10;
    }
    printf("rev number=%d\n",rev);
    if(n=rev)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not a palindrome=%d",rev);
    }
}       