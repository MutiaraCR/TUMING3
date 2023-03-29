#include<iostream>
using namespace std;
int main(){
	
	//SEGITIGA ANGKA 5
	
	int p,q;
	cin>>p;
	
	for(int a=0 ; a<p ; a++){
		for(int i=0 ; i<a ; i++){
			cout<<"  ";
		}
		for(int u=p ; u>a ; u--){
			cout<<u<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}
