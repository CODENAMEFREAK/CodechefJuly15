#include<stdio.h>
int max;
int countZeroes(int num)
{
    int zeroes=0;
    //Remove already present zeroes if any
    while(num%10==0)
    {
        zeroes++;
        num/=10;
    }
    while(num%5==0)
    {
        zeroes++;
        num*=4;
        max*=4;
        num/=10;
     while(num%10==0)
    {
        zeroes++;
        num/=10;
    }
    }
    return zeroes;
}

int minimize(int maxValue)
{
    if(maxValue%4==0)
    {
        int n1=0,n2=0,temp=maxValue;
        while(temp%10==0)
        {
            n1++;
            temp/=10;
        }
        temp=maxValue/4;
        while(temp%10==0)
        {
            n2++;
            temp/=10;
        }
        if(n1==n2)
            return minimize(maxValue/4);
        else
          return  maxValue;
    }
    else
        return maxValue;

}

void solveCase(void)
{
    int num;
    scanf("%d",&num);
    max=num;
    int numofzeroes = countZeroes(num);

    if(numofzeroes == 0)
        printf("%d\n",num);
    else{
        //Now minimize the number
       printf( "%d\n",minimize(max));
    }
}

int main()
{
    int size;
    scanf("%d",&size);
    for(int i=1;i<=size;i++)
        solveCase();
    return 0;
}
