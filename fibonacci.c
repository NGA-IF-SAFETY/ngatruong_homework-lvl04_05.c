#include <stdio.h>
void main ()
{
int a[100],n,i;
scanf("%d",&n);
for (i=0;i<=n;i++)
 if (i==0||i==1)
 {
a[i]=1;
printf("a(%d) = %d \n",i,a[i]);
 }
else
{
a[i]=a[i-1]+a[i-2];
printf("a(%d) = %d\n",i,a[i]);
}
}
