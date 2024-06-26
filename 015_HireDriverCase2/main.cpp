#include <iostream>
using namespace std;

// Struct to hold applicant information
struct ApplicantInfo {
    short Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

// Function to read applicant information from the user
ApplicantInfo ReadApplicantInfo() {
    ApplicantInfo info;
    cout << "Please enter your age: " << endl;
    cin >> info.Age;
    cout << "Do you have a driving license? (true/false): " << endl;
    cin >> info.HasDrivingLicense;
    cout << "Do you have a recommendation? (true/false): " << endl;
    cin >> info.HasRecommendation;
    return info;
}

// Function to determine if the applicant is accepted
bool IsApplicantAccepted(ApplicantInfo info) {
    if (info.HasRecommendation) {
        return true;
    }
    else {
        return (info.Age > 21 && info.HasDrivingLicense);
    }
}

// Function to print the result of the application
void PrintApplicationResult(ApplicantInfo info) {
    if (IsApplicantAccepted(info)) {
        cout << "\nHired\n";
    }
    else {
        cout << "\nRejected\n";
    }
}

int main() {
    // Read the applicant information and print the result
    PrintApplicationResult(ReadApplicantInfo());
    return 0;
}