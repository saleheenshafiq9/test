#include<stdio.h>
main()
{
    int a,r[1000],i,p=0;
    scanf("%d",&a);
    for(i=0;a>=1;i++)
    {   r[i]=a%2;
        a=a/2;
        p++;
            }


    for(i=p-1;i>=0 ;i--){
        printf("%d",r[i]);
    }
}
