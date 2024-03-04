#include "iostream"
using namespace std;
//Ham tim so lon thu 2!
int lon_thu_2(int a, int b, int c){
	if((a>b&&b>c)||(c>b&&b>a)){
		return b; 
	} 
	else if((a>c&&c>b)||(b>c&&c>a)){          
		return c;
	} 
	else if((b>a&&a>c)||(c>a&&a>b)){ 
		return a; 
	} 
} 
int main(){
	int a, b, c;
	cout <<"Nhap 3 so a, b, c \n";
	cin >>a>>b>>c;
	cout <<"So lon thu 2 la so: "<<lon_thu_2(a, b, c);  
} 
