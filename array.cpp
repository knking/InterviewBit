#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> repeatedNumber(const vector<int> &V) {
       long long sum = 0;
       long long squareSum = 0;
       long long temp;
       for (int i = 0; i < V.size(); i++) {
           temp = V[i];
           sum += temp;
           sum -= (i + 1);
           squareSum += (temp * temp);
           squareSum -= ((long long)(i + 1) * (long long)(i + 1));
       }
       // sum = A - B
       // squareSum = A^2 - B^2 = (A - B)(A + B)
       // squareSum / sum = A + B
       squareSum /= sum;

       // Now we have A + B and A - B. Lets figure out A and B now. 
       int A = (int) ((sum + squareSum) / 2);
       int B = squareSum - A;

       vector<int> ret;
       ret.push_back(A);
       ret.push_back(B);
       return ret;
    }
};
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int i;
    int n = A.size();
    long long int a,b,c;
    long long int tot, stot;
    long long int sum=0;
    long long int ssum=0;
    vector<int> answer(2,0);
    
    tot = (long long int) n*(n+1)/2;
    stot =(long long int) n*(2*n+1)*(n+1)/6;
    for(i=0;i<n;i++){
        sum += A[i];
        ssum += (long long int) A[i]*A[i];
    }
    
    a = sum-tot;    // x - y
    b = ssum-stot;  // x2 - y2
    c = b/a;        // x + y
    
    answer[0] = (a+c)/2;
    answer[1] = c-answer[0];
    return answer;
}
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int x; int y;
    long long a1; long long b1;
    long long sum=0; long long square_sum=0;
    int n=A.size();
    long long actual_sum=(long long)n*(long long)(n+1)/2;
    long long actual_square_sum=(long long)n*(long long)(n+1)*(long long)(2*n+1)/6; int i;
    
    for(i=0;i<A.size();i++)
    {
        sum=(long long)sum+(long long)A[i]; square_sum=(long long)square_sum+(long long)A[i]*(long long)A[i];
    }
    
    a1=(long long)actual_sum-(long long)sum;    b1=(long long)actual_square_sum-(long long)square_sum;
    x=((long long)b1-(long long)a1*(long long)a1)/(2*a1);  y=(long long)a1+(long long)x;
    
    vector<int> result(2);
    result[0]=x; result[1]=y;
    return result;
}



                    ////Array math

int maxSubArray(const vector<int> &A) {
    int maxSum=INT_MIN,curSum=0;
    for(auto it : A){
         curSum+=it;
         maxSum=max(curSum,maxSum);
         if(curSum<0) curSum=0;
    }
    return maxSum; 
}

                /////Arrangenment
void  rotateMatrix(int arr[2][2],int n,int m){
    ////taking transpose
    for(int row=0;row<n;row++){
        for(int col=row;col<m;col++){
            swap(arr[row][col],arr[col][row]);
        }
    }
    ////reverse row
    for(int r=0;r<n;r++){
       int st=0;
       int en=n-1;
       while(st<en){
           swap(arr[r][st],arr[r][en]);
           st++;
           en--;
       }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
                ////missing and repeated

void repeatAndmiss(int arr[],int s){
    int N=s+1;
    int tempArr[N];
    for(int i=0;i<N;i++){
        tempArr[i]=0;
    }

    for(int i=0;i<s;i++){
        tempArr[arr[i]]++;
    }
    for(int i=1;i<N;i++){
        if(tempArr[i]>1){
            cout<<"repeat : "<<i<<endl;
        }
        if(tempArr[i] < 1){
            cout<<"miss : "<<i<<endl;
        }     
    }
}
        /////Buckting
void dupInArr(int arr[],int s){
    // int x=arr[0];
    // for(int i=1;i<s;i++)
    //     x=x ^ arr[i];
    // return x;

    for(int i=0;i<s;i++){
        arr[arr[i]%s]=arr[arr[i]%s]+s;
    }
    for(int i=0;i<s;i++){
        if(arr[i]/s > 1){
            cout<<i;
        }
    }
}

int main(){
    // cout<<"Resolution of 2021"<<endl;
    //int arr[]={-2,1,-3,4,-1,2,1,-5,4};
   // int s=sizeof(arr)/sizeof(arr[0]);
    //cout<<maxSumContigousArray(arr,s);

    // int arr2[2][2]={{1,2}, {3,4}};            
    // int n=2,m=2;
    // rotateMatrix(arr2,n,m);

    int arr[]={1,3,4,2,2};
    int s=sizeof(arr)/sizeof(arr[0]);
    // repeatAndmiss(arr,s);
    dupInArr(arr,s);
    
    return 0;
}
