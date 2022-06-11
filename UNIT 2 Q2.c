/*John is very much interested in Mathematics. One day when he was learning about different
types of mathematical numbers, he came across a concept of “GOOD Number”. If there is no
“Zero” in the number, then it is a GOOD number. John is a beginner in C programming and
he needs your help to solve it.*/
#include <stdio.h>
int main()
{
  int n,k=0;
  printf("Enter number\n");
  scanf("%d",&n);
  do
    {
      if(n%10==0)
        {
            k++;
            break;
        }
      n/=10;
    }while(n>0);
  if(k==1)
  printf("BAD NUMBER");
  else
    printf("GOOD NUMBER");
  return 0;
}

