#include <iostream>
using namespace std;
/*int main(){

	//BAKLIKKAN ANGKA
    
    int N,a=0;
    cin>>N;
    
    while(N>0){    
        int b=N%10;
        a=a*10+b;
        N=N/10;
    }
    
    cout<<a<endl;
    
    return 0;
}*/

int main(){

    int M,N,n,a=0;
    cin>>M;
    
    for(int i=0 ; i<M ; i++){
        cin>>N;
        n=N;
        int b=n%10;
        a=a*10+b;
        n=n/10;
    }
    cout<<a<<" "<<endl;
    
    return 0;
}


