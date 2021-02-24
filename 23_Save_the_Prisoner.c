#include<stdio.h>

int main() {
    int t, n, m, s;
    scanf("%d", &t);
    // while (t--) scanf("%d%d%d", &n, &m, &s), printf("%d\n", (m+s-2)%n+1);
    while (t--)
    {
        scanf("%d%d%d", &n, &m, &s);
        printf("%d\n", (m+s-2)%n+1);
    }
    return 0;
}

// time limit exceeded
    // int n,i, ans;
    // scanf("%d",&n);

    // for ( i = 0; i < n; i++)
    // {
    //     int prisoners,candy,s_chair;
    //     scanf("%d %d %d",&prisoners, &candy, &s_chair);
        // for (int k = 1; k <= candy ; k++)
        // {
        //     if (k==candy)
        //     {
        //         printf("%d\n",s_chair);
        //         break;
        //     }

        //     s_chair++;
           
        //     if (prisoners<s_chair)
        //     {
        //         s_chair=1;
        //     }

    //         ans = s_chair + candy - 1;


    //         if(ans > prisoners) {
    //             ans -= prisoners;
    //             if(ans > prisoners) {
    //                 ans -= prisoners;
    //             }
    //             printf("%d\n", ans);
    //         } else {
    //             printf("%d\n", ans);
    //         }
    // }

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n,i;
//     scanf("%d",&n);
//     long long int arr[n][3];
//     for ( i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%lld",&arr[i][j]);
//         }
//     }
    
//     for ( i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//            for (int k = 1; k <= arr[j][1] ; k++)
//             {
//                 if (k==arr[j][1])/*canddy=arr[j][1]*/
//                 {
//                     printf("%lld\n",arr[j][2]);
//                 }
//                 arr[j][2]++;/*start chair=arr[j][2]*/
//                 if (arr[j][0]<arr[j][2]) /*prisoners=arr[j][0]*/
//                 {
//                     arr[j][2]=1;
//                 }
//             }
//         }
//     }

//     return 0;
// }