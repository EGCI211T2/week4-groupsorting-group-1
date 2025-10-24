#include <iostream>
#include <string>
#include <vector>
#include "sorting.h"
using namespace std;


int main(int argc, char* argv[]) {if (argc < 3) {
        cerr << "Usage: " << argv[0] << " <sort_type> <num1> <num2> <num3> ..." << endl;
        cerr << "Example: " << argv[0] << " bubble 20 50 10 60 5 1 2" << endl;
        cerr << "Supported types: bubble, insertion, selection, quick , cocktail " << endl;
        return 1;
}


string sortType = argv[1];
vector<int> numbers;
    
    try {
      for (int i = 2; i < argc; i++) {
        numbers.push_back(stoi(argv[i]));
        }
        } catch (const std::exception& e) {
        cerr << "Error: Invalid input. All arguments after sort_type must be numbers." << endl;
        cerr << e.what() << endl;
        return 1;
    }

    /*int additional_number;
    while (cin >> additional_number) {
        numbers.push_back(additional_number);
    }*/


    if (numbers.empty()) {
        cerr << "Error: No numbers provided." << endl;
        return 1;
    }


    cout << "Original array:" << endl;
    display(numbers);
    cout << "--- Sorting starts ---" << endl;


    if (sortType == "bubble") {
        bubbleSort(numbers);
    } else if (sortType == "insertion") {
        insertionSort(numbers);
    } else if (sortType == "selection") {
        selectionSort(numbers);
    } else if (sortType == "quick") {quickSort(numbers, 0, numbers.size() - 1);
    } else if (sortType == "cocktail") { cocktailShakerSort(numbers);
    }else {
        cerr << "Error: Unknown sort type '" << sortType << "'" << endl;
        cerr << "Supported types: bubble, insertion, selection, quick , cocktail " << endl;
        return 1;
    }

    cout << "--- Sorting finished ---" << endl;
    std::cout << "Sorted array:" << std::endl;
    display(numbers);

    

    return 0;
}