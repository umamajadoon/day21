void updateRecord() {
    if (studentCount == 0) {
        cout << "No records available to update." << endl;
        return;
    }

    int id, index = -1;
    cout << "Enter Student ID to update: ";
    cin >> id;

    for (int i = 0; i < studentCount; i++) {
        if (studentIDs[i] == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Student ID not found!" << endl;
    } else {
        cout << "Enter new Name: ";
        cin.ignore();
        getline(cin, studentNames[index]);

        cout << "Enter new Date of Birth (DD/MM/YYYY): ";
        cin >> studentDOB[index];

        cout << "Student record updated successfully!" << endl;
    }
}