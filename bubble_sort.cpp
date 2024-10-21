                          /************BUBBLE SORTING*****************/
#include<iostream>
using namespace std;
void prints(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
            cout<<arr[i]<<" ";
    }
    
}
void bubble(int arr[],int n)
    {
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            { if(arr[j]>arr[j+1])
               {
                swap(arr[j],arr[j+1]);
                }

            }
            
        }
        
        cout<<"the sorted array is \n";
        prints(arr,n);
        
        
    }
    int main ()
        {
            int size;
            int arr[10]={34,56,67,23,456,3,2,1,6,8};
            size = sizeof(arr)/sizeof(int);
            cout<<"the unsorted array is \n";
            prints(arr,size);
            bubble(arr,size);
            return 0;

        } 