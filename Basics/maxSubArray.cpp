#include<iostream>
#include<climits>
using namespace std;

//Using Kadane's Algorithm to find the subarray with maximum sum. Time Complexity is O(n)

int main(){
int n, i,maxSum=INT_MIN,currSum;
    cout << "Enter no. of Elements:";
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(i=0;i<n;i++){
        currSum+=a[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }
    cout<<maxSum<<endl;

    
}