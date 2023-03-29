#include<iostream>
using namespace std;
int main(){
	
	//KPK dan Kelipatan MTK
	
	int x,y;
    cin>>x>>y;
    
    if((x>= 0&&x<=1000)&&(y>=0&&y<=1000)&&(x<y)&&(x<=y)){
        for(int z=x ; z<= y; z++){
            
            if(z==0){
                cout<<0<<" ";
            }
            else if(z!=0&&z%15==0){
                cout<<"Lima Belas ";
            }
            else if(z!=0&&z%18==0){
                cout<<"Delapan Belas ";
            }
            else {cout<<z<<" ";}
        }
    }else {cout<<"Input Salah";}

return 0;

}

