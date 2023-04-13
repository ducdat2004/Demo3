#include<bits/stdc++.h>
using namespace std;

struct sinhvien{
	string hoten;
	int namsinh;
	float diemtbtl;
};

struct lop{
	string tenlop;
	int sosv;
	sinhvien *danhsachsv;
};

int main(){
	lop lop[2];
	for(int i=0;i<2;i++){
		cout<<"Nhap thong tin lop ";
		getline(cin,lop[i].tenlop);
		cin>>lop[i].sosv;
		cin.ignore();
		lop[i].danhsachsv=new sinhvien[lop[i].sosv];		
		for(int j=0;j<lop[i].sosv;j++){
			cout<<"Nhap thong tin sinh vien ";
			getline(cin,lop[i].danhsachsv[j].hoten);
			cin>>lop[i].danhsachsv[j].namsinh;
			cin>>lop[i].danhsachsv[j].diemtbtl;
			cin.ignore();
		}
 	} 
 	cout<<lop[0].danhsachsv[1].hoten;
}
	
	
