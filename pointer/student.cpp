#include<iostream>
using namespace std;

class Student{
	public:
		char *name;
		int age;
		float score;
		
		void say(){
			cout << name << "年龄是"<<age<<",成绩是"<< score << endl;
		}
};
int main(){
	Student *pStu = new Student;
	pStu->name = "小明";
	pStu->age = 15;
	pStu->score = 92.5f;
	pStu->say();
	delete pStu;

	return 0;
}


