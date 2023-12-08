#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]){
	int i=0,j=0,index=-1;
	while(s2[i]!='\0'){
		if(s2[i]==s1[j]){
			index=i;
		    int m=index;
		    while(s2[m]!='\0'&&s1[j]!='\0'){
			    if(s2[m++]==s1[j++]){
				    m++;
				    j++;
			    }
			    else{
				    break;
			    }
		    }
		}
		if(s1[j]=='\0'){
			return index;
		}
		i++;
	}
	return -1; 
}
int main(){
	const int N=100;
	char s1[N],s2[N];
	cout<<"Enter the first string:";
	cin.getline(s1,N);
	cout<<"Enter the second string:";
	cin.getline(s2,N);
	int index=indexOf(s1,s2);
	cout<<"indexOf(¡°"<<s1<<"¡±,¡°"<<s2<<"¡±) is ";
	cout<<index<<"\n";
	return 0;
}
