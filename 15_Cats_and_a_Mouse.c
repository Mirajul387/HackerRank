#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int queries;
    scanf("%d",&queries);
    int arr[queries][3];

    for (int i = 0; i < queries; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i = 0; i < queries; i++)
    {
        int a = abs(arr[i][0]-arr[i][2]);
        int b = abs(arr[i][1]-arr[i][2]);
        if (a>b)
        {
            printf("Cat B\n");
        }else if(a<b)
        {
            printf("Cat A\n");
        }else if(a==b)
        {
            printf("Mouse C\n");
        }
    }

    return 0;
}