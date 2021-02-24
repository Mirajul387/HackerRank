#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void printArray(int arr[],int start,int end){
    int length = sizeof(arr)/sizeof(arr[0]);
    int c_arr[length], c = 0;
    for (int i = start; i < end; i++)
    {
        c_arr[c]=arr[i];
        c++;
        // printf("%d,",arr[i]);
    }
    printf("{");
    for (int i = 0; i < c; i++)
    {
        printf("%d ",c_arr);
    }
    
    printf("%d} ",arr[end]);
}
void printAllArrays(int arr[],int arr_length){
    // int temp_arr[arr_length],c=0;
    for (int i = 0; i < arr_length; i++)
    {
        for (int j = i; j < arr_length; j++)
        {   
            int temp = abs(arr[i]-arr[j]);
            if (temp==1 || arr[i]==arr[j])
            {
                // temp_arr[c]= arr[i];
                // c++;
                printArray(arr,i,j);
            }
        }
    }
}
int main(){
    int arr_length,temp;
    scanf("%d",&arr_length);
    int arr[arr_length];
    for (int i = 0; i < arr_length; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<arr_length; i++)
    {
        for(int j=i+1; j<arr_length; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    // for (int i = 0; i < arr_length; i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    printAllArrays(arr,arr_length);
    
return 0;
}