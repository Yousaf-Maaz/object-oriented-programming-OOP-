#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// main function..
int main()
{

    int option;
    cout << "********************************************\n";
    cout << "This program is used for diary\n ";
    while (option != 3)
    {
        cout << "\n------------------------------------------------------\n";
        cout << "Please choose option\n";
        cout << "1.Add an entry to the journal:\n";
        cout << "2.Display the journal:\n";
        cout << "3.Exit:\n";
        cin >> option;

        if (option == 1)
        {
            string reading;
            cout << "----------------------------------\n";
            cout << "Enter the line for journal:\n";
            cin.ignore();
            getline(cin, reading);
            fstream filename;
            filename.open("journal.txt", ios::app);
            filename << reading << endl;
            filename.close();
        }
        else if (option == 2)
        {
            ifstream filename;
            filename.open("journal.txt", ios ::app);

            string lines;
            while (getline(filename, lines))
            {
                cout << lines << endl;
            }
            filename.close();
        }
        else if (option == 3)
        {
            break;
        }
    }

    return 0;
}
