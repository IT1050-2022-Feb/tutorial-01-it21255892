/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int maximum(x,y)
{
  if (x > y)
  {
    return(x);
  }
  else
  {
    return(y);
  }
}
int minimum(x,y)
{
  if (x < y)
  {
    return(x);
  }
  else
  {
    return(y);
  }
}
int multiply(x,y)
{
  int tot;
  tot = x * y;
  return(tot);
}
int main() 
{
  int no1, no2;
  printf("Enter a value for no 1 : ");
  scanf("%d", &no1);
  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);
  printf("%d ", minimum(no1, no2));
  printf("%d ", maximum(no1, no2));
  printf("%d ", multiply(no1, no2));
  return 0;
}
