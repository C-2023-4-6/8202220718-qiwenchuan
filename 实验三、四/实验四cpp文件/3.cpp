#include <iostream>
using namespace std;

void change(bool desk[],int num){
	if(desk[num]==true){
		desk[num]=false;
	}
	else{
		desk[num]=true;
	}
}
int main(){
	const int N=100;
	bool desk[N]={false};
	for(int i=1;i<=100;i++){
		for(int j=1;j<=100;j++){
			if(j%i==0){
				change(desk,j-1);
			}
		}
	}
	cout<<"开着的柜子有:";
	for(int i=0;i<100;i++){
		if(desk[i]==true){
			cout<<i+1<<" ";
		}
	}
	cout<<"\n";
	return 0;
	
}
