#include <iostream>
#include <string>
using namespace std;
class cms{
private:
char names[10][20];
char adresses[10][40];
char cities[10][20];
char genders[10][20];
char emails[10][40];
long phones[10]={0};
int no=0;
public:
void new(char name[20],char gender[20],char adress[40],char city[20],char email[40],long phone)
{
  strcpy(names[no],name);
  strcpy(genders[no],gender);
  strcpy(adresses[no],adress);
  strcpy(cities[no],city);
  strcpy(emails[no],email);
  phones[no]=phone;
cout<<"Contact saved successfully...\n"<<endl;
  no++;
}
void search(char name[20])
{
  int a=0;
  while(a<10)
  {
    if(strcmp(names[a],name)==0)
    {
      cout<<"Yes,the contact is present:"<<endl;
      cout<<"Details for a conatct r given below:\nName of a person is '%s'.\n"<<names[a]<<endl;
      cout<<"Gender of a person is '%s'.\nAdress of a person is(HO#,ST#) '%s'.\n"<<genders[a]<<adresses[a]<<endl;
      cout<<"City from which the person belong is '%s'.\nEmail is '%s'.\nPhone no is '%ld'.\n"<<cities[a]<<emails[a]<<phones[a]<<endl;
      break;
    }
    else
    {cout<<("No such person exists in the list."<<endl;
    break;
    }
    a++;
  }
}
void edit(char name[20])
{
  int a=0;
  char choice;
  while(a<10)
  {
    if(strcmp(names[a],name)==0)
    {
      do
      {
      cout<<"What u want to change?"<<endl;
      cout<<"Change Name(N)"<<endl;
      cout<<"Change gender(G)"<<endl;
      cout<<"Change adress(A)"<<endl;
      cout<<"Change City(C)"<<endl;
      cout<<"Change Email(E)"<<endl;
      cout<<"Change phone no(P)"<<endl;
      cin>>" %c">>&choice>>endl;
    switch (choice)
      {
        case 'N':
      cout<<"Enter new name:"<<endl;
      cin>>"%s">>names[a];
      break;
      case 'G':
      cout<<"Enter new gender:"<<endl;
      cin>>"%s">>genders[a];
      break;
      case 'A':
      cout<<"Enter new adress:\nFormate should be(ho#,street#):"<<endl;
      cin>>"%s">>adresses[a];
      break;
      case 'C':
      cout<<"Enter new city:"<<endl;
      cin>>"%s">>cities[a];
      break;
      case 'E':
      cout<<"Enter new email:"<<endl;
      cin>>"%s">>emails[a];
      break;
      case 'P':
      cout<<"Enter new phone no:"<<endl;
      cin>>"%ld">>&phones[a];
      break;
      default:
      cout<<"Please sir/mam,enter a valid choice:"<<endl;
}
cout<<"Press E for Ending & any other variable to continue: "<<endl;
cin>>" %c">>&choice;
}while(choice!='E');
cout<<"Contact updated"<<endl;
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
void delete(char name[20])
{
  int a=0,b=0;
  while(a<10)
  {
    if(strcmp(names[a],name)==0)
    {
      while(b<20)
      {
        names[a][b]='0';
        b++;
      }
      cout<<"Contact deleted"<<endl;
phones[a]=0;
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
void city_search(char city[20])
{
  int a=0,b=0;
  while(a<10)
  {
    if(strcmp(cities[a],city)==0)
    {
      cout<<"%s lives in a same city.\n"<<names[a]<<;
    b++;
  }
  a++;
  }
  if(b!=0)
  {
     cout<<"There r %d no of persons living in the city(%s) and their names r given above;"<<b<<city<<endl;
     }
else
cout<<"No one lives in a same specific region"<<endl;
}
};

int main()
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
    cin>>" %c">>&choice;
    switch (choice)
  {case 'N':
  cout<<"Enter  Name?"<<endl;
  cin>>"%s">>name;
  cout<<"Enter adress?\nFormate should be(ho#,street#)"<<endl;
  cin>>"%s">>adress;
  cout<<"Enter gender?"<<endl;
  cin>>"%s">>gender;
  cout>>"Enter city?"<<endl;
  cin>>"%s">>city;
  cout<<"Enter email?"<<endl;
  cin>>"%s">>email;
  cout<<"Enter phone?"<<endl;
  cin>>"%ld">>&phone;
  new(name,gender,adress,city,email,phone);
  break;
  case 'S':
  cout<<"Enter name u want to search?"<<endl;
  cin>>"%s">>name;
  obj.search(name);
  break;
  case 'E':
  cout<<"Enter name of contact u want to edit?"<<endl;
  cin>>"%s">>name;
  obj.edit(name);
  break;
  case 'D':
  cout<<"Enter name u want to del?"<<endl;
  cin>>"%s">>name;
  obj.delete(name);
  break;
  case 'C':
  cout<<"Enter city u want to search peaple from?"<<endl;
  cin<<"%s"<<city;
  obj.city_search(city);
  break;
  default:
  cout<<"Please enter a valid choice!"<<endl;
  }
  cout<<"Press E for Ending & any other variable for continue: "<<endl;
  cin>>" %c">> &choice;

  } while(choice!='E');


//file has errors

  return 0;
}


cout<<"wajeeh;
