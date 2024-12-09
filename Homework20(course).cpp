/*1)
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    ifstream inputFile(argv[1]);
    if (!inputFile)
    {
        cerr << "Error: Could not open file " << argv[1] << endl;
        return 1;
    }

    char ch;

    while (inputFile.get(ch))
    {
        if (isprint(ch) || isspace(ch))
        {
            cout << ch;
        }
    }

    inputFile.close();

    return 0;
}
*/
/*2)
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    
    if (argc <= 1)
    {
        cout << "No arguments provided." << endl;
        return 0;
    }

    cout << "Arguments in reverse order:" << endl;
    for (int i = argc - 1; i > 0; --i)
    {
        cout << argv[i] << endl;
    }

    return 0;
}
*/
