#include <stdio.h>
int main()
{
    int i,ara[200003];
    long long int n;
    scanf("%lld",&n);
    long long int moves = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1;i<n;i++)
    {
        if(ara[i]<ara[i-1])
        {
            moves += (ara[i-1] - ara[i]);
            ara[i] = ara[i-1];
        }
    }
    printf("%lld\n",moves);

    return 0;
}
