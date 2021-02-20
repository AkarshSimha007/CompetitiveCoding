#include <iostream>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, mx = -999, rd = 0;

    cout << "Enter no. of Elements:";
    cin >> n;
    int a[n];
    int N=1e6+2;
    int idx[N]={-1};
    int minidx=INT_MAX;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(i=0;i<n;i++){
        if(idx[a[i]!=-1]){
            minidx=min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }

}