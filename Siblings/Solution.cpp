
#include <iostream>
#include <vector>

using namespace std;

vector<int> findSiblings(const vector<int>& arr, int target) {
    vector<int> siblings;

    int parentIndex = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            parentIndex = i;
            break;
        }
    }

    if (parentIndex == 0) {
        return siblings;
    }
    
    int start,end;
    if(parentIndex==1 || parentIndex ==2){
        start=1;
        end=2;
    }
    else if(parentIndex>=3 && parentIndex<=6){
        start=3;
        end=6+1;
    }
    else if(parentIndex>=7 && parentIndex<=7*2){
        start=7;
        end=(7*2)+1;
    }
    for (int i = start; i < end; i++) {
        if (arr[i]!=target) {
            siblings.push_back(arr[i]);
        }
    }

    return siblings;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14}; 

    int targetElement;
    cout << "Enter the element to find its siblings: ";
    cin >> targetElement;

    vector<int> siblings = findSiblings(arr, targetElement);

    if (siblings.empty()) {
        cout << "-1" << endl;
    } else {
        cout << "Siblings of element " << targetElement << ": ";
        for (int sibling : siblings) {
            cout << sibling << " ";
        }
        cout << endl;
    }

    return 0;
}
