#include "person.cpp"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



int readData(int amount, vector<Person> employees);
void getCompanies(int amount, vector<Person> employees, vector<string> companyn);
void HighestPaid();
void separateAndSave();
int main(){

vector<Person> employees;
vector<string> companyn;
int amount = 0;

readData(amount, employees);
getCompanies(amount, employees, companyn);






return 0;
}

int readData(int amount, vector<Person> employees){
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
employees[i].setFirstName(firstname);
employees[i].setLastName(lastname);
employees[i].setEmployeeId(companyid);
employees[i].setCompanyName(companyname);
employees[i].setHoursWorked(hoursworked);
employees[i].setPayRate(payrate);
i++;
}
infile.close();
amount = i;
return amount;
}

void getCompanies(int amount, vector<Person> employees, vector<string> companyn){


}

void HighestPaid(){

}

void separateAndSave(){

}
