#include <stdio.h>

void main()

{

int a[100],n,i;

printf("nhap n vao :\n");

scanf("%d",&n);

for (i=0;i<n;i++)

{

printf("nhap a(%d)\n",i);

scanf("%d",&a[i]);

}

for (i=0;i<n;i++)

printf("%6d\n",a[i]);

}
