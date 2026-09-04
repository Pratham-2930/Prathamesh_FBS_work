#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

// ================= STUDENT =================
class Student
{
public:
    int id;
    string name;
    string email;
    string phone;
    string address;
    string qualification;
    string skills;
    string domain;
    int passoutYear;
    string username;
    string password;
    bool approved;
    bool placed;

    Student()
    {
        id = 0;
        passoutYear = 0;
        approved = false;
        placed = false;
    }

    void input()
    {
        cout << "\nEnter Student ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Email: ";
        getline(cin, email);

        cout << "Enter Phone: ";
        getline(cin, phone);

        cout << "Enter Address: ";
        getline(cin, address);

        cout << "Enter Qualification: ";
        getline(cin, qualification);

        cout << "Enter Skills: ";
        getline(cin, skills);

        cout << "Enter Domain: ";
        getline(cin, domain);

        cout << "Enter Passout Year: ";
        cin >> passoutYear;
        cin.ignore();

        cout << "Create Username: ";
        getline(cin, username);

        cout << "Create Password: ";
        getline(cin, password);

        approved = false;
        placed = false;
    }

    void display() const
    {
        cout << "\n----------------------------------";
        cout << "\nStudent ID      : " << id;
        cout << "\nName            : " << name;
        cout << "\nEmail           : " << email;
        cout << "\nPhone           : " << phone;
        cout << "\nAddress         : " << address;
        cout << "\nQualification   : " << qualification;
        cout << "\nSkills          : " << skills;
        cout << "\nDomain          : " << domain;
        cout << "\nPassout Year    : " << passoutYear;
        cout << "\nApproved        : " << (approved ? "Yes" : "No");
        cout << "\nPlaced          : " << (placed ? "Yes" : "No");
        cout << "\n----------------------------------\n";
    }
};

// ================= COMPANY =================
class Company
{
public:
    int companyId;
    string name;
    string location;
    string domain;
    string headOffice;
    string phone;
    string email;

    void input()
    {
        cout << "\nEnter Company ID: ";
        cin >> companyId;
        cin.ignore();

        cout << "Enter Company Name: ";
        getline(cin, name);

        cout << "Enter Location: ";
        getline(cin, location);

        cout << "Enter Domain: ";
        getline(cin, domain);

        cout << "Enter Head Office: ";
        getline(cin, headOffice);

        cout << "Enter Phone: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);
    }

    void display() const
    {
        cout << "\n----------------------------------";
        cout << "\nCompany ID   : " << companyId;
        cout << "\nName         : " << name;
        cout << "\nLocation     : " << location;
        cout << "\nDomain       : " << domain;
        cout << "\nHead Office  : " << headOffice;
        cout << "\nPhone        : " << phone;
        cout << "\nEmail        : " << email;
        cout << "\n----------------------------------\n";
    }
};

// ================= JOB =================
class Job
{
public:
    int jobId;
    int companyId;
    string companyName;
    string position;
    string domain;
    string qualification;
    double package;
    string location;
    string contractType;
    string skills;
    int experience;

    void input()
    {
        cout << "\nEnter Job ID: ";
        cin >> jobId;

        cout << "Enter Company ID: ";
        cin >> companyId;
        cin.ignore();

        cout << "Enter Company Name: ";
        getline(cin, companyName);

        cout << "Enter Position: ";
        getline(cin, position);

        cout << "Enter Domain: ";
        getline(cin, domain);

        cout << "Enter Qualification: ";
        getline(cin, qualification);

        cout << "Enter Package (LPA): ";
        cin >> package;
        cin.ignore();

        cout << "Enter Location: ";
        getline(cin, location);

        cout << "Enter Contract Type: ";
        getline(cin, contractType);

        cout << "Enter Required Skills: ";
        getline(cin, skills);

        cout << "Enter Required Experience (years): ";
        cin >> experience;
    }
    void display() const
    {
        cout << "\n==================================";
        cout << "\nJob ID          : " << jobId;
        cout << "\nCompany         : " << companyName;
        cout << "\nPosition        : " << position;
        cout << "\nDomain          : " << domain;
        cout << "\nQualification   : " << qualification;
        cout << "\nPackage         : " << package << " LPA";
        cout << "\nLocation        : " << location;
        cout << "\nContract Type   : " << contractType;
        cout << "\nSkills          : " << skills;
        cout << "\nExperience      : " << experience << " years";
        cout << "\n==================================\n";
    }
};

// ================= APPLICATION =================
class Application
{
public:
    int applicationId;
    int studentId;
    int jobId;
    string studentName;
    string companyName;
    string position;
    string status;
    string interviewDate;
    string interviewTime;
    string interviewLocation;

    Application()
    {
        status = "Applied";
    }

    void display() const
    {
        cout << "\n----------------------------------";
        cout << "\nApplication ID : " << applicationId;
        cout << "\nStudent ID     : " << studentId;
        cout << "\nStudent Name   : " << studentName;
        cout << "\nCompany        : " << companyName;
        cout << "\nPosition       : " << position;
        cout << "\nStatus         : " << status;

        if (!interviewDate.empty())
        {
            cout << "\nInterview Date : " << interviewDate;
            cout << "\nInterview Time : " << interviewTime;
            cout << "\nInterview Loc. : " << interviewLocation;
        }

        cout << "\n----------------------------------\n";
    }
};

// ================= GLOBAL DATA =================
vector<Student> students;
vector<Company> companies;
vector<Job> jobs;
vector<Application> applications;

// ================= FILE HANDLING =================

void saveStudents()
{
    ofstream file("students.dat");

    for (const Student &s : students)
    {
        file << s.id << '|'
             << s.name << '|'
             << s.email << '|'
             << s.phone << '|'
             << s.address << '|'
             << s.qualification << '|'
             << s.skills << '|'
             << s.domain << '|'
             << s.passoutYear << '|'
             << s.username << '|'
             << s.password << '|'
             << s.approved << '|'
             << s.placed << '\n';
    }

    file.close();
}

void loadStudents()
{
    ifstream file("students.dat");

    if (!file)
        return;

    string line;

    while (getline(file, line))
    {
        vector<string> data;
        string temp;

        size_t start = 0;
        size_t pos;

        while ((pos = line.find('|', start)) != string::npos)
        {
            data.push_back(line.substr(start, pos - start));
            start = pos + 1;
        }

        data.push_back(line.substr(start));

        if (data.size() != 13)
            continue;

        Student s;

        try
        {
            s.id = stoi(data[0]);
            s.name = data[1];
            s.email = data[2];
            s.phone = data[3];
            s.address = data[4];
            s.qualification = data[5];
            s.skills = data[6];
            s.domain = data[7];
            s.passoutYear = stoi(data[8]);
            s.username = data[9];
            s.password = data[10];
            s.approved = stoi(data[11]);
            s.placed = stoi(data[12]);

            students.push_back(s);
        }
        catch (...)
        {
            continue;
        }
    }

    file.close();
}

void saveCompanies()
{
    ofstream file("companies.dat");

    for (const Company &c : companies)
    {
        file << c.companyId << '|'
             << c.name << '|'
             << c.location << '|'
             << c.domain << '|'
             << c.headOffice << '|'
             << c.phone << '|'
             << c.email << '\n';
    }

    file.close();
}

void loadCompanies()
{
    ifstream file("companies.dat");

    if (!file)
        return;

    string line;

    while (getline(file, line))
    {
        vector<string> data;
        string temp;
        size_t start = 0;
        size_t pos;

        while ((pos = line.find('|', start)) != string::npos)
        {
            data.push_back(line.substr(start, pos - start));
            start = pos + 1;
        }

        data.push_back(line.substr(start));

        if (data.size() != 7)
            continue;

        Company c;
        try
        {
            c.companyId = stoi(data[0]);
            c.name = data[1];
            c.location = data[2];
            c.domain = data[3];
            c.headOffice = data[4];
            c.phone = data[5];
            c.email = data[6];

            companies.push_back(c);
        }
        catch (...)
        {
            continue;
        }
    }

    file.close();
}

void saveJobs()
{
    ofstream file("jobs.dat");

    for (const Job &j : jobs)
    {
        file << j.jobId << '|'
             << j.companyId << '|'
             << j.companyName << '|'
             << j.position << '|'
             << j.domain << '|'
             << j.qualification << '|'
             << j.package << '|'
             << j.location << '|'
             << j.contractType << '|'
             << j.skills << '|'
             << j.experience << '\n';
    }

    file.close();
}

void loadJobs()
{
    ifstream file("jobs.dat");

    if (!file)
        return;

    string line;

    while (getline(file, line))
    {
        vector<string> data;
        size_t start = 0;
        size_t pos;

        while ((pos = line.find('|', start)) != string::npos)
        {
            data.push_back(line.substr(start, pos - start));
            start = pos + 1;
        }

        data.push_back(line.substr(start));

        if (data.size() != 11)
            continue;

        Job j;

        try
        {
            j.jobId = stoi(data[0]);
            j.companyId = stoi(data[1]);
            j.companyName = data[2];
            j.position = data[3];
            j.domain = data[4];
            j.qualification = data[5];
            j.package = stod(data[6]);
            j.location = data[7];
            j.contractType = data[8];
            j.skills = data[9];
            j.experience = stoi(data[10]);

            jobs.push_back(j);
        }
        catch (...)
        {
            continue;
        }
    }

    file.close();
}

void saveApplications()
{
    ofstream file("applications.dat");

    for (const Application &a : applications)
    {
        file << a.applicationId << '|'
             << a.studentId << '|'
             << a.jobId << '|'
             << a.studentName << '|'
             << a.companyName << '|'
             << a.position << '|'
             << a.status << '|'
             << a.interviewDate << '|'
             << a.interviewTime << '|'
             << a.interviewLocation << '\n';
    }

    file.close();
}

void loadApplications()
{
    ifstream file("applications.dat");

    if (!file)
        return;

    string line;

    while (getline(file, line))
    {
        vector<string> data;
        size_t start = 0;
        size_t pos;

        while ((pos = line.find('|', start)) != string::npos)
        {
            data.push_back(line.substr(start, pos - start));
            start = pos + 1;
        }

        data.push_back(line.substr(start));

        if (data.size() != 10)
            continue;

        Application a;

        try
        {
            a.applicationId = stoi(data[0]);
            a.studentId = stoi(data[1]);
            a.jobId = stoi(data[2]);
            a.studentName = data[3];
            a.companyName = data[4];
            a.position = data[5];
            a.status = data[6];
            a.interviewDate = data[7];
            a.interviewTime = data[8];
            a.interviewLocation = data[9];

            applications.push_back(a);
        }
        catch (...)
        {
            continue;
        }
    }

    file.close();
}

void saveAll()
{
    saveStudents();
    saveCompanies();
    saveJobs();
    saveApplications();
}

// ================= ADMIN =================

bool adminLogin()
{
    string username;
    string password;

    cout << "\n========== ADMIN LOGIN ==========\n";

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    return username == "admin" && password == "admin123";
}

void approveStudents()
{
    if (students.empty())
    {
        cout << "\nNo students registered.\n";
        return;
    }

    for (Student &s : students)
    {
        s.display();

        if (!s.approved)
        {
            char choice;

            cout << "Approve this student? (Y/N): ";
            cin >> choice;

            if (choice == 'Y' || choice == 'y')
            {
                s.approved = true;
                cout << "Student approved successfully.\n";
            }
        }
    }

    saveStudents();
}
void addCompany()
{
    Company c;
    c.input();

    companies.push_back(c);

    saveCompanies();

    cout << "\nCompany added successfully.\n";
}

void showCompanies()
{
    if (companies.empty())
    {
        cout << "\nNo companies available.\n";
        return;
    }

    for (const Company &c : companies)
        c.display();
}

void addJob()
{
    if (companies.empty())
    {
        cout << "\nPlease add a company first.\n";
        return;
    }

    Job j;
    j.input();

    bool companyFound = false;

    for (const Company &c : companies)
    {
        if (c.companyId == j.companyId)
        {
            companyFound = true;
            j.companyName = c.name;
            break;
        }
    }

    if (!companyFound)
    {
        cout << "\nInvalid Company ID.\n";
        return;
    }

    jobs.push_back(j);

    saveJobs();

    cout << "\nJob requirement added successfully.\n";
}

void showJobs()
{
    if (jobs.empty())
    {
        cout << "\nNo job openings available.\n";
        return;
    }

    for (const Job &j : jobs)
        j.display();
}

void updateApplication()
{
    if (applications.empty())
    {
        cout << "\nNo applications available.\n";
        return;
    }

    int id;

    cout << "\nEnter Application ID: ";
    cin >> id;

    for (Application &a : applications)
    {
        if (a.applicationId == id)
        {
            cout << "\n1. Shortlisted";
            cout << "\n2. Interview Scheduled";
            cout << "\n3. Selected";
            cout << "\n4. Rejected";
            cout << "\n5. In Process";

            int choice;
            cout << "\nEnter choice: ";
            cin >> choice;

            cin.ignore();

            if (choice == 1)
            {
                a.status = "Shortlisted";
            }
            else if (choice == 2)
            {
                a.status = "Interview Scheduled";

                cout << "Enter Interview Date: ";
                getline(cin, a.interviewDate);

                cout << "Enter Interview Time: ";
                getline(cin, a.interviewTime);

                cout << "Enter Interview Location: ";
                getline(cin, a.interviewLocation);
            }
            else if (choice == 3)
            {
                a.status = "Selected";

                for (Student &s : students)
                {
                    if (s.id == a.studentId)
                    {
                        s.placed = true;
                        break;
                    }
                }
                saveStudents();
            }
            else if (choice == 4)
            {
                a.status = "Rejected";
            }
            else if (choice == 5)
            {
                a.status = "In Process";
            }
            else
            {
                cout << "\nInvalid choice.\n";
                return;
            }

            saveApplications();

            cout << "\nApplication status updated successfully.\n";
            return;
        }
    }

    cout << "\nApplication not found.\n";
}

void showApplications()
{
    if (applications.empty())
    {
        cout << "\nNo applications found.\n";
        return;
    }

    for (const Application &a : applications)
        a.display();
}

void dashboard()
{
    int inProcess = 0;
    int placed = 0;

    for (const Application &a : applications)
    {
        if (a.status == "In Process" ||
            a.status == "Shortlisted" ||
            a.status == "Interview Scheduled")
        {
            inProcess++;
        }
    }

    for (const Student &s : students)
    {
        if (s.placed)
            placed++;
    }

    cout << "\n========== PLACEMENT DASHBOARD ==========\n";
    cout << "Total Students       : " << students.size() << endl;
    cout << "Total Companies      : " << companies.size() << endl;
    cout << "Total Job Openings   : " << jobs.size() << endl;
    cout << "Students In Process  : " << inProcess << endl;
    cout << "Placed Students      : " << placed << endl;
    cout << "Total Applications   : " << applications.size() << endl;
}

// ================= STUDENT =================

void studentRegister()
{
    Student s;

    s.input();

    for (const Student &old : students)
    {
        if (old.id == s.id || old.username == s.username)
        {
            cout << "\nStudent ID or Username already exists.\n";
            return;
        }
    }

    students.push_back(s);

    saveStudents();

    cout << "\nRegistration successful.\n";
    cout << "Wait for admin approval before applying for jobs.\n";
}

int studentLogin()
{
    string username;
    string password;

    cout << "\n========== STUDENT LOGIN ==========\n";

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    for (const Student &s : students)
    {
        if (s.username == username && s.password == password)
        {
            cout << "\nLogin successful.\n";
            return s.id;
        }
    }
    cout << "\nInvalid username or password.\n";

    return -1;
}

bool isEligible(const Student &s, const Job &j)
{
    bool domainMatch =
        s.domain == j.domain ||
        j.domain == "Any" ||
        j.domain == "any";

    bool qualificationMatch =
        s.qualification == j.qualification ||
        j.qualification == "Any" ||
        j.qualification == "any";

    bool yearValid = s.passoutYear > 0;

    return domainMatch && qualificationMatch && yearValid;
}

void viewEligibleJobs(int studentId)
{
    Student *student = nullptr;

    for (Student &s : students)
    {
        if (s.id == studentId)
        {
            student = &s;
            break;
        }
    }

    if (student == nullptr)
        return;

    bool found = false;

    cout << "\n========== ELIGIBLE JOBS ==========\n";

    for (const Job &j : jobs)
    {
        if (isEligible(*student, j))
        {
            j.display();
            found = true;
        }
    }

    if (!found)
        cout << "\nNo eligible jobs found.\n";
}

bool alreadyApplied(int studentId, int jobId)
{
    for (const Application &a : applications)
    {
        if (a.studentId == studentId && a.jobId == jobId)
            return true;
    }

    return false;
}

void applyForJob(int studentId)
{
    Student *student = nullptr;

    for (Student &s : students)
    {
        if (s.id == studentId)
        {
            student = &s;
            break;
        }
    }

    if (student == nullptr)
        return;

    if (!student->approved)
    {
        cout << "\nYour registration is not approved by admin.\n";
        return;
    }

    viewEligibleJobs(studentId);

    int jobId;

    cout << "\nEnter Job ID to apply: ";
    cin >> jobId;

    Job *selectedJob = nullptr;

    for (Job &j : jobs)
    {
        if (j.jobId == jobId)
        {
            selectedJob = &j;
            break;
        }
    }

    if (selectedJob == nullptr)
    {
        cout << "\nJob not found.\n";
        return;
    }

    if (!isEligible(*student, *selectedJob))
    {
        cout << "\nYou are not eligible for this job.\n";
        return;
    }
    cout << "\nApplication not found.\n";
}

void studentApplications(int studentId)
{
    bool found = false;

    cout << "\n========== MY APPLICATIONS ==========\n";

    for (const Application &a : applications)
    {
        if (a.studentId == studentId)
        {
            a.display();
            found = true;
        }
    }

    if (!found)
        cout << "\nNo applications found.\n";
}

void studentMenu(int studentId)
{
    int choice;

    do
    {
        cout << "\n\n========== STUDENT MENU ==========\n";
        cout << "1. View Profile\n";
        cout << "2. View Eligible Jobs\n";
        cout << "3. Apply for Job\n";
        cout << "4. Opt Out from Job\n";
        cout << "5. View Application Status\n";
        cout << "6. Logout\n";
        cout << "Enter choice: ";

        cin >> choice;

        Student *student = nullptr;

        for (Student &s : students)
        {
            if (s.id == studentId)
            {
                student = &s;
                break;
            }
        }

        switch (choice)
        {
        case 1:
            if (student != nullptr)
                student->display();
            break;

        case 2:
            viewEligibleJobs(studentId);
            break;

        case 3:
            applyForJob(studentId);
            break;

        case 4:
            'optOut(studentId)';
            break;

        case 5:
            studentApplications(studentId);
            break;

        case 6:
            cout << "\nLogged out successfully.\n";
            break;

        default:
            cout << "\nInvalid choice.\n";
        }

    } while (choice != 6);
}

// ================= ADMIN MENU =================

void adminMenu()
{
    if (!adminLogin())
    {
        cout << "\nInvalid admin login.\n";
        return;
    }

    int choice;

    do
    {
        cout << "\n\n========== ADMIN MENU ==========\n";
        cout << "1. Approve Students\n";
        cout << "2. View Students\n";
        cout << "3. Add Company\n";
        cout << "4. View Companies\n";
        cout << "5. Add Job Requirement\n";
        cout << "6. View Job Openings\n";
        cout << "7. View Applications\n";
        cout << "8. Update Application Status\n";
        cout << "9. Placement Dashboard\n";
        cout << "10. Logout\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            approveStudents();
            break;

        case 2:
            if (students.empty())
                cout << "\nNo students found.\n";
            else
                for (const Student &s : students)
                    s.display();
            break;

        case 3:
            addCompany();
            break;

        case 4:
            showCompanies();
            break;

        case 5:
            addJob();
            break;

        case 6:
            showJobs();
            break;

        case 7:
            showApplications();
            break;

        case 8:
            updateApplication();
            break;

        case 9:
            dashboard();
            break;

        case 10:
            cout << "\nAdmin logged out.\n";
            break;

        default:
            cout << "\nInvalid choice.\n";
        }

    } while (choice != 10);
}

// ================= MAIN =================

int main()
{
    loadStudents();
    loadCompanies();
    loadJobs();
    loadApplications();

    int choice;

    do
    {
        cout << "\n\n";
        cout << "==============================================\n";
        cout << " STUDENT PLACEMENT & RECRUITMENT MANAGEMENT\n";
        cout << "==============================================\n";
        cout << "1. Student Registration\n";
        cout << "2. Student Login\n";
        cout << "3. Admin Login\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            studentRegister();
            break;

        case 2:
        {
            int studentId = studentLogin();

            if (studentId != -1)
                studentMenu(studentId);

            break;
        }
        case 3:
            adminMenu();
            break;

        case 4:
            saveAll();
            cout << "\nThank you for using the system.\n";
            break;

        default:
            cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}