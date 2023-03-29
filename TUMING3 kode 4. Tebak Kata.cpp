#include <iostream>
using namespace std;

	//TEBAK KATA

int main(){
    int a,b=1;
    int c=0;
    string e,o;

    cin>>a;
    cin>>e;

    if(a>0 && a<11){
        for(int i=1;i<=a;i++){
		cin>>o;
        if(o==e){ c++;
        if(b==a){
		cout<<"MENANG "<<c; 
        }
        }
        else if(b>=a){
		cout<<"KALAH "<<c;
        }
        b++;
        }
        }
        else{
		cout<<"INPUTAN SALAH";
        }
        
        return 0;
}
