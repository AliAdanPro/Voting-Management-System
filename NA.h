#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct NA_info{
    string NA_Number;
    string CNIC;
    string name;
    string party;
};

void addNA(vector<NA_info> &NA){
    NA_info N_A;
     ofstream fout;
    fout.open("NA.txt", ios::app);
    cout << "Enter the NA#" << endl;
    cin >> N_A.NA_Number;
    cout << endl;
    cout << "Enter the CNIC# of NA Candidate" << endl;
    cout << "It should be 13 numbers" << endl;

    do{
        cin >> N_A.CNIC;
        if(N_A.CNIC.length() > 13 || N_A.CNIC.length() < 13){
            cout << "It is should be 13 numbers. Try again." << endl;
        }
    }while(N_A.CNIC.length() > 13 || N_A.CNIC.length() < 13);
    cout << endl;
    cout << "Enter the name of the NA Candidate" << endl;
    cin >> N_A.name;
    cout << endl;
    cout << "Enter the name of the political party" << endl;
    cin >> N_A.party;
    cout << endl;
    NA.push_back(N_A);
    fout << N_A.NA_Number << "\t" << N_A.CNIC << "\t" << N_A.name << "\t" << N_A.party << endl;
    fout.close();
}


void readNA(vector<NA_info>& NA) {
    NA_info N_A;
    ifstream fin;

    try {
        fin.open("NA.txt");
        if (fin.fail()) {
            throw runtime_error("Error opening file");
        }
    } catch (...) {
        cerr << "Unable to open file" << endl;
        exit(1);
    }

    cout << left << setw(8) << "NA#" << setw(15) << "CNIC" << setw(15) << "Name" << setw(15) << "Party" << endl;

    while (fin >> N_A.NA_Number >> N_A.CNIC >> N_A.name >> N_A.party) {
        cout << left << setw(8) << N_A.NA_Number << setw(15) << N_A.CNIC << setw(15) << N_A.name << setw(20) << N_A.party << endl;
    }
    fin.close();
}





