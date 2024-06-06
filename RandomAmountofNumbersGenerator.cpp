/*
Write me a program in C++ that that generates a random amount of unique random numbers in a given range. 

I also want the amount of numbers to be a number that is within the given range.

And I want it to give me the numbers in ascending order1

chatGPT
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(0)); // seed the random number generator with the current time

    int lowerBound, upperBound;
    cout << "Enter the lower bound: ";
    cin >> lowerBound;
    cout << "Enter the upper bound: ";
    cin >> upperBound;

    // generate a random number of random numbers
    int numNumbers = rand() % (upperBound - lowerBound + 1) + lowerBound;

    cout << "Generating " << numNumbers << " unique random numbers between " << lowerBound << " and " << upperBound << ":\n";

    // generate a vector containing all possible values
    vector<int> possibleValues;
    for (int i = lowerBound; i <= upperBound; i++) {
        possibleValues.push_back(i);
    }

    // shuffle the vector to randomize the order
    random_shuffle(possibleValues.begin(), possibleValues.end());

    // select the first numNumbers elements of the shuffled vector
    vector<int> randomNumbers(possibleValues.begin(), possibleValues.begin() + numNumbers);

    // sort the random numbers in ascending order
    sort(randomNumbers.begin(), randomNumbers.end());

    // print the random numbers in random order
    cout << "Random order: ";
    for (int i = 0; i < numNumbers; i++) {
        cout << possibleValues[i] << " ";
    }
    cout << endl;

    // print the random numbers in ascending order
    cout << "Ascending order: ";
    for (int i = 0; i < numNumbers; i++) {
        cout << randomNumbers[i] << " ";
    }
    cout << endl;

    return 0;

