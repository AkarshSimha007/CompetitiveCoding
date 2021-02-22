#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
    int currSum=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }
 return maxSum;   
}

int main(){
int n, i,wrapSum,totalSum=0,nonWrapSum;
    cout << "Enter no. of Elements:";
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    nonWrapSum=kadane(a,n);
    
    for(i=0;i<n;i++){
        totalSum+=a[i];
        a[i]=-a[i];
    }
    wrapSum=totalSum+kadane(a,n);
    cout<<max(wrapSum,nonWrapSum);
}