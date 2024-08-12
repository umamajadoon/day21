void deleteRecord() {
    if (studentCount == 0) {
        cout << "No records available to delete." << endl;
        return;
    }

    int id, index = -1;
    cout << "Enter Student ID to delete: ";
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
        for (int i = index; i < studentCount - 1; i++) {
            studentNames[i] = studentNames[i + 1];
            studentIDs[i] = studentIDs[i + 1];
            studentDOB[i] = studentDOB[i + 1];
        }
        studentCount--;
        cout << "Student record deleted successfully!" << endl;
    }
}