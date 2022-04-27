#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> reader(string file_name);

int main() {
    vector<string> data = reader("timetable.txt");

    return 0;
}

vector<string> reader(string file_name) {
    string search_term;
    getline(cin, search_term);
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
        cout << i << " ";
    }
    return record;
}