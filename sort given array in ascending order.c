//wap to sort given array in ascending order (use insertion sort,bubble sort,selection sort,mergesort,quicksort,heapsort).
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i,j,temp;
    for(i=0;i<5;i++)
    {
        printf("enter the value of %d element:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n sorted");
    for(i=0;i<5;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}
