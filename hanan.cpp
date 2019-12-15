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
	void searchs(char name[20])
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




	void edit(char name[20])
	{
		int a = 0;
		char choice;
		while (a < 10)
		{
			if (names[a] == name)
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

	// deleted function
	void delete1(char name[20])
{
  int a=0,b=0;
  while(a<10)
  {
    if(names[a]==name)
    {
      while(b<20)
      {
        names[a][b]='0';
        b++;
      }
      cout<<"Contact deleted"<<endl;
phone=0;
break;
    }
    else
    {
      cout<<"No such contact present."<<endl;
      break;
    }
    a++;
  }
}








};
	int main
	{
        cms obj;
  char name[20],adress[40],choice,city[20],gender[20],email[40];
  long phone;
  do {
    cout<<"What do you want to do : "<<endl;
    cout<<"Press N for entering new contact: "<<endl;
    cout<<"Press S for searching contact details: "<<endl;
    cout<<"Press E for editing contact info: "<<endl;
    cout<<"Press D for deleting  contact: "<<endl;
    cout<<"Press C for searching city: "<<endl;
    cin>>choice;
	    return 0;
	}
\\commit
\\only two functions are there
