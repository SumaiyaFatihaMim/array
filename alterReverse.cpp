#include<iostream>
using namespace std;
void alterReverse(int b[],int m){
    for(int i=0;i<m;i+=2){
        while(i+1<m)
        {
        swap (b[i],b[i+1]);
        }
    }

}

void printArray(int c[],int f){
    for(int i=0;i<f;i++){
        cout<<c[i];
    }
}



int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

alterReverse(a,n);
printArray(a,n);

}