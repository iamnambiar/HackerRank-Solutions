// https://www.hackerrank.com/challenges/virtual-functions/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        virtual void getdata(){
            cin>>this->name>>this->age;
        }
        virtual void putdata(){
            cout<<this->name<<" "<<this->age<<" ";
        }
};

class Professor:public Person{
    protected:
        int publications;
        int cur_id;
    public:
        static int id;
        Professor(){
            this->cur_id = ++id;
        }
        void getdata(){
            Person::getdata();
            cin>>this->publications;
        }
        void putdata(){
            Person::putdata();
            cout<<this->publications<<" "<<this->cur_id<<endl;
        }
};

class Student:public Person{
    protected:
        int marks[6];
        int cur_id;
    public:
        static int id;
        Student(){
            this->cur_id = ++id;
        }
        void getdata(){
            Person::getdata();
            for (int i=0; i<6; i++) {
                cin>>marks[i];
            }
        }
        void putdata(){
            Person::putdata();
            int sum = 0;
            for(int i=0; i<6; ++i){
                sum += this->marks[i];
            }
            cout<<sum<<" "<<this->cur_id<<endl;
        }
};
int Professor::id = 0;
int Student::id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
