#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool hasUppercase(string);
bool hasLowercase(string);
bool hasDigit(string);
bool hasSpecialChar(string);

int main() {
  string password;
  getline(cin,password);
  if(password.length()<8){
    cout<<"length of password is too short";
  }
  else if(!hasUppercase(password)){
    cout<< "Use at least 1 uppercase letter";
  }
  else if(!hasLowercase(password)){
    cout<< "use at least 1 lowercase letter";
  }
  else if(!hasDigit(password)){
    cout<< "Use at least 1 digit";
  }
  else if(!hasSpecialChar(password)){
    cout << "Use at least 1 special character";
  }
  
  return 0;
}

bool hasUppercase(string password) {
    return any_of(password.begin(), password.end(), [](char c) {
        return isupper(c);
    });
}

bool hasLowercase(string password) {
    return any_of(password.begin(), password.end(), [](char c) {
        return islower(c);
    });
}

bool hasDigit(string password) {
    return any_of(password.begin(), password.end(), [](char c) {
        return isdigit(c);
    });
}

bool hasSpecialChar(string password) {
    return any_of(password.begin(), password.end(), [](char c) {
        return !isalnum(c);
    });
}

