#include<iostream>
using namespace std;
void nhap_n(int &n){
	cout <<"Hay nhap so n!\n";
	cin >>n; 
} 
int giai_thua(int n){
	int giaithua; 
	if(n==1) return 1;
	else{
		giaithua=n*giai_thua(n-1);
	} 
	return giaithua;
} 
int giai_thua_1(int n){
	if(giai_thua(n)==0) return 1;
	else return giai_thua(n)*giai_thua_1(n-1); 
} 
int main(){
	int n;
	nhap_n(n);
	cout <<"Giai thua cua "<<n<<" la "<<giai_thua(n); 
	cout <<"n\!\! "<<n<<" la "<<giai_thua_1(n); 
} 
