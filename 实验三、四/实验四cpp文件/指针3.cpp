#include <iostream>
using namespace std;
int Partition(int a[],int site1,int site2){
	int i=site1,j=site2;
	int x=a[site1];
	while(true){
		while(a[i]<=x&&i<site2){
			i++;
		}
		while(a[j]>x){
			j--;
		}
		if(i>=j){
			break;
		}
		int k=a[i];
		a[i]=a[j];
		a[j]=k;
	}
	a[site1]=a[j];
	a[j]=x;
	return j;
}
void sort(int s[],int site1,int site2){
	if(site1<site2){
		int m=Partition(s,site1,site2);
		sort(s,site1,m-1);
		sort(s,m+1,site2);
		
	}
}
int main(){
	int N;
	cout<<"请输入数组元素个数:";
	cin>>N;
	int*p=new int[N];
	cout<<"请输入数组元素:";
	for(int i=0;i<N;i++){
		cin>>p[i]; 
	}
	sort(p,0,N-1);
	cout<<"排序后数组为:";
	for (int i = 0; i < N; i++) {
	    cout << *(p + i) << " ";
	}
	cout<<"\n";
	delete[] p;
	return 0;
	
}
