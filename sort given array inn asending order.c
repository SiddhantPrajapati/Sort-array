//WAP TO SORT GIVEN ARRAY IN ASENDING ORDER (USE INSERTION SORT, BUBBLE SORT, SELECTION SORT, MERGE SORT,QUICKSORT,HEAPSOT)
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,j,temp;
    printf("enter the element of array=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element=");
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
    printf("\n sorted \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
