#include<iostream>
using namespace std;
void nhap_n(int &n){
	cout <<"Nhap so n: ";
	cin >>n; 
} 
int dem_n(int n){
	if(n<=9) return 1;
	else return 1+dem_n(n/10); 
} 
int main(){
	int n;
	nhap_n(n); 
	cout <<dem_n(n); 
}
