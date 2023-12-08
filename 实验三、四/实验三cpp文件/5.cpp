#include <iostream>
using namespace std;
int apple_num(int day){
	int num=1;
	while(day>1){
		num=(num+1)*2;
		day--;
		apple_num(day);
	}
	return num;
}
int main(){
	int day=10;
	cout<<"第一天摘的桃子数为:"<<apple_num(day)<<"\n";
	return 0;
}
