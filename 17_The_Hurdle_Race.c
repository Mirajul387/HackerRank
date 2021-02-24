#include<stdio.h>

int main(){
    int n,height;
    scanf("%d %d",&n,&height);

    int arr[n],temp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
  
     if (height<arr[n-1])
        {
            int check = (arr[n-1]-height);
            printf("%d\n",check);
        }else
        {
            printf("0\n");
        }
        
    return 0;
}