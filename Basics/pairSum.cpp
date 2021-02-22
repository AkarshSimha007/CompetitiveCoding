#include<iostream>
#include<climits>
using namespace std;


//Computing the pair sum in an array. Array should be sorted. Time complexity is O(n).

bool pairSum(int arr[],int n,int k){
    int low=0,high=n-1;

    while(low<high){
        if(arr[low]+arr[high]==k){
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
int n, i,k;
    cout << "Enter no. of Elements:";
    cin >> n;
    
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"Enter the Pair Sum:";
    cin>>k;

    cout<<pairSum(a,n,k);
}

