#include<stdio.h>
int main()
{
int a[]={2,4,6,6,7},b[]={5,7,2,8,9},c[]={2,7,8,6,7};
int n,i;
printf("enter the number\n");
scanf("%d",&n);

for(i=0;i<5;i++)
{
    if(a[i]==n)
    {
        printf("%d",a[i]);
        break;
    }
}
for(i=0;i<5;i++)
{
    if(b[i]==n)
    {
        printf("%d",a[i]);
        break;
    }
}
for(i=0;i<5;i++)
{
    if(a[i]==n)
    {
        printf("%d",a[i]);
        break;
    }
}

}
