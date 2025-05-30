﻿#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

// Function to get a valid integer input from the user
int getValidIntegerInput(const string& prompter) {

    int value;
    cout << prompter;

    while (!(cin >> value)) {

        cin.clear();
        cout << "Oops! That's not a valid number. Please enter a numeric value: ";
        cin.ignore();  // Only ignore the invalid input character

    }
    return value;

}

int main() {

	set<int> numbers;  // store unique numbers in a set
    map<int, string> numberStrings;  // associate numbers with descriptions using map

    int totalNumbers = getValidIntegerInput("How many unique numbers would you like to enter? ");

    cout << "Please enter " << totalNumbers << " unique numbers:" << endl;

    while (numbers.size() < totalNumbers) {

        int number = getValidIntegerInput("Enter a number: ");
        numbers.insert(number);  // Add number to the set

    }

    // Ask user to enter a specific number to find in the set 
    int numberToCheck = getValidIntegerInput("\nEnter a number to check if it's in the set: ");
    cout << (numbers.count(numberToCheck) ? "Yes, it's in the set!" : "No, it's not in the set.") << endl;

    // Ask user to enter a specific number to remove from the set
    int numberToRemove = getValidIntegerInput("\nEnter a number to remove from the set: ");

    if (numbers.erase(numberToRemove)) {

        cout << "The number " << numberToRemove << " was successfully removed from the set." << endl;

    }
    else {

        cout << "The number " << numberToRemove << " was not found in the set." << endl;

    }

    // Ask user to associate each number with a string (string->value and number->key)
    cout << "\nNow, let's associate strings with each number:" << endl;

    for (int number : numbers) {

        string value;

        cout << "Enter a string for number " << number << ": ";
        getline(cin, value);  // Get the string
        numberStrings[number] = value;  // Store it in the map

    }

    // Display the mapping of the key/value pairs
    cout << "\nHere are the numbers and their strings:" << endl;

    for (const auto& pair : numberStrings) {

        cout << pair.first << ": " << pair.second << endl;

    }

    return 0;
}