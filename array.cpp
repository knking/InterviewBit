#include<bits/stdc++.h>
using namespace std;


// class Solution {
// public:
//     vector<int> repeatedNumber(const vector<int> &V) {
//        long long sum = 0;
//        long long squareSum = 0;
//        long long temp;
//        for (int i = 0; i < V.size(); i++) {
//            temp = V[i];
//            sum += temp;
//            sum -= (i + 1);
//            squareSum += (temp * temp);
//            squareSum -= ((long long)(i + 1) * (long long)(i + 1));
//        }
//        // sum = A - B
//        // squareSum = A^2 - B^2 = (A - B)(A + B)
//        // squareSum / sum = A + B
//        squareSum /= sum;

//        // Now we have A + B and A - B. Lets figure out A and B now. 
//        int A = (int) ((sum + squareSum) / 2);
//        int B = squareSum - A;

//        vector<int> ret;
//        ret.push_back(A);
//        ret.push_back(B);
//        return ret;
//     }
// };
// vector<int> Solution::repeatedNumber(const vector<int> &A) {
//     int i;
//     int n = A.size();
//     long long int a,b,c;
//     long long int tot, stot;
//     long long int sum=0;
//     long long int ssum=0;
//     vector<int> answer(2,0);
    
//     tot = (long long int) n*(n+1)/2;
//     stot =(long long int) n*(2*n+1)*(n+1)/6;
//     for(i=0;i<n;i++){
//         sum += A[i];
//         ssum += (long long int) A[i]*A[i];
//     }
    
//     a = sum-tot;    // x - y
//     b = ssum-stot;  // x2 - y2
//     c = b/a;        // x + y
    
//     answer[0] = (a+c)/2;
//     answer[1] = c-answer[0];
//     return answer;
// }
// vector<int> Solution::repeatedNumber(const vector<int> &A) {
//     // Do not write main() function.
//     // Do not read input, instead use the arguments to the function.
//     // Do not print the output, instead return values as specified
//     // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//     int x; int y;
//     long long a1; long long b1;
//     long long sum=0; long long square_sum=0;
//     int n=A.size();
//     long long actual_sum=(long long)n*(long long)(n+1)/2;
//     long long actual_square_sum=(long long)n*(long long)(n+1)*(long long)(2*n+1)/6; int i;
    
//     for(i=0;i<A.size();i++)
//     {
//         sum=(long long)sum+(long long)A[i]; square_sum=(long long)square_sum+(long long)A[i]*(long long)A[i];
//     }
    
//     a1=(long long)actual_sum-(long long)sum;    b1=(long long)actual_square_sum-(long long)square_sum;
//     x=((long long)b1-(long long)a1*(long long)a1)/(2*a1);  y=(long long)a1+(long long)x;
    
//     vector<int> result(2);
//     result[0]=x; result[1]=y;
//     return result;
// }



//                     ////Array math

// int maxSubArray(const vector<int> &A) {
//     int maxSum=INT_MIN,curSum=0;
//     for(auto it : A){
//          curSum+=it;
//          maxSum=max(curSum,maxSum);
//          if(curSum<0) curSum=0;
//     }
//     return maxSum; 
// }

// void maximumTriplet(){
//     int ar[]={1,2,3};
//     int maxSum=0;
//     int s=sizeof(ar)/sizeof(ar[0]);
//     // for(int i=0;i<s-2;i++){
//     //     for(int j=i+1;j<s-1;j++){
//     //         int ans=0;
//     //         for(int k=j+1;k<s;k++){
//     //             if(ar[i]<ar[j] and ar[j] < ar[k]){
//     //             ans=ar[i]+ar[j]+ar[k];
//     //             maxSum=max(maxSum,ans); 
//     //             }
//     //         }
//     //     }
//     // }
//     // cout<<maxSum<<endl;

//     ///efficient approach
//     for(int i=1;i<s-1;i++){
//         int max1=0,max2=0;
//             ///find the value less than ar[i]
//         for(int j=0; j<i;j++){
//             if(ar[j] < ar[i]){
//                 max1=max(max1,ar[j]);
//             }
//         }
//         for(int j=i+1;j<s;j++){
//             if(ar[j] > ar[i]){
//                 max2=max(max2,ar[j]);
//             }
//         }
//         if(max1 && max2){
//             maxSum=max(maxSum,max1+ar[i]+max2);
//         }
//     }
//     cout<<maxSum;
// }

//                 /////Arrangenment
// void  rotateMatrix(int arr[2][2],int n,int m){
//     ////taking transpose
//     for(int row=0;row<n;row++){
//         for(int col=row;col<m;col++){
//             swap(arr[row][col],arr[col][row]);
//         }
//     }
//     ////reverse row
//     for(int r=0;r<n;r++){
//        int st=0;
//        int en=n-1;
//        while(st<en){
//            swap(arr[r][st],arr[r][en]);
//            st++;
//            en--;
//        }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
//                 ////missing and repeated

// void repeatAndmiss(int arr[],int s){
//     int N=s+1;
//     int tempArr[N];
//     for(int i=0;i<N;i++){
//         tempArr[i]=0;
//     }

//     for(int i=0;i<s;i++){
//         tempArr[arr[i]]++;
//     }
//     for(int i=1;i<N;i++){
//         if(tempArr[i]>1){
//             cout<<"repeat : "<<i<<endl;
//         }
//         if(tempArr[i] < 1){
//             cout<<"miss : "<<i<<endl;
//         }     
//     }
// }
//         /////Buckting
// void dupInArr(int arr[],int s){
//     // int x=arr[0];
//     // for(int i=1;i<s;i++)
//     //     x=x ^ arr[i];
//     // return x;

//     for(int i=0;i<s;i++){
//         arr[arr[i]%s]=arr[arr[i]%s]+s;
//     }
//     for(int i=0;i<s;i++){
//         if(arr[i]/s > 1){
//             cout<<i;
//         }
//     }
// }

/////////minimum steps to reach end of infinite grid
// int Solution::coverPoints(vector<int> &A, vector<int> &B) {
//     int steps = 0;
//     for (int i = 0; i < A.size() - 1; i++){
//         int x1 = A[i];
//         int y1 = B[i];
//         int x2 = A[i+1];
//         int y2 = B[i+1];
//         steps += max(abs(x2 - x1), abs(y2 - y1));
//     }
//     return steps;
//     }

        ///////simulation array//////
// int peekOfArr(){
//        // int arr[]={5,1,4,3,6,8,10,7,9};
//         int arr[]={5,1,4,4};
//         int s=sizeof(arr)/sizeof(arr[0]);
//         int i=1;
//         int left=arr[0];
        
//         if(s<3)
//             return 0;

//         while(i <s-1){

//             if(arr[i] > left)
//             {
//                 left=arr[i];

//                 int j=i+1;

//                 while(j<s)
//                 {
//                     if(arr[j] < left){
//                         i=j;
//                         break;
//                     }
//                     j++;
//                 }
//                 if(j==s)
//                     return 1;
//             }
//             i++;
//         }
//          return 0;  
        



   
//                     ////another approach//////////// 
//     // int leftMax[s];
//     // int rightMin[s];
//     // leftMax[0]=arr[0];
//     // for(int i=1;i<s;i++){

//     //     leftMax[i]=max(leftMax[i-1],arr[i]);
//     // }

//     // rightMin[s-1]=arr[s-1];
//     // for(int i=s-2;i>=0;i--){
//     //     rightMin[i]=min(rightMin[i+1],arr[i]);
//     // }

//     // for(int i=1;i<s-2;i++){
//     //     if(leftMax[i-1]<arr[i] && arr[i] < rightMin[i+1]);
//     //      return 1;
//     // }
//     // return 0;
    
// }

//////pascal trangle
//  int fact(int n){
//     int factorial=1;
//         for(int i=2;i<=n;i++){
//         factorial=factorial*i;
//         }
//         return factorial;
//     }
 void pascalTrangle(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }
//         cout<<endl;
//     } 
    // int temp[5][5];

    // for(int line=0;line<5;line++){

    //     for(int i=0;i<=line;i++){
    //         if(i==0 or line==i){
    //             temp[line][i]=1;
    //         }
    //         else
    //         {
    //            temp[line][i]=temp[line-1][i-1]+temp[line-1][i]; 
    //         }
    //         cout<<temp[line][i]<<" ";           
    //     }
    //     cout<<endl;
    // }

    
 }
    

int main(){
    // cout<<"Resolution of 2021"<<endl;
    //int arr[]={-2,1,-3,4,-1,2,1,-5,4};
   // int s=sizeof(arr)/sizeof(arr[0]);
    //cout<<maxSumContigousArray(arr,s);

    // int arr2[2][2]={{1,2}, {3,4}};            
    // int n=2,m=2;
    // rotateMatrix(arr2,n,m);

    // int arr[]={1,3,4,2,2};
    // int s=sizeof(arr)/sizeof(arr[0]);
    // repeatAndmiss(arr,s);
    //dupInArr(arr,s);
    // int total=0;
    // int a1[]={4,1,4,10};
    // int a2[]={6,2,5,12};
    // for(int i=1;i<4;i++){
    //     int temp=max(abs(a1[i]-a1[i-1]),abs(a2[i]-a2[i-1]));
    //     total+=temp;
    // }
    // cout<<total;
    //maximumTriplet();
    //cout<<peekOfArr();
    pascalTrangle();
    return 0;
}
