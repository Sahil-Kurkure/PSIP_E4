#include <stdio.h>

int main()
{
    int a,b,c,d,n=1;

    for (a=1;a<=9;a++)
    {
        for(b=1;b<=9;b++)
        {
            for(c=1;c<=9;c++)
            {
                for(d=1;d<=9;d++)
                {
                    if ((a!=b) && (c!=d))
                    {
                        if ((10*a+b)*(10*c+d) == (10*b+a)*(10*d+c))
                        {
                            printf("%d -- (%d%d*%d%d)",n,a,b,c,d);
                            printf("=");
                            printf("(%d%d*%d%d)\n",b,a,d,c);
                            n++;
                        }
                    }
                }
            }
        }
    }         
                 
    return 0;

}
