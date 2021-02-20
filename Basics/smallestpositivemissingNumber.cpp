#include <iostream>
using namespace std;


int main(){
int n, i;
const int N=1e6+2;
bool check[N]={0};

    cout << "Enter no. of Elements:";
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=1;
        }
    }

    int ans=-1;
    for(i=0;i<=N;i++){
        if(check[i]==0){
            ans=i;
            break;
        }
    }

    cout<<ans<<endl;
}