#include<stdio.h>

void main()
{
    int i,n;

    printf("nhap n vao:\n");

    scanf("%d",&n);
     int a[n] ;

    for (i=0;i<n;i++)

    {
    printf("Phan tu thu %d= ",i);

    scanf("%d",&a[i]);
    }

    for (i=0;i<n;i++)

    printf("%6d",a[i]);
}
