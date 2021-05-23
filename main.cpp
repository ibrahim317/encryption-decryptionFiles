#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    ofstream outfile;
    string spath;
    string tpath;
    int x;
    cout << "\n\nType 1 to encrypt your file \nType 2 to decrypt your file \nType 3 to exit\n";
    for (int i = 0; i < 80; i++)
    {
        cout << "-";
    }
    cout << "\n Enter your choose :  ";
    cin >> x;
    while (x != 3)
    {
        if (x == 1)
        {
            for (int i = 0; i < 80; i++)
            {
                cout << "-";
            }
            cout << "\n inter the path of the file that you want to encrypt : ";
            cin >> spath;
            infile.open(spath);
            while (infile.fail())
            {
                cout << "can't find the file in the path that you intered please cheak the name";
                cout << "\n inter the path of the file that you want to encrypt : ";
                cin >> spath;
                infile.open(spath);
            }
            cout << "\n inter the path of the target file : ";
            cin >> tpath;
            outfile.open(tpath);
            string contant;
            for (int i = 0; infile.eof() != true; i++)
            {
                contant += infile.get() + '*';
            }
            outfile << contant;
            infile.close();
            outfile.close();
            cout << "\n\n\t\t\t#Encryption is Done Succefully#";
            cout << "\n\nType 1 to encrypt your file \nType 2 to decrypt your file \nType 3 to exit\n";
            for (int i = 0; i < 80; i++)
            {
                cout << "-";
            }
            cout << "\n Enter your choose :  ";
            cin >> x;
        }
        if (x == 2)
        {
            for (int i = 0; i < 80; i++)
            {
                cout << "-";
            }
            cout << "\n inter the path of the file that you want to decrypt : ";
            cin >> spath;
            infile.open(spath);
            while (infile.fail())
            {
                cout << "can't find the file in the path that you intered please cheak the name";
                cout << "\n inter the path of the file that you want to decrypt : ";
                cin >> spath;
                infile.open(spath);
            }
            cout << "\n inter the path of the target file : ";
            cin >> tpath;
            outfile.open(tpath);
            string contant;
            for (int i = 0; infile.eof() != true; i++)
            {
                contant += infile.get() - '*';
            }
            outfile << contant;
            infile.close();
            outfile.close();
            cout << "\n\n\t\t\t#Decryption is Done Succefully#";
            cout << "\n\nType 1 to encrypt your file \nType 2 to decrypt your file \nType 3 to exit\n";
            for (int i = 0; i < 80; i++)
            {
                cout << "-";
            }
            cout << "\n Enter your choose :  ";
            cin >> x;
        }
        if (x != 1 && (x != 2) || (x != 3))
        {
            cout << "You have entered an invalid value,Enter your choose :  ";
            cin >> x;
        }
    }

    return 0;
}
