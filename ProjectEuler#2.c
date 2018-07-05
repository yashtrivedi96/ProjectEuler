#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int i,k,t,n,sum=2,*a;
    a=(long long int*)malloc(4*(pow(10,7))*sizeof(long long int));
    scanf("%lld",&t);
    for(k=0;k<t;k++)
        {
            scanf("%lld",&n);
            a[0]=1;
            a[1]=2;
            a[2]=a[0]+a[1];
            i=2;
            while(a[i]<=n)
                {
                    i++;
                    a[i]=a[i-1]+a[i-2];
                    if(((a[i]%2)==0)&&(a[i]<=n))
                        {
                            sum=sum+a[i];
                        }
                
                }
            printf("%lld\n",sum);
            sum=2;
        }
    
    return 0;
}
