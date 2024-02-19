#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        sum=sum+arr[i];
        printf("The sum of array is=%d\n",sum);
        return 0;

}