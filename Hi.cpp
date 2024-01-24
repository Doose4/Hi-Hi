#include <iostream>
#include <string>
using namespace std;

int strcmp_case_insensitive(string Str1, string Str2) {
    //Checks that the lengths of the strings match and returns results
    if (Str1.length() > Str2.length()) {
        return -1;
    }
    else if (Str1.length() < Str2.length()) {
        return 1;
    }

    //Checks each character for matching.
    for (int i = 0; i < Str1.length(); i++) {
        if (toupper(Str1[i]) > toupper(Str2[i])) {
            return 1;
        }
        else if (toupper(Str1[i]) < toupper(Str2[i])) {
            return -1;
        }
    }
    //returns 0 if the strings are exactly the same
    return 0;

}


int main()
{
    string Uinput1, Uinput2;

    //Takes user inputs for both strings
    cout << "Please Enter a string that you want to compare: \n";
    getline(cin, Uinput1);
    cout << "Please Enter the comparison string: \n";
    getline(cin, Uinput2);

    //prints out the results to the user
    cout << "The comparison of """ << Uinput1 << """ and """ << Uinput2 << """ returns: " << strcmp_case_insensitive(Uinput1, Uinput2);

    return 0;
}