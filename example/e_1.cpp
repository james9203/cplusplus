#include<iostream>
using namespace std;
/*
 * 题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
 */
int main(){
	int i,j,k;
	cout << endl;
	for(i=1;i<5;i++){
		for(j=1;j<5;j++){
			for(k=1;k<5;k++){
				if(i!=j&&i!=k&&j!=k){
					cout << i<<","<<j<<","<<k <<endl;
				}
			}
		}
	}

}
