#include "person.h"
#include <iostream>

using namespace std;



Person::Person(){
string firstn;
string lastn;
float taxR;
float hoursW;

}
string Person::getLastName(){
return lastName;
}
void Person::setFirstName(string fName){
firstn = fName;
}
string Person::getFirstName(){
return firstName;
}
void Person::setPayRate(float rate){
taxR = rate;
}
float Person::getPayRate(){
return payRate;

}
void Person::setHoursWorked(float hours){
hoursW = hours;
}
float Person::getHoursWorked(){
return hoursWorked;
}
float Person::totalPay(){

}
string Person::fullName(){

}
