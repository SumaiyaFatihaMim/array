#include <iostream>
using namespace std;
int dupXor(int b[],int m){
    int ans=0;
    for(int i=0;i<m;i++){
    ans=ans^b[i];
    }
 for(int i=1;i<m;i++){
    ans=ans^i;
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
 cout<< dupXor(a,n);
}