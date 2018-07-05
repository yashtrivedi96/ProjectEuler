#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,k;
    long long int n,i,max=0;
    scanf("%d",&t);
    for(k=0;k<t;k++)
        {
            scanf("%lld",&n);
            for(i=2;i<=sqrt(n);i++)
                {
                    if((n%i)==0)
                        {
                            while((n%i)==0)
                                {
                                    n=n/i;       
                                }
                        }
               
                    if(i>max)
                        {
                            max=i;
                        }
                    
            }
         if(n!=1)
                    {
                        max=n;
                    }
        printf("%lld\n",max);
        max=0;
           
        }
    return 0;
}
