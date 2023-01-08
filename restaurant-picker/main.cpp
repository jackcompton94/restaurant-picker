//
//  main.cpp
//  restaurant-picker
//
//  Created by Jack Compton on 1/7/23.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ostream>

using namespace std;

char choice;
vector<string> foodVector;

void genMenu() {
    cout << "|---------------------------|" << endl;
    cout << "|     Restaurant Picker     |" << endl;
    cout << "|---------------------------|" << endl;
    cout << "|  'r' to add a restaurant  |" << endl;
    cout << "|  'c' to add carry-out     |" << endl;
    cout << "|---------------------------|" << endl;
    cout << "|  'p' to pick a restaurant |" << endl;
    cout << "|  'o' to order carry-out   |" << endl;
    cout << "|---------------------------|" << endl;
    cout << "|  'q' to quit              |" << endl;
    cout << "|---------------------------|" << endl;
    cout << "\nSelect an option: ";
    
    cin >> choice;
}

int main() {
    
    while (choice != 'q') {
        genMenu();
        
        if (choice == 'r') {
            string restaurant;
            ofstream foodOptions;
            
            cout << "Enter the restaurant name: ";
            getline(cin >> ws, restaurant);
            
            // Create a Restaurant .txt file to write to
            foodOptions.open("/Users/jackcompton/Documents/cDev/restaurant-picker/restaurant.txt", ios::app);
            foodOptions << restaurant << endl;
            foodOptions.close();
            cout << restaurant << " has been added" << endl << endl;
        }
        
        if (choice == 'p') {
            
            string line;
            
            // Create a fileReader to traverse line-by-line and add to a vector
            ifstream fileReader("/Users/jackcompton/Documents/cDev/restaurant-picker/restaurant.txt");
            while (getline(fileReader, line)) {
                foodVector.push_back(line);
            }
            
            // Generate a random number to select a restaurant
            int max = foodVector.size();
            srand(time(NULL));
            int random = rand() % max;
            
            cout << "you're going to " << foodVector[random] << "!" << endl << endl;
            return 0;
        }
        
        if (choice == 'c') {
            string restaurant;
            ofstream foodOptions;
            
            cout << "Enter the restaurant name: ";
            getline(cin >> ws, restaurant);
            
            // Create a Carryout .txt file to write to
            foodOptions.open("/Users/jackcompton/Documents/cDev/restaurant-picker/carryout.txt", ios::app);
            foodOptions << restaurant << endl;
            foodOptions.close();
            cout << restaurant << " has been added" << endl << endl;
        }
        
        if (choice == 'o') {
            
            string line;
            
            // Create a fileReader to traverse line-by-line and add to a vector
            ifstream fileReader("/Users/jackcompton/Documents/cDev/restaurant-picker/carryout.txt");
            while (getline(fileReader, line)) {
                foodVector.push_back(line);
            }
            
            // Generate a random number to select a restaurant
            int max = foodVector.size();
            srand(time(NULL));
            int random = rand() % max;
            
            cout << "you're ordering " << foodVector[random] << "!" << endl << endl;
            return 0;
        }
        
        else {
            cout <<"\nPlease enter a valid option." << endl;
        }
    }
    return 0;
}
