#include<iostream>
#include<climits>
using namespace std;


int main(){
int n, i,j,k;
    cout << "Enter no. of Elements:";
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}