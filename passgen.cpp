#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int size = sizeof(alphanum) - 1;

int main()
{
        //password length
        int length;
        cout << "Enter the length of password : ";
        cin >> length;
        srand(time(0));
        cout << "\nThe generated password is : \n";
        for (int i = 0; i < length; i++)
        {
                cout << alphanum[rand() % ::size];
        }
        cout << "\n\n";
        return 0;
}
