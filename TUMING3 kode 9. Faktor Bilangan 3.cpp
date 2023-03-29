#include<iostream>
using namespace std;
int main(){
	
	//FAKTOR BILANGAN
	
    int n,A;
    cin>>A;
    for(int n=A; n>0; n--){
        if(A%n == 0){
            cout<< n << " " <<endl;
        }
    }
    return 0;
      
}
