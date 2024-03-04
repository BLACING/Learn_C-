#include "iostream"
using namespace std;
//Ham tim so lon thu 2 trong 3 so a, b, c!
void lon_thu_2(int a, int b, int c){
	int max, min, max_2; 
	if(a>b){
		max=a;
		min=b; 
	} 
	else{
		max=b;
		min=a; 
	} 
	if(c>min&&c<max){
		cout <<"So lon thu 2 la so: "<<c; 
	} 
	else{
		if(c>max) cout <<"So lon thu 2 la so: "<<max;
		else  cout <<"So lon thu 2 la so: "<<min;
	}
} 
int main(){
	int a, b, c;
	cout <<"Nhap 3 so a, b, c \n";
	cin >>a>>b>>c;
	lon_thu_2(a, b, c); 
} 
