// C program to print square star pattern
/*****
*****
*****
*****
*****/

/*#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the number of rows\n");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

// c program to print hollow square
/****
 *   *
 *   *
 *   *
 *****/
/*#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i==1||i==n||j==1||j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

// c program to print hollow square star pattern with diagonal
/****
** **
* * *
** **
*****/
/*#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of row\n");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i==1||i==n||j==1||j==n||i==j||j==(n-i+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}*/

/* c program to print ribhosome star pattern
        /*****
       *****
     *****
   *****
 *****/
/*#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
           for ( j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}*/

/* C program to print hollow rhombus star pattern
     /*****
    *   *
   *   *
  *   *
 *****/
/*#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
           for ( j = 1; j <= n; j++)
        {
            if (i==1||i==n||j==1||j==n)
            {
                printf("*");
            }
            else
            {
            printf(" ");
            }
        }

        printf("\n");
    }
    return 0;
}*/

/* c program to print reverse ribhosome star pattern
*****
  *****
   *****
    *****
     *****/
/*#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j < i; j++)
        {
            printf(" ");
        }
           for ( j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}*/

// c program to print hollow mirror rhombus
/*****
  *   *
   *   *
    *   *
     *****/
/*#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j < i; j++)
        {
            printf(" ");
        }
           for ( j = 1; j <= n; j++)
        {
            if (i==1||i==n||j==1||j==n)
            {
               printf("*");
            }
            else
            {
                printf(" ");
            }


        }

        printf("\n");
    }
    return 0;
}*/

// C program to print right triangle star pattern series
/*
**
***
****
*****/
/*#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

// C program to print hollow right triangle star pattern
/*
**
* *
*  *
*****/
/*#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            if (i==1||i==n||j==1||j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}*/
//C program to print right triangle star pattern series
   /*
   **
  ***
 ****
*****/
/*#include <stdio.h>

int main()
{
    int i, j, rows;

       printf("Enter number of rows: ");
    scanf("%d", &rows);

        for(i=1; i<=rows; i++)
    {
            for(j=i; j<rows; j++)
        {
            printf(" ");
        }
       
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
             printf("\n");
    }
    
    return 0;
}*/

//C program to print hollow mirrored right triangle star pattern
   /*
   **
  * *
 *  *
*****/
/*#include <stdio.h>

int main()
{
    int i, j, rows;

   printf("Enter number of rows : ");
    scanf("%d", &rows);

       for(i=1; i<=rows; i++)
    {
             for(j=i; j<rows; j++)
        {
            printf(" ");
        }

              for(j=1; j<=i; j++)
        {
           
            if(i==rows || j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}*/

// Reverse right triangle star pattern program in C
/*****
****
***
**
*/
/*#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

// C program to print hollow inverted right triangle star pattern
/*****
 *   *
 *  *
 * *
 */
/*#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = i; j <= n; j++)
        {
            if (i==1||i==n||j==i||j==n)
            {
             printf("*");
            }
            else
            {
             printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

// C program to print reverse mirrored right triangle star pattern
/****
  ***
   **
    */
/*#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the no. of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j < i; j++)
        {
            printf(" ");
        }
        for ( j = i; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}*/

// C program to print hollow mirrored inverted right triangle star pattern
 /*****
   *  *
    * *
     **
      */

/*#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the no. of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j < i; j++)
        {
            printf(" ");
        }
        for ( j = i; j <= n; j++)
        {
            if (i==1||i==n||j==i||j==n)
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }

        }
       printf("\n");
    }
    return 0;
}*/

// C program to print equilateral triangle or pyramid star pattern
    /*
    ***
   *****
  *******
 *********/
/*#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the no. of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = i; j <= n; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <= (2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

// C program to print hollow equilateral triangle or hollow pyramid star pattern
    /*
    * *
   *   *
  *     *
 *********/
/*#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the no. of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = i; j <= n; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <= (2*i-1); j++)
        {
            if (i==1||i==n||j==1||j==(2*i-1))
            {
                 printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}*/

// C program to print reverse pyramid star pattern
/*********
  *******
   *****
    ***
     */
/*#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter the number of Rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (n * 2 - (2 * i - 1)); j++)
        {
            printf("*");
        }
        printf("\n");
    }
 

    return 0;
}*/

//C program to print reverse hollow pyramid star pattern
/*********
  *     *
   *   *
    * *
     */

/*#include<stdio.h>
int main()
{
    int i,j,n;
    
    printf("Enter the no. of rows: ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j < i; j++)
        {
           printf(" ");
        }
        for ( j = 1; j <= (n*2-(2*i-1)); j++)
        {
              if (i==1||i==n||j==1||j==i)
                {
                    printf("*");

                }
                else
                {
                    printf(" ");
                }

          
        }
        printf("\n");
    }
    return 0;
}*/

//C program to print half diamond star pattern series.
/*
**
***
****
*****
****
***
**
*/
/*#include<stdio.h>
int main()
{
    int i,j,n,column;

    printf("Enter the no. of rows: ");
    scanf("%d",&n);

    column =1;
    for ( i = 1; i <= n*2; i++)
    {
        for ( j = 1; j <= column; j++)
        {
            printf(">3");
        }
        if (i<n)
        {
            column++;
        }
        else
        {
            column--;
        }
        printf("\n");
    }
    return 0;
}*/

//C program to print mirrored half diamond star pattern
   /*
   **
  ***
 ****
*****
 ****
  ***
   **
    *
*/

/*#include<stdio.h>
int main()
{
    int i,j,n;
    int star,spaces;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    spaces = n-1;
    star = 1;
    
   for ( i = 1; i <= n*2; i++)
    {
        for ( j = 1; j <=spaces; j++)
        
             printf(" ");
            for ( j = 1; j <= star; j++)
            
                printf("*");
                printf("\n");
            
         
           
        if (i<n)
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }

    }
    return 0;
}*/

/* C program to print diamond star pattern 
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    */

/*#include<stdio.h>
int main()
{
    int i,j,n;
    int star,spaces;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    spaces = n-1;
    star = 1;
    
   for ( i = 1; i <= n*2; i++)
    {
        for ( j = 1; j <=spaces; j++)
        
             printf(" ");
            for ( j = 1; j <= star*2; j++)
            
                printf("*");
                printf("\n");
            
         
           
        if (i<n)
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }

    }
    return 0;
}*/
/*C program to print hollow diamond star pattern
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********/
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n : ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

     for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=(2*i-2); j<(2*n-2); j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}








