// Store 5 numbers in array and sort it in ascending order

#include <stdio.h>

void main ()
{
    int i, j, n, a[100],temp;
    
    printf("enter the number:");
    scanf("%d",&n);

    printf("enter the elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
          for(j=i+1;j<n;j++)
          {
              if (a[i]>a[j])
             {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
             }
  
          }
    
    }
    printf(" in ascending order array:");
    for(i=0;i<n;i++)
    { 
        printf("%d",a[i]);
    }
    

}
