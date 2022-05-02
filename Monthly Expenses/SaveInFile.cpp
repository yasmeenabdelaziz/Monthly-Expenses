#include "SaveInFile.h"
 
void SaveInFile::save(string ToSave) {

ofstream fout;  // Create Object of Ofstream
ifstream fin;
fin.open("a.txt");
fout.open("a.txt", ios::app); // Append mode
if (fin.is_open())
fout << "\n ToSave \n"; // Writing data to file
fin.close();
fout.close(); // Closing the file

} 
