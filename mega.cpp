#include <iostream>

using namespace std;

// Declaring Array Globally
 int NumArr[50];
// Printing a string 
void printString(string s){
  cout << s;
}
// Array Input Function
void inputArr(int arrSize)
{   
    if(arrSize <=0 || arrSize >30){
      printString("\nKindly Enter The Correct Size (0-30)");
      exit;
    }
    else {
      cout << "\nEnter array elements" << endl;
      for (int i = 0; i < arrSize; i++)
      {
          cin >> NumArr[i];
      }
    }
}
// Array Printing Function
void printArr(int arrSize)
{
    if(arrSize <=0 || arrSize >30){
      printString("\nCan't Print The Array");
      exit(0);
    }
    else {
      cout << "\nArray elements are:" << endl;
      for (int i = 0; i < arrSize; i++)
          cout << NumArr[i] << " ";
      cout << endl;
    }
}
//linear search 
void linearSearch(int size){
  int s = size;
  int eleToSearch;
  bool found = false;
  printString("Enter The Element You Want To Search : ");
  cin >> eleToSearch;
  for(int i =0;i<=s;i++){
    if(eleToSearch == NumArr[i]){
      cout << "Element Found At Index : " << i << "\n";
      found = true;
      break;
    }
  }
  if(found == false){
    printString("Element Not Found !");
  }
}
//Binary Search
void binarySearch(int size){
  linearSearch(size);
}

// Bubble Sort 
void bubbleSort(int size){
  int temp;
  for(int i =0;i<=size;i++){
    for(int j=0;j<size-1;j++){
      if(NumArr[j]>NumArr[j+1]){
          temp = NumArr[j];
          NumArr[j] = NumArr[j+1];
          NumArr[j+1] = temp;
      }
    }
  }
}
// Main Function
int main() {
  //Initializing varr
   string FullName;   
   int userInput;
  int arrSize;
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
    case 1: // Linear Search 
        printString("Option One Selected : Linear Search\n");
        printString("Enter Size Of Array (0-30)");
        cin >> arrSize;
        inputArr(arrSize);
        printArr(arrSize);
        linearSearch(arrSize);
        break;
    case 2: // Binary Search 
        printString("Option Two Selected : Binary Search\n");
        printString("Enter Size Of Array (0-30)");
        cin >> arrSize;
        inputArr(arrSize);
        printArr(arrSize);
        bubbleSort(arrSize);
        printArr(arrSize);
        binarySearch(arrSize);
        break;
    default:
        printString("Wrong Option Selected\n");
        goto userChoice;
  }
}