#include <stdio.h>
int main()
{
     int i, j, a[3][3], b[3][3];
     printf ("For the first matrix: \n");
     for (i=0;i<3;i++)
     {
         for (j=0;j<3;j++)
         {
             printf("Enter row %d and column %d element: ", i+1, j+1);
             while (scanf("%d", &a[i][j]) != 1) 
             {
                 printf("Invalid! Only numbers are accepted! Enter a number: ");
                 scanf("%*s");
             }
             }
        }
         printf ("\n\nFor the second matrix: \n");
     for (i=0;i<3;i++)
     {
         for (j=0;j<3;j++)
         {
             printf("Enter row %d and column %d element: ", i+1, j+1);
             while (scanf("%d", &b[i][j]) != 1) 
             {
                 printf("Invalid! Only numbers are accepted! Enter a number: ");
                 scanf("%*s");
             }
             }
        }
        printf ("\nThe sum of these matrices is:\n");
     for (i=0;i<3;i++)
     {
         for (j=0;j<3;j++)
         {
         printf("%d\t", a[i][j] + b[i][j]);
         }
         printf("\n");
        }
     return 0;
}
