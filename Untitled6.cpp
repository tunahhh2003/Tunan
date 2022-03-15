#include<iostream.h>
int main(){
	float sokw, dongia, thanhtoan;
	cout<<"Nhap so kw tieu thu: ";
	cin>>sokw;
	if(sokw>0&&sokw<=100){
		dongia=2000;
		cout<<"\ndon gia la: "<<dongia;
		thanhtoan=dongia*sokw;
		cout<<"so tien dien ban phai thanh toan la: "<<thanhtoan;
	}else if(sokw>100&&sokw<=200){
		dongia=2500;
		cout<<"\nDon gia la:"<<dongia;
		thanhtoan=(100*2000)+(sokw-100)*dongia;
		cout<<"\nSo tien dien ban phai tra la:"<< thanhtoan<<endl;
	}else if(sokw>200&&sokw<=300){
		dongia=3000;
		cout<<"\nDon gia la:"<<dongia;
		thanhtoan=(100*2000)+(100*2500)+(sokw-200)*dongia;
		cout<<"\nSo tien dien ban phai tra la:"<< thanhtoan<<endl;
	}else{
		dongia=5000;
		cout<<"\nDon gia la:"<<dongia;
		thanhtoan=(100*2000)+(100*2500)+(100*3000)+(sokw-300)*dongia;
		cout<<"\nSo tien dien ban phai tra la:"<< thanhtien<<endl;
	}
} 