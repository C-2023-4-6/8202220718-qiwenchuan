#include <iostream>
using namespace std;
void maopao(double list[]){
	bool changed=true;
	int N=10;
	do
	{
	changed = false;
	for (int j = 0; j < N-1; j++)
		if (list[j] > list[j+1])
		{
		  double t=list[j];
		  list[j]=list[j+1];
		  list[j+1]=t;
		  changed = true;
		}
	} while (changed);
}
int main(){
	int N=10;
	double list[N];
	cout<<"����������:";
	for(int i=0;i<N;i++){
		cin>>list[i];
	}
	for(int i=0;i<N-1;i++){
		maopao(list);
	}
	cout<<"���������Ϊ:";
	for(int i=0;i<N;i++){
		cout<<list[i]<<" ";
	}
	return 0;
}
