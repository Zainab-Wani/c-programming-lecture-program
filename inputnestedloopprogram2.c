#include<stdio.h>
void main()
{
    int j,i;
    for(i=5;i>=0;i--)
    {
        for(j=i;j<=i;j++)
        {
            printf("%d\n",j);
        }
    }
}