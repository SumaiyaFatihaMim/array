#include<iostream>
using namespace std;
int dupXor(int a[],int m){
    int ans=0;
    for(int i=0;i<m;i++){
    ans=ans^a[i];
    }
 return ans;
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
 cout<<dupXor(a,n);
}
