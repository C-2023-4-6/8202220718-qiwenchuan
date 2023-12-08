#include <iostream>
using namespace std;
int indexof(const char *s1,const char *s2){
	int index=-1;
	while(*s2!='\0'){
		if(*s2==*s1){
		    while(*(s2+1)!='\0'&&*(s1+1)!='\0'){
			    if(*(s2+1)==*(s1+1)){
			    	s1++;
			    	s2++;
			    }
			    else{
				    break;
			    }
		    }
		}
		if(*(s1+1)=='\0'){
			return (index+1);
		}
		s2++;
		index++;
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
	char*p1,*p2;
	p1=s1;
	p2=s2;
	int index=indexof(p1,p2);
	cout<<"indexof(¡°"<<s1<<"¡±,¡°"<<s2<<"¡±) is ";
	cout<<index<<"\n";
	return 0;
	
}
