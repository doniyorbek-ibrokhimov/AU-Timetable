//
// Created by Ubisoft Team on 28/04/2022.
//

#include "cases.h"

void cases() {

    int group_number{0};
    cout << "Enter your group number: ";
    cin >> group_number;

    if (group_number == 1) vector<string> se2101 = reader("timetable_se2101.txt");
    else if (group_number == 2) vector<string> se2102 = reader("timetable_se2102.txt");
    else if (group_number == 3) vector<string> se2103 = reader("timetable_se2103.txt");
    else if (group_number == 4) vector<string> se2104 = reader("timetable_se2104.txt");

}