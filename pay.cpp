#include "person.cpp"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



void readData(int amount, vector<Person> employees);
void getCompanies(int amount, vector<Person> employees, vector<string> companyn);
void HighestPaid(vector<Person> employees);
void separateAndSave();

int main(){

vector<Person> employees;
vector<string> companyn;


readData(amount, employees);
getCompanies(amount, employees, companyn);
HighestPaid(employees);
separateAndSave(employees, companyn);





return 0;
}

void readData(int amount, vector<Person> employees){
ifstream infile;
string firstname;
string lastname;
int companyid;
string companyname;
float hoursworked;
float payrate;

int i = 0;

infile.open("input.txt");

while(!infile.eof()){
infile >> firstname >> lastname >> companyid >> companyname >> hoursworked >> payrate;
employees.at(i).setFirstName(firstname);
employees.at(i).setLastName(lastname);
employees.at(i).setEmployeeId(companyid);
employees.at(i).setCompanyName(companyname);
employees.at(i).setHoursWorked(hoursworked);
employees.at(i).setPayRate(payrate);
i++;
}
infile.close();

}

void getCompanies(int amount, vector<Person> employees, vector<string> companyn){
string name;
int count = 0;
  for (int i = 0; i < employees.size(); i++){
    name = employees.at(i).getCompanyName();

    if (companyn.empty())
      companyn.push_back(name);

    for (int j = 0; j < companyn.size(); i++){
      if (name == companyn.at(j))
        count++;
    }
    if (count == 0)
      companyn.push_back(name);
  }

}

void HighestPaid(){

}

void separateAndSave(){

}
