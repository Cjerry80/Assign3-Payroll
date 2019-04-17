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

void readData(vector<Person> & employees){
ifstream infile;
string firstname;
string lastname;
int companyid;
string companyname;
float hoursworked;
float payrate;
Person tempvect;
string line;

infile.open("input.txt");

while(!infile.eof()){
infile >> firstname >> lastname >> companyid >> companyname >> hoursworked >> payrate;
tempvect.setFirstName(firstname);
tempvect.setLastName(lastname);
tempvect.setEmployeeId(companyid);
tempvect.setCompanyName(companyname);
tempvect.setHoursWorked(hoursworked);
tempvect.setPayRate(payrate);
employees.push_back(tempvect);

}
employees.pop_back();
infile.close();

}

void getCompanies(vector<Person> & employees, vector<string> & companyn){
string name;

  for (int i = 0; i < employees.size(); i++){
    name = employees.at(i).getCompanyName();
    int count = 0;
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
    if (pay < employees.at(i).totalPay()){
      pay = employees.at(i).totalPay();
      num = i;
    }
  }
cout << "Highest Paid: " << employees.at(num).fullName() << endl;
cout << "Employee ID: " << employees.at(num).getEmployeeId() << endl;
cout << "Employer: " << employees.at(num).getCompanyName() << endl;
cout << "Total Pay: " << fixed << setprecision(2) << employees.at(num).totalPay() << endl;

}

void separateAndSave(vector<Person> & employees, vector<string> & companyn){
  string companyname = " ";
  float totalpay = 0;
  ofstream outfile;

  for (int i = 0; i < companyn.size(); i++){
    companyname = companyn.at(i) + ".txt";
    outfile.open(companyname);

    for (int j = 0; j < employees.size(); j++){
      if (companyn.at(i) == employees.at(j).getCompanyName()){
        outfile << setw(10) << left << employees.at(j).getFirstName() << setw(10) << left << employees.at(j).getLastName() << setw(5) << left << employees.at(j).getEmployeeId() << setw(11) << left << employees.at(j).getCompanyName() << "$" << setw(5) << left << fixed << setprecision(2) << employees.at(j).totalPay() << endl;
        totalpay = totalpay + employees.at(j).totalPay();
      }
    }
    outfile << "Total: " << fixed << setprecision(2) << totalpay;
    outfile.close();
  }

}
