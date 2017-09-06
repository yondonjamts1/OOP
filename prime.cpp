#include<iostream>
using namespace std;

int main(){
	int a = 0,b,c,i;
	cin>>b;
	for(i=0;i<=b/2;i++){
	if(b&i==0){
		a = 1;
		break;
		}
	}
	
	if(a==1)cout<<"anxnii";
	else cout<<"anxnii bish";
}
