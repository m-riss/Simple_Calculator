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
Result = (FirstNumber + SecondNumber);
cout << "Your Result Is: " << Result << endl;
}

if (Operation == Addition) {
Result = (FirstNumber + SecondNumber);
cout << "Your Result Is: " << Result << endl;
}

if (Operation == subtraction) {
Result = (FirstNumber - SecondNumber);
cout << "Your Result Is: " << Result << endl;
}

if (Operation == Subtraction) {
Result = (FirstNumber - SecondNumber);
cout << "Your Result Is: " << Result << endl; }

if (Operation == multiplication) {
Result = (FirstNumber * SecondNumber);
cout << "Your Result Is: " << Result << endl;
}

if (Operation == Multiplication) {
Result = (FirstNumber * SecondNumber);
cout << "Your Result Is: " << Result << endl;
}








ExitYesOrNo = "Exit";
QuestionMark = "?";

cout << ExitYesOrNo << QuestionMark << endl;
cin >> Exit;
return 0;
}
