
#include <stdio.h>

int main()
{
    
    int arr[]={14,33,55,2,77,3,99,44,55,22,44,55};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            int temp;
            if(arr[i]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
    }
   for(int i=0; i<len; i++)
   {
       printf(" %d ",arr[i]);
   }
    return 0;
}
