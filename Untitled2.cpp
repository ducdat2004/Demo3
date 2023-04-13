#include<bits/stdc++.h>
using namespace std;
struct hoten{
	string ho, tendem, ten;
};
struct quequan{
	string xa, huyen, tinh;
};
struct diem{
	float toan, ly, hoa;
};
struct PhieuDiem{
	hoten ht;
	quequan qq;
	string truong;
	int tuoi,sbd;
	diem d;
};

int main(){
	PhieuDiem p;
	cin>>p.ht.ho>>p.ht.tendem>>p.ht.ten;
cout<<p.ht;
}

	
	
