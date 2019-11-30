#include<math.h>
int potega(int a, int b)
{
    int x=1;
    for(int i=0; i<b; i++)
    {
        x*=a;
    }
    return x;
}

int nwd(int a, int b)
{
    while(a!=b)
    {
       if(a>b)
           a-=b;
       else
           b-=a;
    }
    return a;
}

int nww(int a, int b)
{
    int y, x;
  	y = a * b;
    while(a != b)
    {
        if(a > b) {
           a = a - b;
        } else {
            b = b - a;
        }
    }

    x=y/a;

}

int pole_trojkata(int a, int h)
{
    return a*h/2;
}

int pole_prostokata(int a, int b)
{
    return a*b;
}

int silnia(int a)
{
    int x=1;
    for(int i=1; i<=a; i++)
    {
        x*=i;
    }
    return x;
}

int reszta(int a, int b)
{
    return a-((a/b)*b);
}

int pole_trapezu(int a, int b, int h)
{
    return (a+b)*h/2;
}

int pole_rombu(int x, int f)
{
    return x*f/2;
}

int pole_trojkata_rownobocznego(int a)
{
    return (double)(a*a)*sqrt(3)/4;
}
