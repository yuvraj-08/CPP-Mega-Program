#include <iostream>

using namespace std;

// Printing a string 
void printString(string s){
  cout << s;
}

int main() {
  //Initializing varr
   string FullName;   
   int userInput;
  int NumArr[50];
  // Getting User's Name
  printString("Enter Your Name : ");
  getline(cin,FullName);
  // Welcoming User
  printString("\n*-*-*-*-*-*-*-*-*-*-*-*\n");
  printString("\tHey "+FullName+" !\n");
  printString("Welcome To Our Program.\n");
  printString("*-*-*-*-*-*-*-*-*-*-*-*\n\n");
  // Asking User What he Wants to Do 
  printString("What would you like to do today ?\n");
  userChoice:
  printString("Select From The Below Options :\n");
  printString("1.Linear Search \n2.Binary Search\n");
  //taking input from user 
  cin >> userInput;
  switch(userInput){
    case 1: 
        printString("Option One Selected : Linear Search\n");
        break;
    case 2:
        printString("Option Two Selected : Binary Search\n");
        break;
    default:
        printString("Wrong Option Selected\n");
        goto userChoice;
  }
}