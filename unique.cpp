#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int f=0;
for(int i=0;i<n;i++){
    f=0;
    for(int j=0;j<n;j++){
       if(i!=j && a[i]==a[j]){
         f++;
       }
    }
    if(f==0){
        cout<<a[i]<<endl;
    }
}
  


}