#include<iostream>
using namespace std;
int main(){
	
	//POLA SEGITIGA SAMA KAKI
	
	int p,q;
	cin>>p;
	
	q=p-1;
	
	for(int a=p ; a>0 ; a--){
		for(int i=0 ; i<a ; i++){
			cout<<" ";
		}
		for(int u=p ; u>a ; u--){
			cout<<"*";
		}
		for(int i=q ; i>a ; i--){
			cout<<"*";
		}

		cout<<endl;
	}
	
	return 0;
	
}
