// Week 04 - Programming Assignment.cpp from Joshua Nichols
#include <iostream>
#include <fstream>
#include <iomanip> 
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    char space;
    // Vowels Letters.
    int aVowel = 0;
    int eVowel = 0;
    int iVowel = 0;
    int oVowel = 0;
    int uVowel = 0;
    int vowelCount = 0;
    // Consonants Letters.
    int jLetter = 0;
    int qLetter = 0;
    int zLetter = 0;
    int consonantCount = 0;
    // Excutes atleast one command line argument.
    if (argc < 2) {
        cout << "Error with input agrs.." << endl;
        return 1;
    }
    ifstream inFile;
    inFile.open(argv[1]);
    if (!inFile) {
        cout << "Error with file name.." << endl;
        return 1;
    }
    // Shows program's task and outputs command line arguement file.
    cout << setw(60) << setfill('*') << "" << left << endl;
    cout << setw(12) << setfill('*') << "" << " Welcome to my Letter Count Program " << setw(12) << setfill('*') << "" << left << endl;
    cout << setw(60) << setfill('*') << "" << left << endl;
    cout << endl;
    cout << "Analyzing file '" << argv[1] << "'...";
    cout << endl;
    // Algorithm that search for vowels and some selected consonants from inFile by character by character.
    while (!inFile.eof() && inFile >> space) {
        switch (space) {
        case 'A':
        case 'a':
            aVowel++;
            vowelCount++;
            break;
        case 'E':
        case 'e':
            eVowel++;
            vowelCount++;
            break;
        case 'I':
        case 'i':
            iVowel++;
            vowelCount++;
            break;
        case 'O':
        case 'o':
            oVowel++;
            vowelCount++;
            break;
        case 'U':
        case 'u':
            uVowel++;
            vowelCount++;
            break;
        case 'J':
        case 'j':
            jLetter++;
            consonantCount++;
            break;
        case 'Q':
        case 'q':
            qLetter++;
            consonantCount++;
            break;
        case 'Z':
        case 'z':
            zLetter++;
            consonantCount++;
            break;
        default:
            break;
        }
    }
    // Outputs algorithm's data from command line arguement program
    cout << endl;
    cout << left << "The number of A's: " << setw(41) << setfill('.') << ""  << aVowel << endl;
    cout << left << "The number of E's: " << setw(41) << setfill('.') << "" << eVowel <<endl;
    cout << left << "The number of I's: " << setw(41) << setfill('.') << "" << iVowel << endl;
    cout << left << "The number of O's: " << setw(41) << setfill('.') << "" << oVowel <<endl;
    cout << left << "The number of U's: " << setw(41) << setfill('.') << "" << uVowel << endl;
    cout << left << "The vowel count is: " << setw(40) << setfill('.') << "" << vowelCount << endl;
    cout << left << "The number of J's: " << setw(41) << setfill('.') << "" << jLetter << endl;
    cout << left << "The number of Q's: " << setw(41) << setfill('.') << "" << qLetter << endl;
    cout << left << "The number of Z's: " << setw(41) << setfill('.') << "" << zLetter << endl;
    cout << left << "The consonant count is: " << setw(36) << setfill('.') << "" << consonantCount << endl;
    cout << left << "Press any key to continue . . ." << endl;
    inFile.close();
    return 0;
}
/*
Used a switch statement instead of an if/else statement beacause it was easier to define and process then an if/else statement.
Used your video demonstrations and this link: http://www.cplusplus.com/articles/DEN36Up4/ To help me know what your sample program does , great resource.
Some commments in my code maybe useless or pointless but help me understand what the code does in my program and makes the program look neat and easy to read for other programers.
*/
