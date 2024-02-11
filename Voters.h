#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct Voter_info {
    string CNIC;
    string NA_Number;
    string PA_Number;
    int block_number;
    string area;
    string polling_booth;
};

void addVoter(vector<Voter_info>& voters) {
    Voter_info voter;

    ofstream fout;
    fout.open("voters.txt", ios::app);
    cout << "Enter the CNIC number of the voter." << endl;
    cout << "It should be 13 numbers." << endl;
    do{
        cin >> voter.CNIC;
        if(voter.CNIC.length() != 13){
            cout << "It must be 13 numbers.Try again." << endl;
        }
    }while(voter.CNIC.length() != 13);
    cout << endl;
    cout << "Enter the NA#" << endl;
    cin >> voter.NA_Number;
    cout << endl;
    cout << "Enter the PA#" << endl;
    cin >> voter.PA_Number;
    cout << endl;
    cout << "Enter the block#" << endl;
    cin >> voter.block_number;
    cout << endl;
    cout << "Enter the area" << endl;
    cin >> voter.area;
    cout << endl;
    cout << "Enter the Polling Booth" << endl;
    cin >> voter.polling_booth;
    cout << endl;
    fout << voter.CNIC << "\t" << voter.NA_Number << "\t" << voter.PA_Number  << "\t" << voter.block_number  << "\t" << voter.area << "\t" << voter.polling_booth << endl;
    voters.push_back(voter);
    fout.close();
}

void readVoter(vector<Voter_info>& voters) {
    Voter_info voter;
    ifstream fin;
    try{
        fin.open("voters.txt");
        if(fin.fail()){
            throw runtime_error("File could not be opened");
        }
    }
        catch(...){
            cerr << "Error reading or opening the file" << endl;
            exit(3);
        }
    

    cout << left << setw(15) << "CNIC" << setw(10) << "NA#" << setw(10) << "PA#" << setw(15) << "Block" << setw(15) << "Area" << setw(15) << "Polling Booth" << endl;

    while (fin >> voter.CNIC >> voter.NA_Number >> voter.PA_Number >> voter.block_number >> voter.area >> voter.polling_booth) {
        cout << left << setw(15) << voter.CNIC << setw(10) << voter.NA_Number << setw(10) << voter.PA_Number << setw(15) << voter.block_number << setw(15) << voter.area << setw(15) << voter.polling_booth << endl;
    }

    fin.close();
}
void searchVoter(vector<Voter_info>& voters){
    Voter_info voter;
    bool checkstatus = false;
    string checkCNIC;
    cout << "Enter the CNIC# of the voter you want the records of." << endl;
    cout << "It should be 13 numbers." << endl;
    do{
        cin >> checkCNIC;
        if(checkCNIC.length() != 13){
            cout << "Try again. It should be 13 numbers." << endl;
        }
    }while(checkCNIC.length() != 13);
    ifstream fin;
    try{
        fin.open("voters.txt");
        if(fin.fail()){
            throw runtime_error("File could not be found");
        }
    }
    catch(...){
        cerr << "File could be be opened or not found." << endl;
        exit(4);
    }
    while(fin >> voter.CNIC >> voter.NA_Number >> voter.PA_Number >> voter.block_number >> voter.area >> voter.polling_booth){
        if(voter.CNIC == checkCNIC){
            cout << left << setw(15) << "CNIC#" << setw(15) << "NA#" << setw(15) << "PA#" << setw(15) << "Block" << setw(15) << "Area" << setw(15) << "Polling Booth" << endl;
            cout << left << setw(15) << voter.CNIC << setw(15) << voter.NA_Number << setw(15) << voter.PA_Number << setw(15) << voter.block_number << setw(15) << voter.area << setw(15) << voter.polling_booth << endl;
            cout << endl;
            checkstatus = true;
            break;
        }
        else{
            checkstatus = false;
        }
    }
    
    if(checkstatus==false){
        cout << "This record was not found" << endl;
        cout << endl;
    }
    fin.close();
}
