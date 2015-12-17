#include<stdio.h>
#include<math.h>
int main(void)
{

    unsigned  long int sq,n,i,f=0;
    scanf("%u",&n);
    sq=sqrt(n);
    for(i=1;i<sq;i++)
    {
        //printf("01 10");
        if(n%i==0) f++ ;

    }
    f*=2;
    if(n%i==0)
        f++;
    printf("\n\n\n\n%u",f);
}
