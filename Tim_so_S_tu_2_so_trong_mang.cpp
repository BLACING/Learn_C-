#include "iostream"
using namespace std;
void nhap(int a[], int n){
	cout <<"Nhap cac phan tu cua mang!\n"; 
	for(int i=0; i<n; i++){
	    cout <<"Phan tu thu "<<i<<" la: ";
		cin >>a[i]; 
	} 
} 
void nhap_S(int &S){
	cout <<"Nhap so S muon tim: ";
	cin >>S; 
} 
int tim_S(int a[], int n, int S){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]+a[j]==S){
				cout <<"Hai so co tong bang S la "<<a[i]<<" va "<<a[j];
				return 0;; 
			} 
		} 
	} 
	cout <<"Khong co so nao thoa man!"; 
	return 0; 
} 
int main (){
	int n;
	cout <<"Nhap so phan tu cua mang: ";
	cin >>n;
	int a[n];
	nhap(a, n);
	int S; 
	nhap_S(S); 
    tim_S(a, n, S);
} 
