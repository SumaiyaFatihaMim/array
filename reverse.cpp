#include<iostream>
using namespace std;
void reverse(int b[],int m){
    int start=0;
    int end=m-1;
    while(start<=end)
    {
        swap(b[start],b[end]);
        start++;
        end--;
    }
}
    void printArray(int a[],int f){
       for(int i=0;i<f;i++) {
        cout<<a[i];
        }

    }

int main(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
reverse (a,n);  
printArray(a,n);

}