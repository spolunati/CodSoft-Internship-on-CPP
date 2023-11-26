#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

char arr[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void board() {
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "\t \t     |     |     " << "\n";
    cout << "\t \t  " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << "   " << "\n";
    cout << "\t \t ____|_____|_____" << "\n";
    cout << "\t \t     |     |     " << "\n";
    cout << "\t \t  " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << "   " << "\n";
    cout << "\t \t ____|_____|_____" << "\n";
    cout << "\t \t     |     |     " << "\n";
    cout << "\t \t  " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << "   " << "\n";
    cout << "\t \t     |     |     " << "\n";
}

void rules() {
    SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "\n \n \t\t RULES OF THE GAME \n \n";
    cout << "1. Two players can play this game through one terminal. \n";
    cout << "2. The first player gets to choose either X or O. \n";
    cout << "3. Choose the location where you want to insert your move by entering the number associated with that place. \n";
    cout << "4. Choose only one number at a time. \n";
    cout << "5. The game will end if you repeat a chosen number. Be careful while entering numbers. \n";
}

int conditions() {
    if (arr[0] == arr[1] && arr[1] == arr[2]) {
        return arr[0];
    }if (arr[0] == arr[4] && arr[4] == arr[8]) {
        return arr[0];
    }if (arr[0] == arr[3] && arr[3] == arr[6]) {
        return arr[0];
    }if (arr[3] == arr[4] && arr[4] == arr[5]) {
        return arr[3];
    }if (arr[6] == arr[7] && arr[7] == arr[8]) {
        return arr[6];
    }if (arr[6] == arr[4] && arr[4] == arr[2]) {
        return arr[6];
    }if (arr[1] == arr[4] && arr[4] == arr[7]) {
        return arr[1];
    }if (arr[2] == arr[5] && arr[5] == arr[8]) {
        return arr[2];
    }if(arr[0] != '1' && arr[1] != '2' && arr[2] != '3' &&
        arr[3] != '4' && arr[4] != '5' && arr[5] != '6' &&
        arr[6] != '7' && arr[7] != '8' && arr[8] != '9'){
         return 'D';
    }
    return 'N';
}

int main() {
    char w;
    char s;
    char p[2];
    SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "\n \n \n \t \t \t Welcome To The World Of TIC-TAC-TOE \n \n \n";
    board();
    rules();
    for (int i = 0; i < 2; i++) {
        cout << "Enter the sign of player " << i + 1 << " : ";
        cin >> p[i];
    }

    do {
        w = conditions();
        for (int i = 0; i < 2; i++) {
            board();
            cout << "The player " << i + 1 << " with sign " << p[i] << " : ";
            cout << "Enter the location where you want to enter your sign: ";
            cin >> s;

            if (s >= '1' && s <= '9' && arr[s - '1'] != 'X' && arr[s - '1'] != 'O') {
                arr[s - '1'] = p[i];
            } else {
                cout << "Invalid location entered. Please try again." << endl;
                break;
            }
        }
    } while (w == 'N');

    if (w == 'D') {
        cout << "The Match Is A DRAW";
    }  else {
    cout << "Player " << (w == 'X' ? 1 : 2) << " with sign " << w << " wins!" << endl;
}

    return 0;
}
