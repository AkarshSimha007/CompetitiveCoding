/*Lomuto partition
Last element is the pivot.
If an element is less than the pivot,the window size of the array containing elements less than pivot is increased by 1.
Used in Quicksort, not stable but auxilary space is O(1) and time complexity is  O(n).
*/

#include <stdio.h>
#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int *temp=a;
    a=b;
    b=temp;
}

void lp(int *a,int l,int h){
    int pivot=a[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    for(int i=l;i<=h;i++){
        cout << a[i] <<" ";
    }
}
int main()
{
    int a[]={10,80,30,90,40,50,70};
    int n=sizeof(a)/sizeof(a[0]);
    lp(a,0,6);

    return 0;
}
