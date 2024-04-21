#include <iostream>

// preprocessor directive for file-based input and output operations
#include <fstream>

// preprocessor directive for string data types manipulation
#include <string>

// preprocessor directive for vectors
#include <vector>

// preprocessor directive for functions for classfying and transforming characters
#include <cctype>

// preprocessor directive for strings in a stream or a sentence
#include <sstream>

using namespace std;

// a function declaration for the creation of a text document
short fileCreation();

// a function declaration for reading from the text document created in "fileCreation()" function
short fileManipulation();

// a function declaration to count the number of vowels in the file text document
short vowelCount1();

// a function declaration to count the number of words in the file text document
short countingWords();

// a function declaration for printing the contents of the file in reverse order
short Reverse();

// a function declaration to capitalise each second letter of the each word of the contents 
short toCapitalLetter();


// function to create a text file to write to 
short fileCreation()
{
    // Create and open a text file to write the statement to
   ofstream create_file("FileCreation.txt");
   
   // create_file.open("FileCreation.txt");
  
   // check if the file was successfully opened before writing to it 
   if(create_file.is_open()) 
    {
        // Write to the file the statement given
        create_file << "This is the Advanced Computer Programming Module";
    }
    else
    {
        // print an error message to the console to show that the file was not successfully opened 
        cerr << "Error: Failed to open the file For Writing!" << endl;
        return 1; // Return an error code
    }

    // Close the file
    create_file.close();
    
    return 0; // since a return function of (short) cannot return a void then it must return some value (0)
}



short fileManipulation()
{
    // a string declaration of the direction of the directory containing the text document in the local repository of my computer
    string file_path = "C:\\Users\\Temporary\\OneDrive\\Documents\\C++\\C-\\C++\\FileCreation.txt";
    
    // ifstream is used to open the file we want to read from, in this case (FileCreation.txt)
    ifstream read_from(file_path);
    
    // declaration of a string variables to help with reading from the file
    string fileData; 
    
    // if statement to check if the file is open or not
    if(read_from.is_open())
    {
        // while loop to read the file contents into (fileData (string variable declared above)) string by string if the file is open
        while(read_from >> fileData)
        {
            cout << fileData << " "; // print out the contents of the file in a single line with spaces in between the strings 
        }
        
    }
    else 
    {   // if file is not open then notify the user
        // print an error message to the console to show that the file was not successfully opened 
        cerr << "Error: Failed to open the file for Reading!" << endl;
        return 1; // Return an error code
    }
    
    read_from.close(); // close the file aftter all the manipulations made to it 
    
    return 0; // since a return function of (short) cannot return a void then it must return some value (0)
}


// a function to count the number of vowels in the file text document
short vowelCount1()
{
    // 1. COUNTING THE NUMBER OF VOWELS IN THE FILE  
    
    // a string declaration of the direction of the directory containing the text document in the local repository of my computer
    string file_path = "C:\\Users\\Temporary\\OneDrive\\Documents\\C++\\C-\\C++\\FileCreation.txt";
    
    // ifstream is used to open the file we want to read from, in this case (FileCreation.txt)
    ifstream read_from(file_path);
    
    // declaration of a string variables to help with reading from the file
    string fileData; 
    
    // if statement to check if the file is open or not
    if(read_from.is_open())
    {
        // declaration of a variable to help with the count 
        char characterCount;
        
        // initialise word count 
        int vowelCount = 0;
        
        // read contents from the file 
        while (read_from >> std::noskipws >> characterCount) 
        {
            if (std::isalpha(characterCount)) 
            {
                characterCount = std::tolower(characterCount);
                if (characterCount == 'a' || characterCount == 'e' || characterCount == 'i' || characterCount == 'o' || characterCount == 'u') 
                {
                    vowelCount++;
                }
            }
        }
        cout << "The total number of vowels is: " << vowelCount << endl;
    }
    else 
    {   // if file is not open then notify the user
        // print an error message to the console to show that the file was not successfully opened 
        cerr << "Error: Failed to open the file for Reading!" << endl;
        return 1; // Return an error code
    }
    
    read_from.close(); // Close the file
    
    return 0; // since a return function of (short) cannot return a void then it must return some value (0)
}


// function to count the number of words in the sentence 
short countingWords()
{
        // 2. TO READ THE NUMBER OF WORDS IN THE STRING STREAM IN THE TEXT DOCUMENT FILE 
    
        // a string declaration of the direction of the directory containing the text document in the local repository of my computer
        string file_path = "C:\\Users\\Temporary\\OneDrive\\Documents\\C++\\C-\\C++\\FileCreation.txt";
    
        // ifstream is used to open the file we want to read from, in this case (FileCreation.txt)
        ifstream read_from(file_path);
    
        // declaration of a string variables to help with reading from the file
        string fileData; 
    
        // if statement to check if the file is open or not
        if(read_from.is_open())
        {
        
        // declaration of a string variable to read the content int 
        string content;
        
        // declaration of a string variable to read each word (string) 
        stringstream readstrings;
 
        // Reading the entire content of the file
        readstrings << read_from.rdbuf();
        content = readstrings.str();

        // Initialize word count
        int wordCount = 0;

        // Split the content of the text file into words
        istringstream ireadstrings(content);
        string word;
            while (ireadstrings >> word) 
            {
                wordCount++;
            }
        // output the total number of words to the console 
        cout << "The total number of words is: " << wordCount << endl;
        
        }
        else 
        {   // if file is not open then notify the user
            // print an error message to the console to show that the file was not successfully opened 
            cerr << "Error: Failed to open the file for Reading!" << endl;
            return 1; // Return an error code
        }
        read_from.close();
        
        return 0; // since a return function of (short) cannot return a void then it must return some value (0)
}


short Reverse()
{
        // 3. TO PRINT IN REVERSE ORDER THE CONTENTS OF THE FILE
   
        // a string declaration of the direction of the directory containing the text document in the local repository of my computer
        string file_path = "C:\\Users\\Temporary\\OneDrive\\Documents\\C++\\C-\\C++\\FileCreation.txt";
    
        // ifstream is used to open the file we want to read from, in this case (FileCreation.txt)
        ifstream read_from(file_path);
    
        // declaration of a string variables to help with reading from the file
        string fileData; 
    
        // if statement to check if the file is open or not
        if(read_from.is_open())
        {
        
        // declaration of a string variable to store the contents of the file 
        string contents2;
        
        // vectors to help with reading in reverse
        vector<string> words;

        // Read the entire content of the file
        stringstream readstrings2;
        
        // Read the file buffer into the stringstream
        readstrings2 << read_from.rdbuf();
        
        // Store the content in the 'content' string
        contents2 = readstrings2.str();

        // Split content into words
        istringstream ireadstrings2(contents2);
        string word2;
        while (ireadstrings2 >> word2) 
        {
            words.push_back(word2);
        }

        // Print the words in reverse order
        for (int i = words.size() - 1; i >= 0; --i) {
            cout << words[i] << " ";
        }
        cout << endl; 
        }
        else 
        {   // if file is not open then notify the user
            // print an error message to the console to show that the file was not successfully opened 
            cerr << "Error: Failed to open the file for Reading!" << endl;
            return 1; // Return an error code
        }
        read_from.close();
        return 0; // since a return function of (short) cannot return a void then it must return some value (0)
}


// function to capitalise each second letter of the words in the text document above
short toCapitalLetter()
{
    // 4. TO PRINT THE SECOND LETTER OF EACH WORD TO UPPERCASE
    
    // a string declaration of the direction of the directory containing the text document in the local repository of my computer
    string file_path = "C:\\Users\\Temporary\\OneDrive\\Documents\\C++\\C-\\C++\\FileCreation.txt";
    
    // ifstream is used to open the file we want to read from, in this case (FileCreation.txt)
    ifstream read_from(file_path);
    
    // declaration of a string variables to help with reading from the file
    string fileData; 
    
    // if statement to check if the file is open or not
    if(read_from.is_open())
    {
        string content3;
        string modifiedContent;

        // Read the entire content of the file
        ostringstream oss;
        oss << read_from.rdbuf();
        content3 = oss.str();

        // Split content into words
        istringstream ireadstrings3(content3);
        string word3;
        while (ireadstrings3 >> word3) 
        {
            if (word3.length() >= 2) 
            {
                word3[1] = std::toupper(word3[1]); // Capitalize the second letter
            }
            modifiedContent += word3 + " ";
        }

        // Write the modified content back to the file
        ofstream outFile(file_path);
        outFile << modifiedContent;

        cout << "Second letter of each word in " << file_path << " has been capitalized." << endl;
    }
    else 
    {   // if file is not open then notify the user
        // print an error message to the console to show that the file was not successfully opened 
        cerr << "Error: Failed to open the file for Reading!" << endl;
        return 1; // Return an error code
    }
    read_from.close();
    
    return 0; // since a return function of (short) cannot return a void then it must return some value (0)
}



int main() 
{
    // function call to create the needed text file 
    fileCreation(); 
    
    // function call to read from the created file above
    fileManipulation();
    
    // function call to count the number of vowels in the sentence
    vowelCount1();
    
    // function call to count the number of words(individual strings) in the sentence
    countingWords();
    
    // function call to reverse the statement in the file 
    Reverse();
     
    // function call to capitalise the second letter of each word in the given statement in the file  
    toCapitalLetter();
        
    
    std::cin.get();
    return 0; 
}