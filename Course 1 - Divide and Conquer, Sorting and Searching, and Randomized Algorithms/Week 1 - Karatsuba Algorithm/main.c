#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long getnum(long x)
{
    long n;
    n=log10(x)+1;
    return n;
}


long mul(long x, long y)
{
long mult=0;

while (y--)
    mult+=x;

return mult;
}

long compn(long x, long y)
{
    if (x>y)
        return x;
    else
        return y;
}



long multiply(long x, long y)
{
    long a,b,c,d,ac,bd,adbc=0;
    long n1,n2,n,res;

    if (x<10 || y<10) return mul(x,y);
    else
    {

    n1=getnum(x);
    n2=getnum(y);
    n=compn(n1,n2);
    a=x/pow(10,(n/2));
    b=x-a*pow(10,(n/2));
    c=y/pow(10,(n/2));
    d=y-c*pow(10,(n/2));

    ac = multiply(a, c);
    bd = multiply(b, d);
    adbc = multiply(a+b, c+d) - (ac + bd);

    if (n%2==0)
    {
        res = (pow(10, n) * ac) + (pow(10, n/2) * adbc) + bd;
    }
    else
    {
        res = (pow(10, n-1) * ac) + (pow(10, n/2) * adbc) + bd;
    }
    return res;
    }
}

int main()
{
    long x,y,z;
    long n1,n2;
    printf("Please enter your first number:");
    scanf("%ld",&x);
    printf("Please enter your second number:");
    scanf("%ld",&y);
    printf("You entered = %ld and %ld \n",x,y);
    n1= getnum(x);
    n2= getnum(y);
    printf("Their numbers = %ld and %ld \n",n1,n2);
    z=multiply(x,y);
    printf("Result= %ld",z);
    return 0;

}
