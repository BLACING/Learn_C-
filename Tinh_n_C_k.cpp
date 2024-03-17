#include<iostream>
using namespace std;
void nhap_n(int &n){
	cout <<"So phan tu n: ";
	cin >>n; 
} 
void nhap_k(int &k){
	cout <<"So chap k: ";
	cin >>k; 
} 
int n_C_k(int n, int k){
	if(k==0||k==n) return 1;
	else return n_C_k(n-1, k)+n_C_k(n-1, k-1); 
} 
int main(){
	int n, k;
	nhap_n(n);
	nhap_k(k); 
	cout <<"To hop chap "<<k<<" cua "<<n<<" phan tu la: "<<n_C_k(n, k); 
} 
