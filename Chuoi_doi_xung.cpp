#include<iostream>
#include <stdbool.h>
using namespace std;
void nhap_n(int &n){
	cout <<"Hay nhap so n!\n";
	cin >>n; 
} 
bool k_tra(int a[], int batdau, int ketthuc){
	if(batdau>ketthuc){
		return true; 
	} 
	if(a[batdau]!=a[ketthuc]){
		return false; 
	}
	return k_tra(a, batdau+1, ketthuc-1); 
} 
void nhap_a(int a[], int n){
	for(int i=0; i<n; i++){
		cin >>a[i]; 
	} 
} 
int main(){
	int n;
	nhap_n(n); 
	int batdau=0; 
	int ketthuc=n-1;
	int a[n];
	nhap_a(a, n); 
	if(k_tra(a, batdau, ketthuc)) cout <<"Chuoi a la chuoi doi xung!";
	else cout <<"Chuoi a khong la chuoi so duong!"; 
}
