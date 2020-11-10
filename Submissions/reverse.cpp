#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t>0){
        int r,rev;
        cin>>n;
        while(n>0){
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        cout<<rev<<endl;
        rev=0;
        t--;
    }
}