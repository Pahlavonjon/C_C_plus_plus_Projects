#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Client_Account.h"

using namespace std;

class Bank{
    private:
        string Bank_Name;
        int Bank_Database_Capacity;
    public:
        Client_Account *ALL_Bank_Clients;
        int Bank_Array_index;
        Bank();
        ~Bank();
        Bank(string B_Name,int B_Capacity);
        void Add_Client(Client_Account Current_Client);
};
#endif