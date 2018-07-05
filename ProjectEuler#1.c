#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int t,k,n,sum=0,sum2=0,i,p,m;
    scanf("%lld",&t);
    for(k=0;k<t;k++)
        {
            scanf("%lld",&n);
            m=p=n;
            if((n%3)!=0)
                {
                    n=n/3;
                    sum=((n)*(6+(n-1)*3))/2;
                    
                }
            else if((n%3)==0)
                   {
                        n=n/3-1;
                       sum=((n)*(6+(n-1)*3))/2;
                        
                    }
                if((m%5)!=0)
                    {
                        m=m/5;
                    sum=sum+((m)*(10+(m-1)*5))/2;
                     
                    }
                else if((m%5)==0)
                    {
                         m=m/5-1;
                       sum=sum+((m)*(10+(m-1)*5))/2;
                    
                    }
                if((p%15)!=0)
                    {
                        p=p/15;
                        sum2=((p)*(30+(p-1)*15))/2;
                        
                    }
                else if((p%15)==0)
                    {
                        p=p/15-1;
                        sum2=((p)*(30+(p-1)*15))/2;
                    }
                sum=sum-sum2;
                
            printf("%lld\n",sum);
            sum=sum2=0;
        }
    return 0;
}
