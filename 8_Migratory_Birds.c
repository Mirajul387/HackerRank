#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int i,j,k,c=0,p;
    int v_temp[n],count=0;
    // input the values
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(v_temp[j]==arr[j])
            {
                continue;
            }else if (arr[i]==arr[j])
            {
                v_temp[i]=arr[j];
                ++c;
            }
            if (c>count)
            {
                count=c;
            }
        }
    }

    printf("%d",p);

    return 0;
}