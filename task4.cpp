#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    char *str = new char [1024];
    int i=0;
    ifstream base("text.txt");
    while (!base.eof())
    {
        base.getline(str, 1024, '\n');
        i++;
    }
    base.close();
    delete str;
    cout << i << '\n';
    return 0;
}
