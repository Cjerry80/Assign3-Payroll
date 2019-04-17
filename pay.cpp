#include "person.cpp"
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;



void readData(vector<Person> & employees);
void getCompanies(vector<Person> & employees, vector<string> & companyn);
void HighestPaid(vector<Person> & employees);
void separateAndSave(vector<Person> & employees, vector<string> & companyn);

int main(){

vector<Person> employees;
vector<string> companyn;


readData(employees);
getCompanies(employees, companyn);
HighestPaid(employees);
separateAndSave(employees, companyn);





return 0;
}

void readData(vector<Person> employees){
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

void getCompanies(vector<Person> & employees, vector<string> & companyn){
string name;
int count = 0;
  for (int i = 0; i < employees.size(); i++){
    name = employees.at(i).getCompanyName();

    if (companyn.empty())
      companyn.push_back(name);

    for (int j = 0; j < companyn.size(); j++){
      if (name == companyn.at(j))
        count++;
    }
    if (count == 0)
      companyn.push_back(name);
  }

}

void HighestPaid(vector<Person> & employees){
  int num;
  float pay;
  for (int i = 0; i < employees.size(); i++){
    if (pay < employees.at(i).totalpay()){
      pay = employees.at(i).totalpay();
      num = i;
    }
  }
cout << "Highest Paid: " << employees.at(num).fullname() << endl;
cout << "Employee ID: " << employees.at(num).getEmployeeId() << endl;
cout << "Employer: " << employees.at(num).getCompanyName() << endl;
cout << "Total Pay: " << fixed << setprecision(2) << employees.at(num).totalPay() << endl;

}

void separateAndSave(vector<Person> & employees, vector<string> & companyn){
  string companyname;
  vector<Person> vect;

  for (int j = 0; j < companyn.size(); j++)

}
