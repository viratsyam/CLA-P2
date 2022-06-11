/*Debo is a school student whose favourite subject is Mathematics. Her teacher taught
Matrices and she found it very interesting. Also, she is learning C programming. She
thought of developing a C program to find the transpose of a matrix. She is not much
familiar with nested loops. Help her to complete the code.*/
#include <stdio.h>
int main()
{
  int r,c;
  printf("Enter size of the matrix i.e rows X columns\n");
  scanf("%d",&r);
  scanf("%d",&c);
  int i,j;
  int m[r][c];
  printf("Enter matrix\n");
  for(i=0;i<r;i++)
    {
      printf("Enter row %d \n: ",i);
  for(j=0;j<c;j++)
    {
      scanf("%d",&m[i][j]);
    }
      printf("\n");
    }
  
printf("Transpose matrix\n");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          printf("%d\t",m[j][i]);
        }
      printf("\n");
    }
  return 0;
  }

