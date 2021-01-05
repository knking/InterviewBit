#include<bits\stdc++.h>
using namespace std;

int main()
{
    // int arr[]={4,3,6,2,1,1};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++){
    //     if(arr[i]==arr[i+1]){
    //         cout<<"repeating: "<<arr[i]<<endl;
    //     }
    // }

    int n;
	cin>>n;
	int reverse_num=0;
	while(n>0){
	   int last_digit=n%10;
	   reverse_num=reverse_num*10+last_digit;
	   n/=10;
    }
    cout<<reverse_num;
    return 0;
}