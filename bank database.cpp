#include <bits/stdc++.h>
using namespace std;
class Person {
protected:
    string name;
public:
    void setName(const string &n){
        name=n;
    }
    string getName() const{
        return name;
    }
};
class Student:public Person{
private:
    int id;
    float grade;
public:
    void setID(int i){
        id=i;
    }
    void setGrade(float g){
        grade=g;
    }
    int getID() const{
        return id;
    }
    float getGrade() const{
        return grade;
    }
};
void add(vector<Student> &db){
    Student ns;
    string name;
    int id;
    float grade;
    cout<<"Enter student name: ";
    cin>>name;
    ns.setName(name);
    cout<<"Enter student ID: ";
    cin>>id;
    ns.setID(id);
while(true){
    cout<<"Enter student grade: ";
    cin>>grade;
    if(cin.fail()){
        cout<<"Invalid input. Please enter a valid input.\n";
        cin.clear(); 
        cin.ignore();
    }else{
        break; }
    }
    ns.setGrade(grade);
    db.push_back(ns);
    cout << "Student added successfully.\n";
    cin.ignore();
}
void printdb(const vector<Student> &db){
cout<<"Student Database: \n";
for(const auto &student:db){
    cout<<"Name: "<<student.getName()<<", ID: "<<student.getID()<<", Grade: "<<student.getGrade()<<endl;
    }
}
int main(){
vector<Student> studentdb;
char c;
do{
    cout<<"\nStudent Database Management System\n";
    cout<<"1. Add a student\n";
    cout<<"2. Print database\n";
    cout<<"3. Quit\n";
    cout<<"Enter your choice: ";
    cin>>c;
    switch(c){
        case '1':
            add(studentdb);
            break;
        case '2':
            printdb(studentdb);
            break;
        case '3':
            cout<<"Quitting the program.\n";
            break;
        default:
            cout<<"Invalid choice. Please try again.\n";
        }
    }while(c!='3');
    return 0;
}
