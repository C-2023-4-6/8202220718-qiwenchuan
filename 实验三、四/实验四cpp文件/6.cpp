#include <iostream>
using namespace std;
void count(const char s[], int counts[]){
	int i=0;
	while(s[i]!='\0'){
		if(s[i]>='a'&&s[i]<='z'){
			counts[s[i]-'a']++;
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			counts[s[i]-'A']++;
		}
		i++;
	}
}
int main(){
	const int N=100;
	char s[N];
	int counts[26]={0};
	cout<<"Enter a string:";
	cin.getline(s,N);
	count(s,counts);
	for(int i=0;i<26;i++){
		if(counts[i]!=0){
			cout<<char('a'+i)<<":"<<counts[i]<<" times"<<"\n";
		}
	}
	return 0;
}
