#ifndef ASKOOP_AUTH_H
#define ASKOOP_AUTH_H

#include <bits/stdc++.h>
#include "../Model/User.cpp"
#include "../Database/helpers.cpp"

//paths
#define usersFile "users.txt"

class AuthController
{
private:
    static map<string, User> users;

public:
    static User* user; // for current user

    static void LoadDB()
    {
        vector<string> list = DB::readFileLines(usersFile);
        for (auto &record : list)
        {
            User user(record);
            users[user.getUserName()] = user; 
        }
        
    }

    static bool checkLogin(string userName,string pass){
        LoadDB(); 
        if (users.count(userName)){
            User* __temp = &users[userName]; 
            if (__temp->getPassword() == pass){
                user = __temp;
                return true;
            }
        }
        return false; 
    }
};


#endif
#pragma once