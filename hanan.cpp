#include <iostream>
#include <string.h>
#include "stdio.h"

using namespace std;
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
		strcpy(names[no], name);
		strcpy(genders[no], gender);
		strcpy(adresses[no], adress);
		strcpy(cities[no], city);
		strcpy(emails[no], email);
		phone = p;
		cout << "Contact saved successfully...\n" << endl;
		no++;
	}
	void search(char name[20])
	{
		int a = 0;
		while (a < 10)
		{
			if (names[a] == name)
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
	int main
	{
        CMS obj;
	    return 0;
	}
\\commit
\\only two functions are there
