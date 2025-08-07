#include <iostream>
#include <fstream>
using namespace std;

int main() {
   
    fstream file("position.txt", ios::out | ios::in | ios::trunc);  
    if (!file) {
        cerr << "Error creating/opening file!" << endl;
        return 1;
    }

    
    file << "Hello, Samriddhi!";
    
   
    streampos writePos = file.tellp();
    cout << "Current write position (tellp): " << writePos << endl;

 
    file.seekp(7);  
    file << "World";  
    
    file.close();

    
    file.open("position.txt", ios::in);
    if (!file) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    streampos readPos = file.tellg();
    cout << "Current read position (tellg): " << readPos << endl;

  
    string content;
    getline(file, content);
    cout << "File content: " << content << endl;


    file.clear(); 
    file.seekg(7); 
    char buffer[6];  
    file.read(buffer, 5);
    buffer[5] = '\0';

    cout << "Reading 5 characters from position 7: " << buffer << endl;

    file.close();
    cout << "Samriddhi Gautam : BIT28 : File pointers";
    return 0;
}
