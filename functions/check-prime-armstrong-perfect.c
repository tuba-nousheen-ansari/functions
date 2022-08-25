#include<stdio.h>
#include<stdlib.h>
void prime(int n)
{
   int i,f=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f)
        printf("its not prime\n");
    else    
        printf("its prime\n");
}

void armstrong(int n)
{
   int t,rev=0,i,p;
   t=n;
   while(n!=0)
   {
        p=n%10;
        rev=p*p*p+rev;
        n=n/10;
   }
   if(rev==t)
        printf("its armstrong\n");
    else
        printf("its not armstrong\n");
}

void perfect(int n)
{
   int i,p=0;
   for(i=1;i<n;i++)
   {
       if(n%i==0)
            p=p+i;
   }
   if(p==n)
        printf("perfect no \n");
    else    
        printf("its not perfect\n");
}

int main()
{
    int ch,n;

    while(1)
    {
        printf("1.for prime no\n");
        printf("2.for armstrong no\n");
        printf("3.for perfect no\n");
        printf("4.exit\n");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:
                printf("enter a number\n");
                scanf("%d",&n);
                prime(n);
                break;
            case 2:
                printf("enter a number\n");
                scanf("%d",&n);
                armstrong(n);
                break;
            case 3:
                printf("enter a number\n");
                scanf("%d",&n);
                perfect(n);
                break;
            case 4:
                exit(0);
        }
    }
}