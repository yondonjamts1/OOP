#include<iostream>
using namespace std;
int main(){
	int i,n,temp = 0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
	cin>>a[i];
	}
	
	for(i=0;i<n;i++){
	if(a[i]%2==0)temp++;
	}
	
	cout<<temp;
}
