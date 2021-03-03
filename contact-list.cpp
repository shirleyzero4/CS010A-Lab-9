#include <iostream>
#include <vector>

using namespace std;

string GetPhoneNumber(const vector<string> &contacts, const vector<string> &phoneNumber, const string& contactName) {
    int vectorSize = contacts.size(); //Size for both contact and phone number vectors
    string phoneNumber;

    for (int i = 0; i < vectorSize; ++i) {
        if(contacts.at(i) == contactName) {
            phoneNumber = phoneNumber.at(i);
        }
    }

    return phoneNumber;
}

int main() {
    int numInputs = 0; //size of vector
    string phoneName; //looking for phone number for this name

    cout << "Enter number of contacts: " << endl;
    cin >> numInputs;
    vector<string> contacts(numInputs); //vector for name
    vector<string> phoneNumber(numInputs); //vector for phone number

    cout << "Enter name of person and their phone number (separate name and number with a space): " << endl;
    for (int i = 0; i < numInputs; ++i) {
        cin >> contacts.at(i);
        cin >> phoneNumber.at(i);
    }
    
    cout << "Enter name to find phone number: " << endl;
    cin >> phoneName; //Looking for this person's phone number

    cout << phoneName << "'s phone number is: " << GetPhoneNumber(contacts, phoneNumber, phoneName) << endl;

    return 0;
}