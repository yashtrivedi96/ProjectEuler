#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int t,k,n,i,x,z,y,j,max=0;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
        {
            scanf("%lld",&n);
            for(i=100;i<=999;i++)
                {
                    for(j=i+1;j<=999;j++)
                        {
                            x=i*j;
                            z=x;
                        if(x<n)
                            {
                                y=0;
                                while(x!=0)
                                    {
                                     y=y*10;
                                     y=y+x%10;
                                     x=x/10;
                                     }
                             if(z==y)
                            {
                                if(z>max)
                                    {
                                        max=z;
                                    }
                            }
                           
                            }
                        
                        
                        }
                }
            printf("%lld\n",max);
            max=0;
                     
        }
    return 0;
}
