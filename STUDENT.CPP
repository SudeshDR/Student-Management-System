#include<iostream.h>
#include<conio.h>
struct Student{
    int rollno;
    char name[50];
    int age;
};

void displayStudent(const Student& student){
    cout<<"Roll no:"<<student.rollno<<endl;
    cout<<"Name   :"<<student.name<<endl;
    cout<<"Age    :"<<student.age<<endl;
    cout<<endl;
}
void main(){
    const int MAX_STUDENTS=3;
    Student students[MAX_STUDENTS];
    for(int i=0;i<MAX_STUDENTS;i++){
	cout<<"Enter details for student"<<i+1<<";"<<endl;
	cout<<"Roll no";
	cin>>students[i].rollno;
	cout<<"Name:";
	cin.ignore();
	cin.getline(students[i].name,50);
	cout<<"Age";
	cin>>students[i].age;
	cout<<endl;
    }
    cout<<"Student details"<<endl;
    for(int j=0;j<MAX_STUDENTS;j++){
	displayStudent(students[i]);
    }
    getch();
}