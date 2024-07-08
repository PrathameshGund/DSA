#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            if (arr[row][col] == target) {
                return true;
            }
        }
    }
    return false;
}

void sum(int arr[][4],int row,int  col)
{
    cout<<"Printing sum"<<endl;
    for(int row=0;row<3;row++)
    {
        int sum=0;
        for(int col=0;col<4;col++)
        {
            sum=sum+arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main() {

    int arr[3][4] = {1, 2, 3, 4,5, 6, 7, 8,9, 10, 11, 12};


    cout<<"Printing the matrix:"<<endl;
     for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<"->";
        }
        cout<<endl;
    }


    cout << "Enter the number to find: ";
    int target;
    cin >> target;





    if (isPresent(arr, target)) {
        cout << "Element is present" << endl;
    } else {
        cout << "Element is not present" << endl;
    }
    sum(arr,3,4);
    return 0;
}
