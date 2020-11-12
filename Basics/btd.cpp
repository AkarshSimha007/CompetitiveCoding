#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int x=1,sum=0;
    while(n>0){
        int y=n%10;
        sum+=x*y;
        x*=2;
        n=n/10;
    }
    return sum;
}

int octalToDecimal(int n){
    int x=1,sum=0;
    while(n>0){
        int y=n%10;
        sum+=x*y;
        x*=8;
        n=n/10;
    }
    return sum;
}

int hexadecToDecimal(string n){
    int x=1,sum=0;
    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            sum+=x*(n[i]-'0');
        }
        else if(n[i]>='A'&&n[i]<='F'){
            sum+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return sum;
}



int main(){
    int n,o;
    string h;
    
    cout<<"Enter a Binary Nummber:";
    cin>>n;
    cout<<"Binary to Decimal is "<<binaryToDecimal(n)<<endl;
    
    cout<<"Enter an octal Nummber:";
    cin>>o;
    cout<<"Octal to Decimal is "<<octalToDecimal(o)<<endl;

    cout<<"Enter a Hexa-Decimal Nummber:";
    cin>>h;
    cout<<"Hexa-Decimal to Decimal is "<<hexadecToDecimal(h)<<endl;
}