#define CURL_STATICLIB
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <mutex>
#include <cstdlib>
#include <ctime>
//#include <curl/curl.h>
#include <conio.h>
#include <chrono>
#include <thread>
#include <fstream>
#include <Windows.h>
HANDLE hConsole;


using namespace std;
void secret(int a) {
    setlocale(LC_ALL, "ru");

    srand(time(NULL)); 

    string key;

    for (int i = 0; i < 19; i++) { 

        string F = "abcdefABCDEF0123456789";
        char RN = F[rand() % F.size()];

        key += RN;
    }

    ofstream keyfile("key.txt"); 

    if (!keyfile) {
        string texxt = "[-] Failed to open file for input data!";
        for (int i = 0; i < texxt.length(); i++) {
            cout << texxt[i] << flush;
            this_thread::sleep_for(chrono::milliseconds(23));
        }
    }

    keyfile << key;
    keyfile.close();

    string text111 = "[+] Key successful generated at the file - key.txt";
    for (int i = 0; i < text111.length(); i++) {
        cout << text111[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(23));
    }
}

string generate_random_string(int length) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    string str;
    str.reserve(length);

    for (int i = 0; i < length; ++i) {
        str += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return str;
}


int main() {
    SetConsoleTitleW(L"Nitro Searching By !clipesss#6666");
    secret(0);
    Beep(550, 410);
    SetConsoleTextAttribute(hConsole, 8);
    string key;
    ifstream keyfile("key.txt"); 

    if (!keyfile) {
        SetConsoleTextAttribute(hConsole, 4);
        string text10 = "[-] Error opening file with key!";
        for (int i = 0; i < text10.length(); i++) {
            cout << text10[i] << flush;
            this_thread::sleep_for(chrono::milliseconds(23));
        }

        cout << endl << endl;
        system("pause");
    }

    getline(keyfile, key); 
    keyfile.close();
    cout << endl;
    string text11 = "[+] Enter key: ";
    for (int i = 0; i < text11.length(); i++) {
        cout << text11[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(23));
    }
    string userKey;
    cin >> userKey;

    if (userKey == key) {
        SetConsoleTextAttribute(hConsole, 2);

        string text12 = "[+] Access is allowed";
        for (int i = 0; i < text12.length(); i++) {
            cout << text12[i] << flush;
            this_thread::sleep_for(chrono::milliseconds(23));
        }
        Sleep(1500);
        Beep(550, 410);
        system("cls");
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 8);
        cout << "       __  __                    ______                   _             " << endl;
        cout << "      |  \\/  |                  |  ____|                 (_)            " << endl;
        cout << "      | \\  / | ___  __ _  __ _  | |__ __ _ _ __ _ __ ___  _ _ __   __ _ " << endl;
        cout << "      | |\\/| |/ _ \\/ _` |/ _` | |  __/ _` | '__| '_ ` _ \\| | '_ \\ / _` |" << endl;
        cout << "      | |  | |  __/ (_| | (_| | | | | (_| | |  | | | | | | | | | | (_| |" << endl;
        cout << "      |_|  |_|\\___|\\__, |\\__,_| |_|  \\__,_|_|  |_| |_| |_|_|_| |_|\\__, |" << endl;
        cout << "                    __/ |                                          __/ |" << endl;
        cout << "                   |___/                                          |___/ " << endl << endl;

        //TEXT
        string text = "[+] Welcome to the best program - Nitro Searching.";
        for (int i = 0; i < text.length(); i++) {
            cout << text[i] << flush;
            this_thread::sleep_for(chrono::milliseconds(23));

        }
        cout << endl;
        string webhook_url;
        string text5 = "[+] Write you Discord WebHook.";
        for (int i = 0; i < text5.length(); i++) {
            cout << text5[i] << flush;
            this_thread::sleep_for(chrono::milliseconds(23));

        }
        cout << endl;
        cin >> webhook_url;

        //TEXT
        string text1 = "[+] Write < gen > to start the generator nitros.";
        for (int i = 0; i < text1.length(); i++) {

            cout << text1[i] << flush;
            this_thread::sleep_for(chrono::milliseconds(23));

        }
        cout << endl;

        // IF
        string ans;
        cin >> ans;
        //clear
        system("cls");


        setlocale(LC_ALL, "ru");
        //TOKEN
        const int num_threads = 10;
        int num_gifts;


        srand(time(nullptr));

        vector<string> gifts;

        if (ans == "gen")
        {
            // TEXT
            string text2 = "[+] How much codes you want generate?";
            cout << endl;
            for (int i = 0; i < text2.length(); i++) {

                cout << text2[i] << flush;
                this_thread::sleep_for(chrono::milliseconds(23));

            }
            cout << endl;
            // CODES MUCH
            cin >> num_gifts;
            cout << endl;
            string text4 = "[+] Start generate nitros...";
            for (int i = 0; i < text4.length(); i++) {

                cout << text4[i] << flush;
                this_thread::sleep_for(chrono::milliseconds(23));

            }
            Sleep(1500);
            system("cls");

            for (int i = 0; i < num_gifts; ++i) {
                SetConsoleTextAttribute(hConsole, 2);
                cout << "[+] ";
                string gift = "https://discord.gift/" + generate_random_string(16);
                gifts.push_back(gift);
                cout << gift << endl;
            }
        }

        else {
            SetConsoleTextAttribute(hConsole, 4);
            cout << endl;
            string text3 = "[-] Incorrect input...  Restart the program and try again.";
            for (int i = 0; i < text3.length(); i++) {

                cout << text3[i] << flush;
                this_thread::sleep_for(chrono::milliseconds(23));

            }
            cout << endl;
            int PROLOG;
            cin >> PROLOG;
        }
        SetConsoleTextAttribute(hConsole, 8);

        string text7 = "[+] Finish generate.";
        for (int i = 0; i < text7.length(); i++) {

            cout << text7[i] << flush;
            this_thread::sleep_for(chrono::milliseconds(23));

        }
        Sleep(1500);
        system("cls");


        string text6 = "[+] Click any button on keyboard to start send nitros in discord...";
        for (int i = 0; i < text6.length(); i++) {

            cout << text6[i] << flush;
            this_thread::sleep_for(chrono::milliseconds(23));

        }
        cout << endl;
        getchar();
      

        

    }
    system("pause");
    return 0;
}