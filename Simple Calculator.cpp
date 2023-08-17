#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
int Exit = 0;
int FirstNumber = 0;
int SecondNumber = 0;
int Result = 0;
int ResultAddition = 0;
int ResultSubtraction = 0;
int ResultMultiplication = 0;

float FirstNumberDivision = 0;
float SecondNumberDivision = 0;
float ResultDivision = 0;

string QuestionMark = "";
string ExitYesOrNo = "";
string Operation = "";
string addition = "";
string Addition = "";
string subtraction = "";
string Subtraction = "";
string multiplication = "";
string Multiplication = "";
string division = "";
string Division = "";

QuestionMark = "?";

cout << "What is Your First Number" << QuestionMark << endl;
cin >> FirstNumber;

cout << "What is Your Second Number" << QuestionMark << endl;
cin >> SecondNumber;

FirstNumberDivision = FirstNumber;
SecondNumberDivision = SecondNumber;
ResultAddition = (FirstNumber + SecondNumber);
ResultSubtraction = (FirstNumber - SecondNumber);
ResultMultiplication = (FirstNumber * SecondNumber);
ResultDivision = (FirstNumberDivision / SecondNumberDivision);

cout << "What Operation Would You Like To Perform" << QuestionMark << endl;
cin >> Operation;

addition = "addition";
Addition = "Addition";
subtraction = "subtraction";
Subtraction = "Subtraction";
multiplication = "multiplication";
Multiplication = "Multiplication";
division = "division";
Division = "Division";
QuestionMark = "";

if (Operation == addition) {
cout << "Your Result Is: " << ResultAddition << endl; }

if (Operation == Addition) {
cout << "Your Result Is: " << ResultAddition << endl; }

if (Operation == subtraction) {
cout << "Your Result Is: " << ResultSubtraction << endl; }

if (Operation == Subtraction) {
cout << "Your Result Is: " << ResultSubtraction << endl; }

if (Operation == multiplication) {
cout << "Your Result Is: " << ResultMultiplication << endl; }

if (Operation == Multiplication) {
cout << "Your Result Is: " << ResultMultiplication << endl; }

if (Operation == division) {
cout << "Your Result Is: " << ResultDivision << endl; }

if (Operation == Division) {
cout << "Your Result Is: " << ResultDivision << endl; }

ExitYesOrNo = "Exit";
QuestionMark = "?";

cout << ExitYesOrNo << QuestionMark << endl;
cin >> Exit;
return 0;
}
