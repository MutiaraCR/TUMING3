#include<iostream>
using namespace std;
int main()
{
	//FIBONNACCI
	
    int n,o,p,q;
    
    p = 0;
    q = 1;
    
    cin>>n;
    
    for(int i=0; i<n; i++){
        cout<<p<< " ";
        o=p+q;
        q=p;
        p=o;
    }
    
    return 0;
}
