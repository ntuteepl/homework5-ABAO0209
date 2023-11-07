#include <stdio.h>
#include <stdlib.h>
int main()
{
    double C;
    int a;
    scanf("%d",&a);
    if(0<a&&a<=800)
    {
        C=a*0.9;
    }
    else if(800<a&&a<=1500)
    {
        C=a*0.9*0.9;
    }
    else if(1500<a)
    {
        C=a*0.9*0.79;
    }
    printf("%.1lf",C);
}
