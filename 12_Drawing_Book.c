#include<stdio.h>

int main(){
    int  total_page,search_page;
    int t_count=0;
    int b_count=0;
    int f_count=0;

    scanf("%d",&total_page);
    scanf("%d",&search_page);

    if(total_page%2==1)
    {
        if((total_page==search_page) || ((total_page-1)==search_page) || (1==search_page))
        {
        printf("%d\n",f_count);
        }else{
        for (int i = 2; i <=total_page-2 ; i+=2)
        {
            t_count++;
            if (i==search_page || ((i+1)==search_page))
            {
                break;
            }
        }
        for (int i = total_page-2; i > 1 ; i-=2)
        {
            b_count++;
            if (i==search_page || ((i-1)==search_page))
            {
                break;
            }
        }
        if (t_count >= b_count)
        {
            printf("%d\n",b_count);
        }else
        {
            printf("%d\n",t_count);
        }
        }
    }else
    {
        if(total_page==search_page)
        {
        printf("%d\n",f_count);
        }else{
        for (int i = 2; i <=total_page ; i+=2)
        {
            t_count++;
            if (i==search_page || ((i+1)==search_page))
            {
                break;
            }
        }
        for (int i = total_page-1; i > 1 ; i-=2)
        {
            b_count++;
            if (i==search_page || ((i-1)==search_page))
            {
                break;
            }
        }
        if (t_count >= b_count)
        {
            printf("%d\n",b_count);
        }else
        {
            printf("%d\n",t_count);
        }
        }
    }
    
    return 0;
}


// #include <stdio.h>

// int main(){
//     int n; 
//     scanf("%d",&n);
//     int p; 
//     scanf("%d",&p);
//     int ans1,ans2;
//     ans1=p/2;
//     ans2=(n-p)/2;
//     if(ans1>ans2)
//      {
//      printf("%d",ans2);
//      }
//     else
//      {
//         printf("%d",ans1);
//     }
        
//     return 0;
// }
