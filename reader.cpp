//
// Created by Ubisoft Team on 28/04/2022.
//
#include "reader.h"
#include <iostream>


vector<string> reader(string file_name) {
    string search_term;


    cout << "Enter the day you want to see: " << flush;
    cin >> search_term;
    transform(search_term.begin(), search_term.end(), search_term.begin(), ::toupper);
    cout << search_term;
    vector<string> record;
    ifstream file;
    file.open(file_name);

    bool found_record = false;

    string field_one;
    string field_two;
    string field_three;
    string field_four;
    string field_five;

    while (getline(file, field_one, ',') && !found_record) {

        getline(file, field_two, ',');
        getline(file, field_three, ',');
        getline(file, field_four, ',');
        getline(file, field_five, '\n');

        if (field_one == search_term) {
            found_record = true;
            record.push_back(field_one);
            record.push_back(field_two);
            record.push_back(field_three);
            record.push_back(field_four);
            record.push_back(field_five);
        }
    }

    cout << "Timetable for ";
    for (auto i: record) {
        cout << i << '\n';
    }

    return record;
}

