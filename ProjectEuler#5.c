#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int lcm(long long int n1,long long int n2)
{
        long long int m,n,r;
    if(n1>n2)
        {
            m=n1;
            n=n2;
        
        }
    else
        {
            m=n2;
            n=n1;
        }
    while(1)
        {
            r=m%n;
            if(r==0)
                {
                    
                    break;
                }
            else 
                {
                    m=n;
                    n=r;
                }
        }
    return (n1*n2)/n;
}
int main() {

    long long int n,y,i,t,k;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
        {
             scanf("%lld",&n);
            if(n==1)
                {
                    printf("%lld\n",n);
                }
        else{
             y=lcm(1,2);
             for(i=2;i<n;i++)
             {
                 y=lcm(y,i+1);
              }
             printf("%lld\n",y);
        }
        }
    
    
    return 0;
}
