//can a number be expressed as a sum of 2 prime numbers
// for example
#include<stdio.h>
int prime(int );
int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    prime(a);
}
int prime(int a)
{
    int flag,ans,arr[a];
    for (int i = 2; i <= a; i++) {
        // check if i is prime
        flag = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            {
                ans=0;
                for(int k=2;k<a/2;k++)
                {
                    if((a-i)%k==0)
                    {
                        ans=1;
                        break;
                    }
                }
        if(ans==0)
            {printf("%d + %d = %d\n",i,a-i,a);
            }
    }
}
}
