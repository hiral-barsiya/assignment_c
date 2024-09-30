//Wap to print factorial of given number


#include <stdio.h>

void main()
{
  int i, f = 1, n;  

  printf("Input the number : ");  
  scanf("%d", &n);  

  for(i = 1; i <= n; i++)
  {  
      f = f * i; 
  }
  printf("\n The Factorial  is: %d\n", f);  
}