#include <iostream>
#include <string>
#include <fstream>
#include "header.h"
using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;
    string spath;
    string tpath;
    list();
    while (x != 3)
    {
        if (x == 1)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            line();
            openFiles();
            encrypt();
            cout << "\n\n\t\t\t#Encryption is Done Succefully#";
            list();
        }
        if (x == 2)
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n')
            cin.clear();
            line();
            openFiles();
            decrypt();
            cout << "\n\n\t\t\t#Decryption is Done Succefully#";
            list();
        }
        if (x != 3 && (x != 2 && x != 1))
        {
            line();
            cout << "\nYou have entered an invalid value,Enter your choose :  ";
            enter_number();
        }
    }

    return 0;
}
