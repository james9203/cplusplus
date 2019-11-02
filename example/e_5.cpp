#include<iostream>
using namespace std;
int main()
{
	int x,y,z,t;
	char c;
	cin>>x>>c>>y>>c>>z;
	if(x>y){
		t=x;
		x=y;
		y=t;	
	}
	if(x>z){
		t=z;
		z=x;
		x=t;
	}
	if(y>z){
		t=y;
		y=z;
		z=t;
	}
	cout<<"从小到大排序"<<x<<","<<y<<","<<z<<endl;
	return 0;

}
