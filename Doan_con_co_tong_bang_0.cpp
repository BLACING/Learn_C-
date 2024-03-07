#include "iostream"
#include "algorithm" 
using namespace std;
void nhap(int a[], int n){
	cout <<"Nhap cac phan tu cua mang!\n";
	for(int i=0; i<n; i++){
		cout <<"Phan tu thu "<<i<<": ";
		cin >>a[i]; 
	} 
} 
int tim_doan_con(int a[], int b[], int n){
	int temp=0; 
	for(int i=0; i<n; i++){ 
		b[i]=temp+a[i];
		temp=b[i]; 
		if(b[i]==0){
			cout <<"Doan con co vi tri tu 0 den "<<i;
			return 0; 
		} 
	} 
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(b[i]==b[j]){
				cout <<"Doan con co vi tri tu "<<i+1<<" den "<<j; 
				return 0; 
			} 
		} 
	} 
	cout <<"Khong co doan con nao thoa man ca"; 
	return 0; 
} 
void in_b(int b[], int n){
	cout <<"\nMang b = "; 
	for(int i=0; i<n; i++){
		cout <<b[i]<<" "; 
	} 
} 
int main(){
	int n;
	cout <<"Mang co bao nhieu phan tu: "; 
    cin >>n;
    int a[n], b[n]; 
    fill(b, b+n, 0); 
	nhap(a, n); 
	tim_doan_con(a, b, n); 
	in_b(b, n); 
} 
