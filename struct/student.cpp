#include<iostream>
using namespace std;
struct Student{
    char *name;
    int age;
    float score;
};

void display(struct Student stu){
    cout << stu.name << "的年龄" << stu.age << ", 成绩"<< stu.score <<endl;
    //printf("%s的年龄 %d ,成绩 %f\n",stu.name ,stu.age,stu.score);
}
int main(){
	struct Student stu1;
	stu1.name = "小明";
	stu1.age = 15;
	stu1.score = 92.5;
	display(stu1);
}
