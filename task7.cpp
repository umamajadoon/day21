void searchForStudent() {
    if (studentCount == 0) {
        cout << "No records available to search." << endl;
        return;
    }

    int id, index = -1;
    cout << "Enter Student ID to search: ";
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
        cout << "Name: " << studentNames[index] << ", ID: " << studentIDs[index] << ", DOB: " << studentDOB[index] << endl;
    }
}