#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct PA_info{
    string PA_Number;
    string CNIC;
    string name;
    string party;
};

void addPA(vector<PA_info> &PA){
    PA_info P_A;
    ofstream fout;
    fout.open("PA.txt", ios::app);
    cout << "Enter the PA#" << endl;
    cin >> P_A.PA_Number;
    cout << endl;
    cout << "Enter the CNIC# of PA candidate" << endl;
    cout << "It should be 13 numbers" << endl;
    do{
        cin >> P_A.CNIC;
        if(P_A.CNIC.length() > 13 || P_A.CNIC.length() < 13){
            cout << "It is should be 13 numbers. Try again." << endl;
        }
    }while(P_A.CNIC.length() > 13 || P_A.CNIC.length() < 13);
    cout << endl;
    cout << "Enter the name of the PA Candidate" << endl;
    cin >> P_A.name;
    cout << endl;
    cout << "Enter the name of the political party" << endl;
    cin >> P_A.party;
    cout << endl;
    PA.push_back(P_A);
    fout << P_A.PA_Number << "\t" << P_A.CNIC << "\t" << P_A.name << "\t" << P_A.party << endl;
    fout.close();
}


void readPA(vector<PA_info>& PA) {
    PA_info P_A;
    ifstream fin;

    try {
        fin.open("PA.txt");
        if (fin.fail()) {
            throw runtime_error("Error opening file");
        }
    } 
    catch (...) {
        cerr << "Unable to open file" << endl;
        exit(2);
    }

    cout << left << setw(8) << "PA#" << setw(15) << "CNIC" << setw(15) << "Name" << setw(15) << "Party" << endl;

    while (fin >> P_A.PA_Number >> P_A.CNIC >> P_A.name >> P_A.party) {
        cout << left << setw(8) << P_A.PA_Number << setw(15) << P_A.CNIC << setw(15) << P_A.name << setw(20) << P_A.party << endl;
    }
    fin.close();
}





