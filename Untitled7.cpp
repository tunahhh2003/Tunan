#include <iostream.h>
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i = n; i >= 1; i--){
		for(int j = 1; j <= i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}