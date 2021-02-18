#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i,j=2,curr=2,ans=2,a[60];
    cout<<"Enter no. of Elements:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int pd=a[1]-a[0];
    
    while(j<n){
        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    
    cout<<ans<<endl;
    
    
}