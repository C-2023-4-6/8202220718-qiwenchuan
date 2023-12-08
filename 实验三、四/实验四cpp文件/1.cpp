#include <iostream>
using namespace std;
int main(){
	int N=10;
	int a[N];
	cout<<"Enter ten numbers:";
	for(int i=0;i<N;i++){
		cin>>a[i];
		bool flag=true;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				flag=false;
			}
		}
		if(flag==false){
			i--;
			N--;
		}
	}
	cout<<"The distinct numbers are:";
	for(int i=0;i<N;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
