//WAP to sort given array in ascending order (use insertion sort, bubble sort, selection sort,mergesort,quick sort,heapsot)
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[20],j,temp,n;
    printf("\n enter the element of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter the %d element=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n ascending string\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
}
