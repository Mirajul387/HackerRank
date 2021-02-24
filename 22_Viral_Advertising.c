#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int share,linked=5,cumulative=0,s_person=1;
    scanf("%d",&n);
    for (int day = 1; day <= n; day++)
    {
        share=linked*s_person;
        linked=floor(share/2);
        cumulative+=linked;
        s_person=3;
    }
    printf("%d\n",cumulative);
    return 0;
}