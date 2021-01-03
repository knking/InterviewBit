#include<bits\stdc++.h>
using namespace std;

int main()
{
    int arr[]={4,3,6,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            cout<<"repeating: "<<arr[i]<<endl;
        }
    }
    return 0;
}