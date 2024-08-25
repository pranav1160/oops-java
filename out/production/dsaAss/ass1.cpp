#include <iostream>
#include <string>
using namespace std;


struct Student {
    int id;
    string fullName;
    float GPA;
};

void showStudents(Student* students[], int count) {
    cout << endl;
    for (int i = 0; i < count; i++) {
        cout << "ID Number: " << students[i]->id << endl;
        cout << "Name: " << students[i]->fullName << endl;
        cout << "GPA: " << students[i]->GPA << endl;
        cout << endl;
    }
}

void swapStudents(Student*& first, Student*& second) {
    Student* temp = first;
    first = second;
    second = temp;
}

//  (QuickSort)
int partitionGPA(Student* students[], int low, int high) {
    float pivotGPA = students[high]->GPA; // Pivot element
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (students[j]->GPA < pivotGPA) {
            i++;
            swapStudents(students[i], students[j]);
        }
    }
    swapStudents(students[i + 1], students[high]);
    return i + 1;
}

// (QuickSort)
void quickSortGPA(Student* students[], int low, int high) {
    if (low < high) {
        int partitionIndex = partitionGPA(students, low, high);
        quickSortGPA(students, low, partitionIndex - 1);
        quickSortGPA(students, partitionIndex + 1, high);
    }
}

// ID (BubbleSort)
void bubbleSortByID(Student* students[], int count) {
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (students[i]->id > students[j]->id) {
                swapStudents(students[i], students[j]);
            }
        }
    }
    cout << "\nStudents sorted by ID:" << endl;
    showStudents(students, count);
}

//  name (InsertionSort)
void insertionSortByName(Student* students[], int count) {
    for (int i = 1; i < count; i++) {
        for (int j = i; j > 0; j--) {
            if (students[j - 1]->fullName > students[j]->fullName) {
                swapStudents(students[j - 1], students[j]);
            }
        }
    }
    cout << "\nStudents sorted by Name:" << endl;
    showStudents(students, count);
}

//  search GPA
void searchByGPA(Student* students[], int count) {
    float searchGPA;
    int foundIndex = -1;
    cout << "Enter GPA to search for: ";
    cin >> searchGPA;

    for (int i = 0; i < count; i++) {
        if (students[i]->GPA == searchGPA) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) {
        cout << "Student with GPA " << searchGPA << " not found!" << endl;
    } else {
        cout << "\nStudent Found:\n";
        cout << "ID Number: " << students[foundIndex]->id << endl;
        cout << "Name: " << students[foundIndex]->fullName << endl;
        cout << "GPA: " << students[foundIndex]->GPA << endl;
    }
}

int main() {
    Student* students[20];
    int studentCount = 0;
    int continueInput = 0;

    do {
        students[studentCount] = new Student;
        cout << "Enter ID Number: "; cin >> students[studentCount]->id;
        cout << "Enter Full Name: "; cin >> students[studentCount]->fullName;
        cout << "Enter GPA: "; cin >> students[studentCount]->GPA;
        studentCount++;
        cout << "Add another student? (0/1): "; cin >> continueInput;
    } while (continueInput);

    int menuChoice = 0, continueMenu = 0;

    do {
        cout << "\nMenu:\n";
        cout << "1. Display Students\n";
        cout << "2. Sort by Name\n";
        cout << "3. Sort by ID\n";
        cout << "4. Search by GPA\n";
        cout << "5. Sort by GPA\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: "; cin >> menuChoice;

        switch (menuChoice) {
            case 1:
                showStudents(students, studentCount);
                break;
            case 2:
                insertionSortByName(students, studentCount);
                break;
            case 3:
                bubbleSortByID(students, studentCount);
                break;
            case 4:
                searchByGPA(students, studentCount);
                break;
            case 5:
                quickSortGPA(students, 0, studentCount - 1);
                showStudents(students, studentCount);
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice! Please choose again." << endl;
                break;
        }

        cout << "Do you want to return to the menu? (0/1): "; cin >> continueMenu;
    } while (continueMenu);

    return 0;
}
