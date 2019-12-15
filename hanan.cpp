#include <iostream>
#include <string.h>
#include "stdio.h"

using namespace std;
class ems {
private:
	long ids[10];
	char names[10][20];
	char roles[10][20];
	int salarys[10];
	int no;

public:

	ems() {
		no = 0;
	}
	void new_emp(char name[20], long id, char role[20], int salary)
	{
		strcpy_s(names[no], name);
		strcpy_s(roles[no], role);
		salarys[no] = salary;
		ids[no] = id;
		cout << "employee details saved" << endl;
		no++;
	}
	void search(long id)
	{
		int a = 0;
		while (a < 10)
		{
			if (id == ids[a])
			{
				cout << "YES,The employee is present and have details:" << endl;
				cout << "Name is " << names[a] << endl;
				cout << "Role is " << roles[a] << endl;
				cout << "Salary is " << salarys[a] << endl;
				cout << "id is " << ids[a] << endl;
				break;

			}
			else
			{
				cout << "No employee with this id" << endl;
				break;
			}
			a++;
		}
	}
	void edit(long id)
	{
		int a = 0;
		while (a < 10)
		{
			if (id == ids[a])
			{
				cout << "Enter new Name?" << endl;
				cin >> names[a];
				cout << "Enter new role?" << endl;
				cin >> roles[a];
				cout << "Enter new salary?" << endl;
				cin >> salarys[a];
				cout << "Enter new id?" << endl;
				cin >> ids[a];
				break;
			}
			else
			{
				cout << "No such id present in our list sir!" << endl;
				break;
			}
			a++;
		}
	}
	void deletes(long id)
	{
		int a = 0;
		while (a < 10)
		{
			if (id == ids[a])
			{
				ids[a] = 0;
				salarys[a] = 0;
				cout << "employee deleted" << endl;
				break;
			}
			else
			{
				cout << "No such id/person present" << endl;
				break;
			}
			a++;
		}
	}
	void search_sal(int salary)
	{
		int a = 0, b = 0;
		while (a < 10)
		{
			if (salarys[a] >= salary)
			{
				cout << "ID of a person with salary greater than %d is %ld." << salary << ids[a] << endl;
				b++;
			}
			a++;
		}
		if (b != 0)
			cout << "There r %d peaple with salary higher then %d and there ids r given above." << b << salary << endl;
		else
			cout << "There r no such employee." << endl;
	}
};

class cms {

private:
	char names[10][20];
	char adresses[10][40];
	char cities[10][20];
	char genders[10][20];
	char emails[10][40];
	long phone;
	int no;


public:

	cms() {
		no = 0;

	}
	void new1(char name[20], char gender[20], char adress[40], char city[20], char email[40], long p)
	{
		strcpy_s(names[no], name);
		strcpy_s(genders[no], gender);
		strcpy_s(adresses[no], adress);
		strcpy_s(cities[no], city);
		strcpy_s(emails[no], email);
		phone = p;
		cout << "Contact saved successfully...\n" << endl;
		no++;
	}
	void search(char name[20])
	{
		int a = 0;
		while (a < 10)
		{
			if (strcmp(names[a], name)==0)
			{
				cout << "Yes,the contact is present:" << endl;
				cout << "Details for a conatct r given below:\nName of a person is '%s'.\n" << names[a] << endl;
				cout << "Gender of a person is '%s'.\nAdress of a person is(HO#,ST#) '%s'.\n" << genders[a] << adresses[a] << endl;
				cout << "City from which the person belong is '%s'.\nEmail is '%s'.\nPhone no is '%ld'.\n" << cities[a] << emails[a] << phone << endl;
				break;
			}
			else
			{
				cout << "No such person exists in the list." << endl;
				break;
			}
			a++;
		}
	}
	void edit(char name[20])
	{
		int a = 0;
		char choice;
		while (a < 10)
		{
			if (strcmp(names[a], name) == 0)
			{
				do
				{
					cout << "What u want to change?" << endl;
					cout << "Change Name(N)" << endl;
					cout << "Change gender(G)" << endl;
					cout << "Change adress(A)" << endl;
					cout << "Change City(C)" << endl;
					cout << "Change Email(E)" << endl;
					cout << "Change phone no(P)" << endl;
					cin >> choice;
					switch (choice)
					{
					case 'N':
						cout << "Enter new name:" << endl;
						cin >> names[a];
						break;
					case 'G':
						cout << "Enter new gender:" << endl;
						cin >> genders[a];
						break;
					case 'A':
						cout << "Enter new adress:\nFormate should be(ho#,street#):" << endl;
						cin >> adresses[a];
						break;
					case 'C':
						cout << "Enter new city:" << endl;
						cin >> cities[a];
						break;
					case 'E':
						cout << "Enter new email:" << endl;
						cin >> emails[a];
						break;
					case 'P':
						cout << "Enter new phone no:" << endl;
						cin >> phone;
						break;
					default:
						cout << "Please sir/mam,enter a valid choice:" << endl;
					}
					cout << "Press E for Ending & any other variable to continue: " << endl;
					cin >> choice;
				} while (choice != 'E');
				cout << "Contact updated" << endl;
				break;
			}
			else
			{
				cout << "No such contact present." << endl;
				break;
			}
			a++;
		}
	}
	void delete1(char name[20])
	{
		int a = 0, b = 0;
		while (a < 10)
		{
			if (strcmp(names[a], name) == 0)
			{
				while (b < 20)
				{
					names[a][b] = '0';
					b++;
				}
				cout << "Contact deleted" << endl;
				phone = 0;
				break;
			}
			else
			{
				cout << "No such contact present." << endl;
				break;
			}
			a++;
		}
	}
	void city_search(char city[20])
	{
		int a = 0, b = 0;
		while (a < 10)
		{
			if (strcmp(cities[a] , city)==0)
			{
				cout << "lives in a same city.\n" << names[a];
				b++;
			}
			a++;
		}
		if (b != 0)
		{
			cout << "There r" << b << "no of persons living in the city and their names r given above;" << city << endl;
		}
		else
			cout << "No one lives in a same specific region" << endl;
	}
};

int main()
{
	cms obj;
	char name[20], adress[40], choice, city[20], gender[20], email[40];
	long phone;
	do {
		cout << "What do you want to do : " << endl;
		cout << "Press N for entering new contact: " << endl;
		cout << "Press S for searching contact details: " << endl;
		cout << "Press E for editing contact info: " << endl;
		cout << "Press D for deleting  contact: " << endl;
		cout << "Press C for searching city: " << endl;
		cin >> choice;
		switch (choice)
		{
		case 'N':
			cout << "Enter  Name?" << endl;
			cin >> name;
			cout << "Enter adress?\nFormate should be(ho#,street#)" << endl;
			cin >> adress;
			cout << "Enter gender?" << endl;
			cin >> gender;
			cout << "Enter city?" << endl;
			cin >> city;
			cout << "Enter email?" << endl;
			cin >> email;
			cout << "Enter phone?" << endl;
			cin >> phone;
			obj.new1(name, gender, adress, city, email, phone);
			break;
		case 'S':
			cout << "Enter name u want to search?" << endl;
			cin >> name;
			obj.search(name);
			break;
		case 'E':
			cout << "Enter name of contact u want to edit?" << endl;
			cin >> name;
			obj.edit(name);
			break;
		case 'D':
			cout << "Enter name u want to del?" << endl;
			cin >> name;
			obj.delete1(name);
			break;
		case 'C':
			cout << "Enter city u want to search peaple from?" << endl;
			cin >> city;
			obj.city_search(city);
			break;
		default:
			cout << "Please enter a valid choice!" << endl;
		}
		cout << "Press E for Ending & any other variable for continue: " << endl;
		cin >> choice;

	} while (choice != 'E');




	return 0;
}
