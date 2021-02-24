#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int start,end,divisor,count=0;

    scanf("%d %d %d",&start, &end, &divisor);

    for (int i = start; i <= end; i++)
    {
        int remainder,rev=0;
        int n=i;
        int result;
        while (n != 0)
        {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
        }
        result=abs(i-rev);
        if (result%divisor==0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}