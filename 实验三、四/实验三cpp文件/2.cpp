#include <iostream>
using namespace std;
bool is_prime(int num){
	for(int i=2;i<num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int count=0,num=2;
	while(count<200){
		if(is_prime(num)){
			cout<<num<<"\t";
			count++;
			if(count%10==0){
				cout<<"\n";
			}
		}
		num++;
	}
	return 0;
}
