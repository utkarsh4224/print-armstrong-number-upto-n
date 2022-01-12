#include <stdio.h>

int main()

{
    int n;
    printf("Enter the value of n: ");//200
    scanf("%d",&n);
    for (int i=1;i<=n;++i)
    {
        int num=i;
        int sum=0;
        int a;
        while(num!=0)
        {
            a=num%10;//a=1%10=1
            sum=sum+(a*a*a);//sum=0+1
            num=num/10;//num = 0
        }
        if(i==sum)
        {
            printf("%d ",i);// 1 153
        }
    }
    return 0;
}

