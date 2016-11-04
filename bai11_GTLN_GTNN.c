
#include <stdio.h>  

void main()  

{

    int GTLN,GTNN,i,n;

    printf("nhap n:");
    
    scanf("%d",&n);

   int a[n];

    for (i=0;i<n;i++)

   {
    scanf("%d",&a[i]);

   }

    GTLN=a[0]; GTNN=a[0];

      for (i=0;i<n;i++)
      
    {

    if (GTLN<a[i]) GTLN=a[i];

    if (GTNN>a[i]) GTNN=a[i];   

    }  

    printf("\n GTNN= %d", min);  

    printf("\n GTLN= %d", max);

}
