#include <iostream>
using namespace std;
int main(){
	
	//MEMBANDINGKAN 2 ANGKA
	
    int a1,a2;
    cin>>a1;
	cin>>a2;
    
    if((a1>0&&a1<=100)&&(a2>0&&a2<=100)){
    if(a1==a2){
        cout<<a1<<" == "<<a2<<endl;
    }
	else if(a1!=a2){
        cout<<a1<<" != "<<a2<<endl;
    }
	if(a1<a2){
        cout<<a1<<" < "<<a2<<endl;
    }
	if(a1<=a2){
        cout<<a1<<" <= "<<a2<<endl;
    }
	else if(a1>a2){
        cout<<a1<<" > "<<a2<<endl;
    }
	if(a1>=a2){
        cout<<a1<<" >= "<<a1<<endl;
        
    }
    }
	else{
        cout<<"INPUTAN SALAH"<<endl;
    }
    
    return 0;
}
