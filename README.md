# Voting Management System
This is a simple voting management system for adding, viewing of records of NA and PA candidates and adding, viewing and searching of the voters. There are uses of structures and vectors along with file handling.
## NA.h:
### addNA(vector<NA_info> &NA):
* This function prompts the user to enter the details of NA candidate.
* It validates the CNIC to make sure it is 13 digits.
* The candidate’s information is then added to the vector ‘NA’ and appended to the file “NA.txt”.
### readNA(vector<NA_info> &NA):
* This function reads and displays existing NA candidate records from the file “NA.txt”.
## PA.h:
### addPA(vector<PA_info> &PA):
* This function prompts the user to enter the details of PA candidate.
* It validates the CNIC to make sure it is 13 digits.
* The candidate’s information is then added to the vector ‘PA’ and appended to the file “PA.txt”.
### readPA(vector<PA_info> &PA):
* This function reads and displays existing PA candidate records from the file “PA.txt”.
## Voters.h:
### addVoter(vector<Voter_info> &voters):
* This function prompts the user to enter the details of a voter.
* It validates the CNIC to make sure it is 13 digits.
* The candidate’s information is then added to the vector ‘voters’ and appended to the file “voters.txt”.
### readPA(vector<PA_info> &PA):
* This function reads and displays existing PA candidate records from the file “voters.txt”.
### searchVoter(vector<Vector_info> &voters):
* This function allows the user to search for a voter record by CNIC number.
* It reads the file “voters.txt” and displays the record if found.
## VotingSystem.cpp:
### NAchoicedisplay(vector<NA_info> &NA, vector<PA_info> &PA, vector<Voter_info> &voters):
* I have made a landing page for the NA candidate system in this function.
* We can access the functions present in the NA.h. 
* We can also access the main/landing page in this function.
### PAchoicedisplay(vector<NA_info> &NA, vector<PA_info> &PA, vector<Voter_info> &voters):
* I have made a landing page for the PA candidate system in this function.
* We can access the functions present in the PA.h. 
* We can also access the main/landing page in this function.
### Voterchoicedisplay(vector<NA_info> &NA, vector<PA_info> &PA, vector<Voter_info> &voters):
* I have made a landing page for the Voter Management system in this function.
* We can access the functions present in the Voter.h. 
* We can also access the main/landing page in this function.
### VMSchoicedisplay(vector<NA_info> &NA, vector<PA_info> &PA, vector<Voter_info> &voters):
* We can access the function NAchoicedisplay, PAchoicedisplay, Voterchoicedisplay in this function.
* We can also exit the program in this function.
## Main():
* We call the VMSchoicedisplay function in this main function
