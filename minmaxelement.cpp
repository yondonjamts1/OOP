#include<iostream>

using namespace std;

int main(){
	int i,n,min,max;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
        cin>>a[i];
        }
	
	for(i=0;i<n;i++){
	if(a[i]<a[i+1])min=a[i];
	}
	for(i=0;i<n;i++){
	if(a[i]>a[i+1])max=a[i];
	}
	
	cout<<min;
	cout<<max;
}
