#include <iostream>
void count(int m,int n,int*least_common_multiple,int*pcd){
	if(m<n){
		for(int i=1;i<=m;i++){
			if(m%i==0&&n%i==0){
				*pcd=i;
			}
		}
		for(int j=m*n;j>=n;j--){
			if(j%m==0&&j%n==0){
				*least_common_multiple=j;
			}
		}
	}
	else{
	    for(int i=1;i<=n;i++){
		    if(m%i==0&&n%i==0){
			    *pcd=i;
		    }
	    }
	    for(int j=m*n;j>=m;j--){
			if(j%m==0&&j%n==0){
				*least_common_multiple=j;
			}
		}
	}
} 
using namespace std;
int main(){
	int m,n;
	cout<<"请依次输入m和n:";
	cin>>m>>n;
	int least_common_multiple,pcd;//声明最小公倍数和最大共因数
	int*p1,*p2;
	p1=&least_common_multiple;
	p2=&pcd;
	count(m,n,p1,p2);
	cout<<"最小公倍数为:"<<least_common_multiple<<"\n";
	cout<<"最大公因数为:"<<pcd<<"\n";
	delete p1;
	delete p2;
	return 0;
}
