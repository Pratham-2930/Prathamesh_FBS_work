#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include <algorithm>

using namespace std;

// ============================================================
// STUDENT CLASS
// ============================================================

class Student {
public:
    int id;
    string name;
    string email;
    string phone;
    string address;
    string skills;
    string qualification;
    string experience;
    string domain;
    string hobbies;
    string certification;
    string projects;
    string linkedin;
    string github;
    string portfolio;
    string resume;

    string username;
    string password;

    bool approved;
    bool placementOptOut;
    bool placed;

    Student() {
        id = 0;
        approved = false;
        placementOptOut = false;
        placed = false;
    }
};

// ============================================================
// COMPANY CLASS
// ============================================================

class Company {
public:
    int id;
    string name;
    string location;
    string domain;
    string headOffice;
    string phone;
    string branches;
    string email;
    string linkedin;

    string username;
    string password;

    Company() {
        id = 0;
    }
};

// ============================================================
// JOB CLASS
// ============================================================

class Job {
public:
    int id;
    int companyId;

    string companyName;
    string position;
    string domain;
    string qualification;
    string packageAmount;
    string location;
    string contractType;
    string skills;
    string experience;

    bool active;

    Job() {
        id = 0;
        companyId = 0;
        active = true;
    }
};

// ============================================================
// APPLICATION CLASS
// ============================================================

class Application {
public:
    int id;
    int studentId;
    int jobId;

    string studentName;
    string companyName;
    string position;

    string status;
    string appliedDate;

    Application() {
        id = 0;
        studentId = 0;
        jobId = 0;
        status = "Applied";
    }
};

// ============================================================
// INTERVIEW CLASS
// ============================================================

class Interview {
public:
    int id;
    int applicationId;

    string studentName;
    string companyName;
    string position;

    string date;
    string time;
    string location;
    string round;
    string status;
    string comments;

    Interview() {
        id = 0;
        applicationId = 0;
    }
};

// ============================================================
// PLACEMENT MANAGEMENT SYSTEM
// ============================================================

class PlacementSystem {

private:

    vector<Student> students;
    vector<Company> companies;
    vector<Job> jobs;
    vector<Application> applications;
    vector<Interview> interviews;

    int nextStudentId = 1;
    int nextCompanyId = 1;
    int nextJobId = 1;
    int nextApplicationId = 1;
    int nextInterviewId = 1;

public:

    // ========================================================
    // CONSTRUCTOR
    // ========================================================

    PlacementSystem() {
        loadData();
    }

    // ========================================================
    // UTILITY FUNCTIONS
    // ========================================================

    void pause() {
        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
    }

    void clearScreen() {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
    }

    string inputLine(string message) {
        string value;

        cout << message;
        getline(cin, value);

        return value;
    }

    int inputInt(string message) {
        int value;

        while (true) {
            cout << message;

            if (cin >> value) {
                cin.ignore(100)