#ifndef MAIN_HPP
#define MAIN_HPP

// Vector intro: makeVector, insertVector, deleteVector

#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<int> &);
void insertVector(vector<int> &, int);
int deleteVector(vector<int> &, int);
int randnum(void);
int getInput(void);
void printVector(vector<int>);

void makeVector(vector<int> &number)
{
    // TODO: fill the vector with random integers in [0, 20), then sort it.
    number.clear();
    for (int i = 0; i < 10; i++)
    {
        number.push_back(rand() % 20);
    }
    sort(number.begin(), number.end());
}

void insertVector(vector<int> &number, int usernum)
{
    // TODO: insert usernum into the sorted vector while keeping it sorted.
    number.push_back(usernum);
    sort(number.begin(), number.end());
}

int deleteVector(vector<int> &number, int usernum)
{
    // TODO: erase EVERY occurrence of usernum from the vector.
    int count = 0;
    for (auto iter = number.begin(); iter != number.end(); )
    {
        if (*iter == usernum)
        {
            iter = number.erase(iter);
            count++;
        }
        else
        {
            iter++;
        }
    }
    return count;
}

int getInput(void)
{
    int num;
    cout << "Enter your input\n";
    cin >> num;
    return num;
}

int randnum(void)
{
    return rand() % 100;
}

void printVector(vector<int> number)
{
    for (auto iter = number.begin(); iter != number.end(); iter++)
        cout << setw(5) << *iter;
    cout << endl;
}

#endif
