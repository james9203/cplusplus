#include<iostream>
using namespace std;
class Student {
	public:
		char * name;
		int age;
		float score;
	void say(){
		cout << name << "的年龄" << age << ",成绩是" << score << endl;
		//printf("%s的年龄%d,成绩是%f\n",name,age,score);
	}
};
int main(){
	class Student stu1;
	stu1.name = "小明";
	stu1.age = 15;
	stu1.score = 92.5f;
	stu1.say();
	return 0;

}
