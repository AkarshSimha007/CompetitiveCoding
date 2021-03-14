#include<iostream>
using namespace std;

int knapsack(int value[],int weight[],int W,int n){
    if(n==0||W==0){
        return 0;
    }

    if(weight[n-1]>W){
        return knapsack(value,weight,W,n-1);
    }

    return max(knapsack(value,weight,W-weight[n-1],n-1)+value[n-1],knapsack(value,weight,W,n-1));

}

int main(){
    int value[]={100,50,150};
    int weight[]={10,20,30};
    int W=50;
    int n=3;
    cout<<knapsack(value,weight,W,n);
}