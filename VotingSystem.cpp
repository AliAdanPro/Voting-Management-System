#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include "NA.h"
#include "PA.h"
#include "Voters.h"

using namespace std;
void VMSchoicedisplay(vector<NA_info> &NA, vector<PA_info> &PA, vector<Voter_info> &voters);

void NAchoicedisplay(vector<NA_info> &NA, vector<PA_info> &PA, vector<Voter_info> &voters){
    char choice;
    cout << "NA CANDIDATE MANAGEMENT SYSTEM!" << endl;
    cout << "===============================" << endl;

    cout << "Press 1 to enter a new record of NA Candidate" << endl;
    cout << "Press 2 to view NA Candidate Records" << endl;
    cout << "Press 3 to go back to main page" << endl;
    do{
    cin >> choice;
    cout << endl;
    switch(choice){
        case '1':
         addNA(NA);
         system("pause>0");
         cout << endl;
        NAchoicedisplay(NA, PA, voters);
        case '2':
        readNA(NA);
        system("pause>0");
        cout << endl;
        NAchoicedisplay(NA, PA, voters);
        case '3':
        VMSchoicedisplay(NA, PA, voters);
        break;
        default:
        cout << "Invalid choice" << endl;
        cout << endl;
    }
    }while(true);
}
void PAchoicedisplay(vector<NA_info> &NA, vector<PA_info> &PA, vector<Voter_info> &voters){
    char choice;
    cout << "PA CANDIDATE MANAGEMENT SYSTEM!" << endl;
    cout << "===============================" << endl;

    cout << "Press 1 to enter a new record of PA Candidate" << endl;
    cout << "Press 2 to view PA Candidate Records" << endl;
    cout << "Press 3 to go back to main page" << endl;
    do{
    cin >> choice;
    cout << endl;
    switch(choice){
        case '1':
        addPA(PA);
        system("pause>0");
        cout << endl;
        PAchoicedisplay(NA, PA, voters);
        break;
        case '2':
        readPA(PA);
        system("pause>0");
        cout << endl;
        PAchoicedisplay(NA, PA, voters);
        break;
        case '3':
        VMSchoicedisplay(NA, PA, voters);
        break;
        default:
        cout << "Invalid choice. Try Again" << endl;
        cout << endl;
    }
    }while(true);
}
void Voterchoicedisplay(vector<NA_info> &NA, vector<PA_info> &PA, vector<Voter_info> &voters){
    char choice;
    cout << "VOTERS MANAGEMENT SYSTEM!" << endl;
    cout << "=========================" << endl;
    cout << "Press 1 to enter a new record of Voter" << endl;
    cout << "Press 2 to view Voter's Records" << endl;
    cout << "Press 3 to search a voter's Record" << endl;
    cout << "Press 4 to go back to main page" << endl;
    do{
    cin >> choice;
    cout << endl;
    switch(choice){
        case '1':
        addVoter(voters);
        system("pause>0");
        cout << endl;
        Voterchoicedisplay(NA, PA, voters);
        break;
        case '2':
        readVoter(voters);
        system("pause>0");
        cout << endl;
        Voterchoicedisplay(NA, PA, voters);
        break;
        case '3':
        searchVoter(voters);
        system("pause>0");
        cout << endl;
        Voterchoicedisplay(NA, PA, voters);
        break;
        case '4':
        VMSchoicedisplay(NA, PA, voters);
        break;
        default:
        cout << "Invalid choice" << endl;
        cout << endl;
    }
    }while(true);
}

void VMSchoicedisplay(vector<NA_info> &NA, vector<PA_info> &PA, vector<Voter_info> &voters){
    char choice;
    do{
        cout << "VOTING MANAGEMENT SYSTEM!" << endl;
        cout << "=========================" << endl;
        cout << "Press 1 for NA Candidate Management" << endl;
        cout << "Press 2 for PA Candidate Management" << endl;
        cout << "Press 3 for Voter Management" << endl;
        cout << "Press 4 to exit." << endl;
        cin >> choice;
        cout << endl;
        switch(choice){
            case '1':
            NAchoicedisplay(NA, PA, voters);
            break;
            case '2':
            PAchoicedisplay(NA, PA, voters);
            break;
            case '3':
            Voterchoicedisplay(NA, PA, voters);
            break;
            case '4':
            cout << "Exiting the program." << endl;
            exit(0);
            default:
            cout << "Invalid choice. Try again." << endl;

        }
    }while(true);
}
int main() {
    vector<NA_info> NA;
    vector<PA_info> PA;
    vector<Voter_info> voters;

        VMSchoicedisplay(NA, PA, voters);
    

}
