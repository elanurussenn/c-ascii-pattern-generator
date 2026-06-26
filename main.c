#include <stdio.h>
#include <stdlib.h>

// Elanur Usşen - C Programlama Çalışması

int main()
{
    int n,i,j;

    printf("\n\n\nHATIRLATMA: ELANUR X ANTALYA YAZISINDAKI X GORSELLIK ACISINDAN KONULMUSTUR! ");
    printf("\n\n10'DAN DAHA FAZLA RAKAM GIRMENIZ DURUMUNDA DAHA GUZEL BIR GORUNTU OLUSACAKTIR AMA 10'DAN ASAGI RAKAM GIRSENIZ DE KOD CALISMAKTADIR\n\n");
    printf("LUTFEN ISTEDIGINIZ BIR BOYUT GIRINIZ : ");
    scanf("%d",&n);
    printf("-------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n");



    for (i=1; i<=n; i++)
    {
        for(j=1; j<n; j++)
        {
            if (i==(n/n))
            {
                printf("*");
            }
            if (i==((n+1)/2))
            {
                printf("*");
            }
            if (i==n)
            {
                printf("*");
            }
            if (j==1)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n\n");


    for (i=1; i<=n; i++)
    {
        for (j=1; j<n; j++)
        {
            if (j==(n/n))
            {
                printf("*");
            }
            if (i==n)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n\n");


    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (i==1 && j!=1 && j!=n)
            {
                printf("*");
            }
            else if(i>1 && (j==1 || j==n || i==n/2) )
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
    printf("\n\n");



    for (i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if (j==1)
            {
                printf("*");
            }
            if (j==n-1)
            {
                printf("*");
            }
            if (i>1 && i<n && i==j+1)
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
    printf("\n\n");




    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (i<n &&(j==1 || j==n-1))
            {
                printf("*");
            }
            if (i==n && (j!=1 && j!=n))
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
    printf("\n\n");




       for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (i==1 || j==1 || i==(n/2) || (j>n/2 && i==j) || (j==n && i<(n+1)/2) )
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
    printf("\n\n\n\n");


   for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if ((j==i || j==n-i+1))
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
    printf("\n\n\n\n");




      for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (i==1 && j!=1 && j!=n)
            {
                printf("*");
            }
            else if(i>1 && (j==1 || j==n || i==n/2) )
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
    printf("\n\n");

      for (i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if (j==1)
            {
                printf("*");
            }
            if (j==n-1)
            {
                printf("*");
            }
            if (i>1 && i<n && i==j+1)
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
    printf("\n\n");


    for (i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if (i==1 || (j==1 && i==2) ||(j==n && i==2) || j==(n+1)/2 )
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
    printf("\n\n");


      for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (i==1 && j!=1 && j!=n)
            {
                printf("*");
            }
            else if(i>1 && (j==1 || j==n || i==n/2) )
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
    printf("\n\n");



    for (i=1; i<=n; i++)
    {
        for (j=1; j<n; j++)
        {
            if (j==(n/n))
            {
                printf("*");
            }
            if (i==n)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n\n");


    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if(i<=(n+1)/2 && i==j)
            {
                printf("*");
            }
            if (i<(n+1)/2 && j==n-i)
            {
                printf("*");
            }
            if (i>(n+1)/2 && j==(n+1)/2)
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
    printf("\n\n");


      for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (i==1 && j!=1 && j!=n)
            {
                printf("*");
            }
            else if(i>1 && (j==1 || j==n || i==n/2) )
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
    printf("\n\n");



































    return 0;
}
