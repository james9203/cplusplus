#include<iostream>
using namespace std;
extern void write_extern();
int count;

int main()
{
	count = 5;
	write_extern();
}

