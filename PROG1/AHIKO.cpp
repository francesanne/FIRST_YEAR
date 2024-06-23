#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <algorithm>

using namespace std;

int type(const string& str, bool flag, int delayInSeconds) {
    for (size_t i = 0; i < str.length(); i++) {
        Sleep(30);
        cout << str[i];
    }

    
    Sleep(delayInSeconds * 1000);

    if (flag) {
        system("cls");
    }

    return 0;
}


void displayTable(const vector<vector<string>>& names, int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        cout << "--------------";
    }
    cout << "-" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout <<names[i][j] << "\t|\t"; 
        }
        cout << endl;
        for (int k = 0; k < cols; k++) {
            cout << "------------";
        }
        cout << "-" << endl;
    }
}



void todi() {
    int rows, cols ;
    int answer;
    int const1;


    type("enter your column ", false, 0);
    cout << endl;
    cout << ": ";
    cin >> cols;
    type("enter your rows: ", false, 0);
    cout << endl; 
    cout << ": ";
    cin >> rows;

    while (cin.peek() != '\n' || cin.fail()) {
        cin.clear();
        cin.ignore(300, '\n');
        type("INVALID!", false, 0);
        cout << endl;
        type("PLEASE INPUT NUMBERS ONLY", false, 0);
        cout << endl;
        cout << ": ";
        cin >> rows;
    }

    while (rows <= -1) {
        cin.clear();
        cin.ignore(300, '\n');
        type("INVALID INPUT!", false, 0);
        cout << endl;
        type("NEGATIVE NUMBERS ARE NOT ALLOWED", false, 0);
        cout << endl;
        cout << ": ";
        cin >> rows;
    }


    answer = rows * cols;
    cout << "You can list their " << answer << " names above." << endl;
    vector<vector<string>> names(rows, vector<string>(cols));
    cin.ignore();

    int counter = 1;
    int counterr = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "name " << counter << ".  (" << i << ", "<< j <<")"<< endl;
            cout << ": ";
            getline(cin, names[i][j]);
            counter++;
        }
    }
     type("DISPLAYING THE NAMES YOU ENTERED.", false, 0);
    cout << endl;
    displayTable(names, rows, cols);

    int choosing2d;

menuu:
    type("Please choose to proceed.", false, 0);
    cout << endl;
    cout << "(1) SEARCHING ARRAY" << endl;
    cout << "(2) SORTING ARRAY" << endl;
    cout << "(3) DELETION FUNCTION" << endl;
    cout << "(4) INSERTION FUNCTION" << endl;
    cout << ": ";
    cin >> choosing2d;

    while (cin.peek() != '\n' || cin.fail() || choosing2d < 0 || choosing2d >= 5) {
        cin.clear();
        cin.ignore(300, '\n');
        type("eeennngkkkk pataka!", false, 0);
        cout << endl;
        cout << "(1) SEARCHING ARRAY" << endl;
        cout << "(2) SORTING ARRAY" << endl;
        cout << ": ";
        cin >> choosing2d;
    }

    switch (choosing2d) {
    case 1:
    {
        type("SEARCHING.....", false, 0);
        cout << endl;
        int search;

        type("enter the number to trace", false, 0);
        cout << endl;
        cout << ": ";
        cin >> search;

        while (search > rows * cols || cin.peek() != '\n' || cin.fail() || search <= -1 || search == 0) {
            cin.clear();
            cin.ignore(300, '\n');
            type("INVALID INPUT!", false, 0);
            cout << endl;
            type("enter the number to trace", false, 0);
            cout << endl;
            cout << ": ";
            cin >> search;
        }


        if (search >= 1 && search <= rows * cols) {
            int row = (search - 1) / cols;
            int col = (search - 1) % cols;
            cout << "Name: " << names[row][col] << endl;
        }
        else {
            type("eeennngkkkk pataka!", false, 0);
            cout << endl;
            cout << "Invalid name number entered." << endl;
        }

        cout << endl;
        cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

        cin >> const1;

        if (const1 == 1) {
            goto menuu;
        }
        else if (const1 == 0) {
            cout << "TERMINATED!";
            exit(0);

        }
        break;
    }
    case 2:
    {
        sort(names.begin(), names.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
            });
        
        type("SORTED NAMES BY ALPHABETICAL.", false, 0);
        cout << endl;

        for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << names[i][j] << "\t|\t";
           
        }
        cout << endl;
        for (int k = 0; k < cols; k++) {
            cout << "---------------";
        }
        cout << "-" << endl;
    }


        cout << endl;
        cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

        cin >> const1;

        if (const1 == 1) {
            goto menuu;
        }
        else if (const1 == 0) {
            cout << "TERMINATED!";
            exit(0);
        }
        break;
    }
    case 3:

        int deleting;

        cout << "Enter the index of the name to delete (1 to " << rows << "): ";
        cin >> deleting;

        while (cin.peek() != '\n' || cin.fail() || deleting > rows * cols || deleting <= -1) {
            cin.clear();
            cin.ignore(300, '\n');
            type("INVALID INPUT", false, 0);
            cout << "Enter the index of the name to delete (1 to " << rows << "): ";
            cin >> deleting;
        }

        if (deleting >= 1 && deleting <= rows) {
            names.erase(names.begin() + deleting - 1);
            rows--;
            cout << "Name deleted." << endl;
        }
        else {
            cout << "Invalid index." << endl;
        }

        type("UPDATED NAMES:", false, 0);
        cout << endl;


        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++) {
                cout << (i + 1) << ". " << names[i][j] << endl;

            }

        cout << endl;
        cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

        cin >> const1;

        if (const1 == 1) {
            goto menuu;
        }
        else if (const1 == 0) {
            cout << "TERMINATED!";
            exit(0);
        }

        break;

    case 4:
        string name;
        cout << "Enter the name to insert: ";
        cin.ignore();
        getline(cin, name);

        names.emplace_back(vector<string>{name});

        rows++;
        answer = rows * cols;

        type("UPDATED NAMES:", false, 0);
        cout << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << (i + 1) << ". " << names[i][j] << endl;
            }
        }

        cout << endl;
        cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";
        cin >> const1;

        while (cin.peek() != '\n' || cin.fail() || const1 < 0 || const1 > 1) {
            cin.clear();
            cin.ignore(300, '\n');
            type("INVALID KEY ENTERED! Please press 1 to continue or 0 to exit: ", false, 0);
            cout << endl;
            cin >> const1;
        }

        if (const1 == 1) {
            goto menuu;
        }
        else if (const1 == 0) {
            cout << "TERMINATED!";
            exit(0);
        }

        break;
    }
}





void wandi() {
    int arr;
    int cont;
    type("enter the size of array ", false, 0);
    cout <<endl;
    cout << ": ";
    cin >> arr;

    while (cin.peek() != '\n' || cin.fail()){
        cin.clear();
        cin.ignore(300, '\n');
        type("INVALID INPUT!", false, 0);
        cout<<endl;
        type("enter the size of array", false, 0);
        cout <<endl;
        cin >> arr;
        
    }

    vector<int> jasten(arr);
    for (int i = 0; i < arr; i++) {
        cout << "enter the value of index [" << i << "]: ";
        cin >> jasten[i];
    }

    type("DISPLAYING VALUE OF ARRAYS", false, 0);
    cout << endl;

    for (int i = 0; i < arr; i++) {
        cout << "the index [" << i << "] has value of " << jasten[i] << endl;
    }


    int choosing1d;
menu:
    type("Please choose to proceed.", false, 0);
    cout << endl;
    cout << "(1) SEARCHING ARRAY" << endl;
    cout << "(2) SORTING ARRAY" << endl;
    cout << "(3) DELETION FUNCTION" << endl;
    cout << "(4) INSERTION FUNCTION" << endl;
    cout << ": ";
    cin >> choosing1d;

    while (cin.peek() != '\n' || cin.fail() || choosing1d < 0 || choosing1d >= 5) {
        cin.clear();
        cin.ignore(300, '\n');
        type("INVALID INPUT!", false, 0);
        cout << endl;
        type("Please choose to proceed.", false, 0);
        cout << endl;
        cout << "(1) SEARCHING ARRAY" << endl;
        cout << "(2) SORTING ARRAY" << endl;
        cout << "(3) DELETION FUNCTION" << endl;
        cout << "(4) INSERTION FUNCTION" << endl;
        cout << ": ";
        cin >> choosing1d;
    }
    switch (choosing1d) {
    case 1:
        type("SEARCHING....", false, 0);
        cout << endl;
        int search;

        cout << "enter index to trace (from 0 to " << arr - 1 << " only) : ";
        cin >> search;


        while (cin.peek() != '\n' || cin.fail() || search <= -1 || search >= arr) {
            cin.clear();
            cin.ignore(300, '\n');

            type("INVALID INPUT!", false, 0);
            cout << endl;
            cout << "enter index to trace (from 0 to " << arr - 1 << " only) : ";

            cin >> search;

        }
        cout << "The index you've search has a value of " << jasten[search];
        cout << endl;
        cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

        cin >> cont;



        while (cin.peek() != '\n' || cin.fail() || cont <= -1 || cont >= 2) {
            cin.clear();
            cin.ignore(300, '\n');

            type("INVALID KEY ENTERED! Please press 1 to continue or 0 to exit: ", false, 0);
            cout << endl;
            cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

            cin >> cont;
        }
        if (cont == 1) {
            goto menu;
        }
        else if (cont == 0) {
            cout << "TERMINATED!";
            exit(0);
        }


        break;

    case 2:

        int sorting;
        type("so you want to sort this into? ", false, 0);
        cout << endl;
        cout << "(1) ASCENDING ORDER" << endl;
        cout << "(2) DESCENDING ORDER" << endl;
        cout << ": ";
        cin >> sorting;

        while (cin.peek() != '\n' || cin.fail() || sorting < 0 || sorting >= 3) {
            cin.clear();
            cin.ignore(300, '\n');

            type("YOU ENTERED INVALID KEY!", false, 0);
            cout << endl;
            cout << "(1) ASCENDING ORDER" << endl;
            cout << "(2) DESCENDING ORDER" << endl;
            cout << ": ";
            cin >> sorting;
        }
        switch (sorting) {
        case 1:
            for (int y = 0; y < arr; y++) {
                for (int z = 0; z < arr - 1; z++) {
                    if (jasten[z] > jasten[z + 1]) {
                        int temp = jasten[z];
                        jasten[z] = jasten[z + 1];
                        jasten[z + 1] = temp;
                    }
                }
            }
            cout << "Ascending order: ";
            for (int a = 0; a < arr; a++) {
                cout << jasten[a] << ", ";
            }
            cout << endl;

            type("your request is done!", false, 0);
            cout << endl;
            type("sheeeeeeeeeeeeeeeeeeeessssshh!!!!!", false, 0);
            cout << endl;

            cout << endl;
            cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

            cin >> cont;

            if (cont == 1) {
                goto menu;
            }
            else if (cont == 0) {
                cout << "TERMINATED!";
                exit(0);
            }

            while (cin.peek() != '\n' || cin.fail() || cont <= -1 || cont >= 2) {
                cin.clear();
                cin.ignore(300, '\n');

                type("INVALID KEY ENTERED! Please press 1 to continue or 0 to exit: ", false, 0);
                cout << endl;
                cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

                cin >> cont;
            }

            if (cont == 1) {
                goto menu;
            }
            else if (cont == 0) {
                cout << "TERMINATED!";
                exit(0);
            }


            break;

        case 2:
            for (int y = 0; y < arr; y++) {
                for (int z = 0; z < arr - 1; z++) {
                    if (jasten[z] < jasten[z + 1]) {
                        int temp = jasten[z];
                        jasten[z] = jasten[z + 1];
                        jasten[z + 1] = temp;
                    }
                }
            }
            cout << "Descending order: ";
            for (int a = 0; a < arr; a++) {
                cout << jasten[a] << ", ";
            }

            cout << endl;

            type("your request is done!", false, 0);
            cout << endl;
            type("sheeeeeeeeeeeeeeeeeeeessssshh!!!!!", false, 0);
            cout << endl;

            cout << endl;
            cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

            cin >> cont;


            while (cin.peek() != '\n' || cin.fail() || cont <= -1 || cont >= 2) {
                cin.clear();
                cin.ignore(300, '\n');

                type("INVALID KEY ENTERED! Please press 1 to continue or 0 to exit: ", false, 0);
                cout << endl;
                cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

                cin >> cont;
            }
            if (cont == 1) {
                goto menu;
            }
            else if (cont == 0) {
                cout << "TERMINATED!";
                exit(0);
            }

            break;

        }

    case 3:
        int deleteIndex;
        cout << "Enter the index to delete (from 0 to " << arr - 1 << " only): ";
        cin >> deleteIndex;

        while (cin.peek() != '\n' || cin.fail() || deleteIndex > arr - 1 || deleteIndex <= -1) {
            cin.clear();
            cin.ignore(300, '\n');

            type("INVALID INPUT", false, 0);
            cout << endl;
            cout << "Enter the index to delete (from 0 to " << arr - 1 << " only): ";
            cin >> deleteIndex;
        }


        if (deleteIndex >= 0 && deleteIndex < arr) {
            for (int i = deleteIndex; i < arr - 1; i++) {
                jasten[i] = jasten[i + 1];
            }
            arr--;
            cout << "Element at index " << deleteIndex << " has been deleted." << endl;
        }
        else {
            cout << "Invalid index." << endl;
        }

        type("UPDATED ARRAY:", false, 0);
        cout << endl;
        for (int i = 0; i < arr; i++) {
            cout << "Index [" << i << "] has a value of " << jasten[i] << endl;
        }

        cout << endl;
        cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

        cin >> cont;

        while (cin.peek() != '\n' || cin.fail() || cont <= -1 || cont >= 2) {
            cin.clear();
            cin.ignore(300, '\n');

            type("INVALID KEY ENTERED! Please press 1 to continue or 0 to exit: ", false, 0);
            cout << endl;
            cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";

            cin >> cont;
        }
        if (cont == 1) {
            goto menu;
        }
        else if (cont == 0) {
            cout << "TERMINATED!";
            exit(0);
        }

        break;

    case 4:
        int insertIndex, insertValue;
        cout << "Enter the index to insert (from 0 to " << arr << "): ";
        cin >> insertIndex;

        while (cin.peek() != '\n' || cin.fail() || insertIndex < 0 || insertIndex > arr) {
            cin.clear();
            cin.ignore(300, '\n');
            type("INVALID INPUT. Please enter a valid index to insert: ", false, 0);
            cout << endl;
            cin >> insertIndex;
        }

        cout << "Enter the value to insert: ";
        cin >> insertValue;


        while (cin.peek() != '\n' || cin.fail()) {
            cin.clear();
            cin.ignore(300, '\n');
            type("ERROR! PLEASE INPUT NUMBERS ONLY.", false, 0);
            cout << endl;
            cout << "Enter the value to insert: ";
            cin >> insertValue;
        }

        jasten.insert(jasten.begin() + insertIndex, insertValue);
        arr++;


        type("UPDATED ARRAY:", false, 0);
        cout << endl;
        for (int i = 0; i < arr; i++) {
            cout << "Index [" << i << "] has a value of " << jasten[i] << endl;
        }

        cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";
        cin >> cont;

        while (cin.peek() != '\n' || cin.fail() || cont < 0 || cont > 1) {
            cin.clear();
            cin.ignore(300, '\n');
            type("INVALID KEY ENTERED! Please press 1 to continue or 0 to exit: ", false, 0);
            cout << endl;
            cin >> cont;
        }

        if (cont == 1) {
            goto menu;
        }
        else if (cont == 0) {
            cout << "TERMINATED!";
            exit(0);
        }

        break;
    }


}




int main(void) {
    int choice;



    type("Hi prof yams:))", true, 1);
    type("WELCOME TO MY OUTPUT!", false, 0);
    cout << endl;
    type("----MENU----", false, 0);
    cout << endl;
    type("(1) 1D ARRAY", false, 0);
    cout << endl;
    type("(2) 2D ARRAY", false, 0);
    cout << endl;
    cout << ": ";

    cin >> choice;

    while (cin.peek() != '\n' || cin.fail() || choice < 0 || choice >= 3) {
        cin.clear();
        cin.ignore(300, '\n');
        cout << "<1 og 2 ramana prof>" << endl;
        cout << "(1) 1D ARRAY" << endl;
        cout << "(2) 2D ARRAY" << endl;
        cout << ": ";
        cin >> choice;
    }

    switch (choice) {
    case 1:
        wandi();
        break;

    case 2:
        todi();
        break;
    }
    return 0;

}