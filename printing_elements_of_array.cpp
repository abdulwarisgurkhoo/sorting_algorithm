#include<iostream>
using namespace std;
int main {
    int arr[]={12,23,,34,34,53,345,3,43,34};
    int size =sizeof(arr)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
    
}