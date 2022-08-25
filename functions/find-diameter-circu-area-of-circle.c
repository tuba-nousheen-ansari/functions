#include<stdio.h>
#include<stdlib.h>
float diam(float n)
{
   return 2*n;
}

float circum(float n)
{
   return 2*3.14*n;;
}

float area(float n)
{
   return 3.14*n*n;;
}

int main()
{
    float n,c;
    int ch;

    while(1)
    {
        printf("1.for diameter\n");
        printf("2.for circumfrence\n");
        printf("3.for area\n");
        printf("4.exit\n");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:
                printf("enter radious\n");
                scanf("%f",&n);
                c=diam(n);
                printf("diametere of circle is %f\n",c);
                break;
            case 2:
                printf("enter radious\n");
                scanf("%f",&n);
                c=circum(n);
                printf("circumfrence of circle is %f\n",c);
                break;
            case 3:
                printf("enter radious\n");
                scanf("%f",&n);
                c=area(n);
                printf("area of circle is %f\n",c);
                break;
            case 4:
                exit(0);
        }
    }
}