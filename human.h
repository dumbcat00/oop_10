#pragma once
#include<iostream>
#include <string>

using namespace std;

class Human {
protected:
	std::string surname;
	std::string name;
	std::string mindname;
	int age;
public:
	/*Human() {
		string surname = "";
		string name = "";
		string mindname = "";
		int age = 0;
	}*/
	Human(string surname="", string name="", string mindname="", int age=0) {
		this->surname = surname;
		this->name = name;
		this->mindname = mindname;
		this->age = age;
	}
	virtual void print() = 0;
	~Human() {}

};

class Student : public Human {
private:
	bool on_lesson;
public:
	Student() {
		on_lesson = 0;
	}
	Student(string surname, string name, string mindname, int age, bool on_less):Human(surname, name, mindname, age) {
		this->on_lesson = on_less;
	}
	~Student() {}
	void print() override {
		cout << surname << " " << name << " " << mindname << "; \n" << age << " years old; \non lesson: " << on_lesson<<"\n";
	}

};

class Boss :public Human {
private:
	int number_of_workes;
public:
	Boss() :Human() {
		number_of_workes = 0;
	}
	Boss(string surname, string name, string mindname, int age, int number_of_workes) :Human(surname, name, mindname, age) {
		this->number_of_workes = number_of_workes;
	}
	~Boss(){}
	void print()override {
		cout << surname << " " << name << " " << mindname << ";\n" << age << " years old;\nnumber of work: " << number_of_workes<<"\n";
	}
};