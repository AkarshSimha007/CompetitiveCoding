#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int orgn=n;
    int sum=0;

    while(n>0){
        int lastdigit=n%10;
        sum+=lastdigit*lastdigit*lastdigit;
        n=n/10;
    }
    if(sum==orgn){
        cout<<orgn<<" is an Armstrong Number"<<endl;
    }
    else{
        cout<<orgn<<" is not an Armstrong Number"<<endl;
    }
}