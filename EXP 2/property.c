/* Note that 12*42 = 21*24 and 12*63 = 21*36 and 12*84 = 21*48 and so on. 
There is a property that (10a+b)*(10c+d) =(10b+a)(10d+c) where a and b are unequal and c and d are also unequal. 
Write a program which outputs them all between 10 to 99.*/

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
