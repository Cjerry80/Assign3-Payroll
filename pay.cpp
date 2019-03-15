#include "person.cpp"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



int readData(Person employees);
void getCompanies(int amount, Person employees);


int main(){

Person vector<int> employees;
Person vector<string> companyNames;

readData(employees);
getCompanies(amount, employees);






return 0;
}

int readData(Person employees){
ifstream infile;
string firstname;
string lastname;
int companyid;
string companyname;
float hoursworked;
float payrate;
infile.open("input.txt");
while(!infile.eof()){

}
}
