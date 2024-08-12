void displayAllRecords() {
    if (studentCount == 0) {
        cout << "No records available." << endl;
        return;
    }

    cout << "\n--- Student Records ---\n";
    cout << "Name\t\tID\t\tDate of Birth\n";
    cout << "-------------------------------------------\n";
    for (int i = 0; i < studentCount; i++) {
        cout << studentNames[i] << "\t\t" << studentIDs[i] << "\t\t" << studentDOB[i] << endl;
    }
}