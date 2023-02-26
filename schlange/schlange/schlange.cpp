

#include <iostream>
#include <Windows.h>
#include "files.h"

  //simple login system take informations from txt file;
using namespace std;	
extern string content;


int main()
{
    string unsername;
    string password;
    cout << "username: ";
    cin >> unsername;
    cout << "password: ";
    cin >> password;

    erstelltdatei();
    liesaususername();
    liesaupassword();
     string content2;
    if (unsername == content || password == content2)
    {
        cout << "successfully logged in";
        Beep(200, 480); 
    }
    else
    {
        cout << "wrong details";
    }

    

    Sleep(30000);

}
