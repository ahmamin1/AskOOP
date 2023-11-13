#include <bits/stdc++.h>
#include "../Controller/AuthController.cpp"
using namespace std;

void login()
{
    while (true)
    {
        string userName;
        string password;
        cin >> userName >> password;
        if (!AuthController::checkLogin(userName, password))
        {
            cout << "\nInvalid user name or password. Try again\n\n";
            continue;
        }else{
            cout << "\nLogged in";
        }
    }
}
