#include<iostream>
using namespace std;

int getMax(int b[],int m){

int max= INT32_MIN;
for(int i=0;i<m;i++){
    if(b[i]>max){
        max=b[i];
    }
}
 return max;
}


int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"Max : "<<getMax(a,n);
}