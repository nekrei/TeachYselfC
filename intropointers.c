#include<stdio.h>
int main()
{
    int *i, ini=9;
    float *f, inf=2.1;
    double *ll, inl=2.35;
    char *c, inc='0';
    i=&ini;
    f =&inf;
    ll = &inl;
    c = &inc;
    printf("%p %p %p %p\n",i,f,ll,c);
    printf("%p %p %p %p\n",++i,++f,++ll,++c);//4 bytes integer, 4 bytes floating point, 8 bytes double, 1 byte character
    i +=2;
    printf("%p",i);

}