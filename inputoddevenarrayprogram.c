#include<stdio.h>
void main()
{
    int rollno [50],i,j,n,v;
    printf("enter the size of an array");
    scanf("%d\n",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&rollno [i]);
    }
    for(j=1;j<=n;j+=2)
    {
        printf("the even value are %d\n",rollno[j]);
    }
    for(v=0;v<=n;v+=2)
    {
        printf("the odd values are %d\n", rollno[v]);
    }
}
        