//
//  Main.cpp
//  Lab1
//
//  Created by Cory Bethrant on 8/23/17.
//
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
void BubbleSort(string items[], int numItems);

int main(){
    int numItems;
    cout << "How many names would you like to sort: ";
    cin >> numItems;
    string items[numItems];
    for(int i = 0; i < numItems; i++){
        cout << "Enter the name: ";
        cin >> items[i];
    }
    cout << "**** Printing unsorted array ****" << endl;
    for(int i = 0; i < numItems; i++){
        cout << items[i] << " ";
    }
    cout << endl;
    BubbleSort(items, numItems);
    cout << "**** Printing sorted array ****" << endl;
    for(int i = 0; i < numItems; i++){
        cout << items[i] << " ";
    }
    cout << endl;
}

void BubbleSort(string items[], int numItems) {
      bool swapped = true;
      int j = 0;
      string tmp;
      while (swapped) {
            swapped = false;
            j++;
            for (int i = 0; i < numItems - j; i++) {
                  if (items[i] > items[i + 1]) {
                        tmp = items[i];
                        items[i] = items[i + 1];
                        items[i + 1] = tmp;
                        swapped = true;
                  }
            }
      }
}
