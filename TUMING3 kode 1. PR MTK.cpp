#include <iostream>
using namespace std; 
int main(){

//PR MTK

float A,B,C,D,E,F,G,H,W,X,Y,Z,h,i,j;
char bk = '('; 
char tk= ')'; 
char p='+'; 
char m = '-';
char t = 'x';

cin>>bk>>A>>p>>B>>tk>>t>>bk>>C>>m>>D>>tk; 
cin>>bk>>E>>p>>F>>tk>>t>>bk>>G>>m>>H>>tk; 
cin>>bk>>W>>p>>X>>tk>>t>>bk>>Y>>m>>Z>>tk;

h=(A+B)*(C-D);
i=(E+F)*(G-H);
j=(W+X)*(Y-Z);

cout<<h<<" "<<i<<" "<<j;

return 0;
}
