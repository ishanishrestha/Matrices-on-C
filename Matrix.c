#include <stdio.h>
int main()
{
     int i,j,a[2][3];
     printf ("Matrix \n");
     for (i=0;i<2;i++)
     {
         for (j=0;j<3;j++)
         {
             printf("Enter elements: ");
             scanf("%d",&a[i][j]);
             }
             }
     for (i=0;i<2;i++)
     {
         for (j=0;j<3;j++)
         {
         printf("%d\t",a[i][j]);
         }
         printf("\n");
         }
     return 0;
}
