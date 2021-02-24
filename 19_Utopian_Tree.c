#include<stdio.h>

int main(){
    int n,h=0;

    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= arr[i]; j++)
        {
            if (j==0)
            {
                h=1;
            }else if(j%2==0)
            {
                h++;
            }else
            {
                h+=h;
            }
        }
        printf("%d\n",h);
        h=0;
    }

    return 0;
}