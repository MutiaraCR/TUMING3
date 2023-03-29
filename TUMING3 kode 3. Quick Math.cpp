#include<iostream>
using namespace std;
int main(){
	
	//QUICK MATH
	
	float A,h,i,j,k;
	cin>>A;
		
	h=A+A;
	i=h-1;
	j=i*3;
	k=j/2;
	
	if(A<=100000&&A>=1){
	cout<<A<<" plus "<<A<<" is "<<h<<endl<<"Minus one is "<<i<<endl<<"Multiple three is "<<j<<endl<<"divide two is "<<k<<endl;
}else{
		cout<<" ";
}
	return 0;
}
