#include <stdio.h>

void main()

{

int i,n,a[50],s;

s=0;

printf("nhap n");

scanf("%d",&n);

for(i=0;i<n;i++)

{

printf("nhap %d\n",i);

scanf("%d",&a[i]);

}

for (i=0;i<n;i++)

{

    if (a[i]%2==0)

        printf("so chan %d",a[i]);

    else

        printf("so le %d",a[i]);

  }

}
