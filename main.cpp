#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "reader.h"
using namespace std;

vector<string> reader(string file_name);
void cases ();

int main() {

    cases();

    return 0;
}

vector<string> reader(string file_name) {
    string search_term;
    cout << "Enter the day you want to see: " << flush;
    cin >> search_term;
    vector<string> record;
    ifstream file;
    file.open(file_name);

    bool found_record = false;

    string field_one;
    string field_two;
    string field_three;

    while (getline(file, field_one, ',') && !found_record) {
        getline(file, field_two, ',');
        getline(file, field_three, '\n');
        if (field_one == search_term) {
            found_record = true;
            record.push_back(field_one);
            record.push_back(field_two);

            record.push_back(field_three);
        }
    }
    for (auto i: record) {
        cout << i << '\n';
    }

    return record;
}

void cases() {
    int group_number{0};
    cout << "Enter your group number: ";
    cin >> group_number;
    if (group_number == 1) vector<string> se2101 = reader("timetable_se2101.txt");
    else if (group_number == 2) vector<string> se2102 = reader("timetable_se2102.txt");
    else if (group_number == 3) vector<string> se2103 = reader("timetable_se2103.txt");
    else if (group_number == 4) vector<string> se2104 = reader("timetable_se2104.txt");
}
