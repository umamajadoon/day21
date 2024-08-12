void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Student list is full!" << endl;
        return;
    }
    
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, studentNames[studentCount]);

    cout << "Enter Student ID: ";
    cin >> studentIDs[studentCount];

    cout << "Enter Date of Birth (DD/MM/YYYY): ";
    cin >> studentDOB[studentCount];

    studentCount++;
    cout << "Student record added successfully!" << endl;
}