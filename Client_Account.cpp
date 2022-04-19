#include "Client_Account.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

        Client_Account::Client_Account(){

        }

        Client_Account::Client_Account(string A_Name, int A_Age, string A_DOB){
            Account_NAME = Account_Name;
            Account_Name = A_Name;
            Account_Bank_ID = 1;
            Account_Age = A_Age;
            Account_DOB = A_DOB;
            Account_Balance = 0;
            Account_Balance_Daily_Transfer_Limit = 0;
            Account_Balance_Max_Transfer_Limit = 0;
        }

        void Client_Account::Set_Pin(){
            cout <<"\n Enter new pin here: ";
            cin >> Account_Pin;
        }

        bool Client_Account::Create_Account(double ATM_Deposit){
            while (ATM_Deposit < 0){
                cout <<"\n Error 1001 . . .   Re-enter deposit: \n";
                cin >> Account_Balance;
                if (Account_Balance > 0){
                    break;
                }
            }
            Account_Balance += ATM_Deposit;
            return true;
        }

        bool Client_Account::Log_in(string Name, string Password){
            if (Name == Account_Name && Password == Account_Pin){
                cout <<"\n\n\n\n\n\n\n\n\n";
                cout <<"\n Welcome "<<Account_Name<<"!\n"; 
                return true;
            }
            return false;
        }

        bool Client_Account::Delete_Account(string Termination){
            if (Termination == "y" || Termination == "Y" || Termination == "yes"){
                Account_Name = "";
                Account_Bank_ID = 0;   
                Account_Age = 0;
                Account_DOB = "";
                Account_Pin = "";
                Account_Balance = 0;
                return true;
            }
            return false;
        }

        void Client_Account::Show_My_Details(){
            cout << "\n Your personal details are:";
            cout <<"\n Name: "<<Account_Name;
            cout <<"\n ID: "<<Account_Bank_ID;
            cout <<"\n Age: "<<Account_Age;
            cout <<"\n DOB: "<<Account_DOB;
            cout <<"\n\n Account Balance: $"<<fixed<<setprecision(2)<< Account_Balance;
            cout <<"\n\n";
        }

        void Client_Account::help(){
            cout <<"\n Error Codes and their desciption:\n";
            for (int k = 0; k < 4; k++){
                cout <<" "<<*(Error_Code_Description+k)<<"\n";
            }
            cout <<"\n";
        }

        bool Client_Account::Receive_Money(double Bpay_Amount){
            if (Bpay_Amount > 0){
                Account_Balance += Bpay_Amount;
                return true;
            }
            return false;
        }

        bool Client_Account::BPay(double Bpay_Amount, Client_Account *Repecient){
            if (Bpay_Amount > 0 && Account_Balance > 0){
                if ((Account_Balance - Bpay_Amount) > 0){
                    Account_Balance -= Bpay_Amount;
                    (*(Repecient)).Account_Balance += Bpay_Amount;
                    return true;
                }
                cout <<"\n Insufficient funds!\n";
                return false;
            }
            return false;
        }

        Client_Account* Client_Account::Return_Object_Address(){
            return this;
        }

        Client_Account::~Client_Account(){

        }

