#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]){
	int i=0,j=0,k=0;
	while(i<size1&&j<size2){
		if(list1[i]<list2[j]){
			list3[k]=list1[i];
			i++;
		}
		else{
			list3[k]=list2[j];
			j++;
		}
		k++;
	}
	if(i==size1){
		for(int m=j;m<size2;m++){
			list3[k]=list2[m];
			k++;
		}
	}
	if(j==size2){
		for(int m=i;m<size1;m++){
			list3[k]=list1[m];
			k++; 
		}
	}
}
int main(){
	const int Maxsize=80;
	int size1,size2;
	cout<<"Enter list1:";
	cin>>size1;
	int list1[Maxsize],list2[Maxsize];
	for(int i=0;i<size1;i++){
		cin>>list1[i];
	}
	cout<<"Enter list2:";
	cin>>size2;
	for(int i=0;i<size2;i++){
		cin>>list2[i];
	}
	int list3[size1+size2];
	merge(list1,size1,list2,size2,list3);
	cout<<"The merged list is:";
	for(int i=0;i<size1+size2;i++){
		cout<<list3[i]<<" ";
	}
	return 0;
}
