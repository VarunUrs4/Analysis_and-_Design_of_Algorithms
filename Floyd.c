#include<stdio.h>

int a[10][10],n;

void floyds()
{
    int i,j,k;
    for(k=1; k<=n; k++)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
            }
        }
    }
    printf(" \n All pair shortest path matrix is : \n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf(" %d\t",a[i][j]);
        }
        printf(" \n\n");
    }
}

int min(int x,int y)
{
    if(x< y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

void main()
{
    int i,j;
    printf(" \n Enter the no. of vertices : ");
    scanf(" %d",&n);
    printf(" \n Enter the cost matrix :\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf(" %d",&a[i][j]);
        }
    }
    floyds();
}
