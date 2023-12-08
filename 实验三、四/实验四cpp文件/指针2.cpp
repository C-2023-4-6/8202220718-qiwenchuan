#include <iostream>
#include <cmath>
using namespace std;
int parseHex(const char *const hexString){
	int dec=0,size1=0;
	while(hexString[size1]!='\0'){
		size1++;
	}
	for(int i=0;i<size1;i++){
		if(hexString[size1-i-1]>='A'&&hexString[size1-i-1]<='F'){
			dec+=(hexString[size1-i-1]-'A'+10)*pow(16,i);
		}
		else if(hexString[size1-i-1]>='0'&&hexString[size1-i-1]<='9'){
			dec+=(hexString[size1-i-1]-'0')*pow(16,i);
		}
		else{
			return 0;
		}
	}
	return dec;
}
int main(){
	const int N=100;
	char hexString[N];
	cout<<"������һ��ʮ��������:";
	cin.getline(hexString,N);
	if(parseHex(hexString)){
	    cout<<"ת�����ʮ������Ϊ:"<<parseHex(hexString)<<"\n";
	}
	else{
		cout<<"�ⲻ��һ����ȷ��ʮ����������"<<"\n";
	}
	return 0;
	
}
