#include<stdio.h>

void print(int a[],int n)
{
    if(n<=0)
        return;
   
    print(a,--n);
    printf("%d\n",a[n]);
}

int main()
{
    int n;
    printf("enter array limit\n");
    scanf("%d",&n);

    int a[n],i;
    printf("enter %d element \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    i=0;
    print(a,n);

}