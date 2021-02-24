#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        int students,s_need;
        int attend=0;
        scanf("%d %d",&students,&s_need);
        int arr[students];
        for (int s = 0; s < students; s++)
        {
            scanf("%d",&arr[s]);
        }
        for (int k = 0; k < students; k++)
        {
            if (arr[k]<=0)
            {
                attend++;
            }
        }

        if (attend>=s_need)
        {
            printf("NO\n");
        }else
        {
            printf("YES\n");
        }
        attend=0;
    }
    
    return 0;
}