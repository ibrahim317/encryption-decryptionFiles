#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;
int x;
ifstream infile;
ofstream outfile;
string spath;
string tpath;

void line()
{
    for (int i = 0; i < 80; i++)
    {
        cout << "-";
    }
}
void enter_number()
{
    cin >> x;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void list()
{
    cout << "\n\nType 1 to encrypt your file \nType 2 to decrypt your file \nType 3 to exit\n";
    for (int i = 0; i < 80; i++)
    {
        cout << "-";
    }
    cout << "\n Enter your choose :  ";
    enter_number();
}
void decrypt()
{
    string contant;
    for (int i = 0; infile.eof() != true; i++)
    {
        contant += infile.get() - '*';
    }
    outfile << contant;
    outfile.close();
    infile.close();
}
void encrypt()
{
    string contant;
    for (int i = 0; infile.eof() != true; i++)
    {
        contant += infile.get() + '*';
    }
    outfile << contant;
    outfile.close();
    infile.close();
}
void openError()
{
    while (infile.fail())
    {
        line();
        cout << "\n can't find the file in the path that you entered please cheak the name \n";
        line();
        cout << "\n inter the path of the file that you want to work with : ";
        cin >> spath;
        infile.open(spath);
    }
}
void openFiles()
{
    cout << "\n inter the path of the file that you want to work with : ";
    cin >> spath;
    infile.open(spath);
    openError();
    line();
    cout << "\n inter the path of the target file : ";
    cin >> tpath;
    outfile.open(tpath);
}
