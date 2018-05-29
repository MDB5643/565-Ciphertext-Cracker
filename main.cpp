#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <cstring>
#include <ostream>
#include <cstdio>
#include <algorithm>
#include <ctime>

using namespace std;

vector<string> dict;

char asciiChart(int x)
{
  char equivaChar;
  if (x == 0)
  {
    equivaChar = 'A';
  }
  if (x == 1 || x == -25)
  {
    equivaChar = 'B';
  }
  if (x == 2 || x == -24)
  {
    equivaChar = 'C';
  }
  if (x == 3 || x == -23)
  {
    equivaChar = 'D';
  }
  if (x == 4 || x == -22)
  {
    equivaChar = 'E';
  }
  if (x == 5 || x == -21)
  {
    equivaChar = 'F';
  }
  if (x == 6 || x == -20)
  {
    equivaChar = 'G';
  }
  if (x == 7 || x == -19)
  {
    equivaChar = 'H';
  }
  if (x == 8 || x == -18)
  {
    equivaChar = 'I';
  }
  if (x == 9 || x == -17)
  {
    equivaChar = 'J';
  }
  if (x == 10 || x == -16)
  {
    equivaChar = 'K';
  }
  if (x == 11 || x == -15)
  {
    equivaChar = 'L';
  }
  if (x == 12 || x == -14)
  {
    equivaChar = 'M';
  }
  if (x == 13 || x == -13)
  {
    equivaChar = 'N';
  }
  if (x == 14 || x == -12)
  {
    equivaChar = 'O';
  }
  if (x == 15 || x == -11)
  {
    equivaChar = 'P';
  }
  if (x == 16 || x == -10)
  {
    equivaChar = 'Q';
  }
  if (x == 17 || x == -9)
  {
    equivaChar = 'R';
  }
  if (x == 18 || x == -8)
  {
    equivaChar = 'S';
  }
  if (x == 19 || x == -7)
  {
    equivaChar = 'T';
  }
  if (x == 20 || x == -6)
  {
    equivaChar = 'U';
  }
  if (x == 21 || x == -5)
  {
    equivaChar = 'V';
  }
  if (x == 22 || x == -4)
  {
    equivaChar = 'W';
  }
  if (x == 23 || x == -3)
  {
    equivaChar = 'X';
  }
  if (x == 24 || x == -2)
  {
    equivaChar = 'Y';
  }
  if (x == 25 || x == -1)
  {
    equivaChar = 'Z';
  }
  return equivaChar;
}

string vigenereCipher(string plainText, string key)
{
  uint keydex = 0;

  string hiddenWord = "";

  for (uint i = 0; i < plainText.length(); i++)
  {
    int linedup = (int)key[keydex];
    char convertChar = plainText[i];

    int trueCypher = ((int(convertChar) + linedup) % 26);
    if (trueCypher == 0)
    {
      hiddenWord += "A";
    }

    if(trueCypher == 1)
    {
      hiddenWord += "B";
    }

    if (trueCypher == 2)
    {
      hiddenWord += "C";
    }

    if(trueCypher == 3)
    {
      hiddenWord += "D";
    }

    if (trueCypher == 4)
    {
      hiddenWord += "E";
    }

    if(trueCypher == 5)
    {
      hiddenWord += "F";
    }

    if (trueCypher == 6)
    {
      hiddenWord += "G";
    }

    if(trueCypher == 7)
    {
      hiddenWord += "H";
    }

    if (trueCypher == 8)
    {
      hiddenWord += "I";
    }

    if(trueCypher == 9)
    {
      hiddenWord += "J";
    }

    if (trueCypher == 10)
    {
      hiddenWord += "K";
    }

    if(trueCypher == 11)
    {
      hiddenWord += "L";
    }

    if (trueCypher == 12)
    {
      hiddenWord += "M";
    }

    if(trueCypher == 13)
    {
      hiddenWord += "N";
    }

    if (trueCypher == 14)
    {
      hiddenWord += "O";
    }

    if(trueCypher == 15)
    {
      hiddenWord += "P";
    }

    if (trueCypher == 16)
    {
      hiddenWord += "Q";
    }

    if(trueCypher == 17)
    {
      hiddenWord += "R";
    }

    if (trueCypher == 18)
    {
      hiddenWord += "S";
    }

    if(trueCypher == 19)
    {
      hiddenWord += "T";
    }

    if (trueCypher == 20)
    {
      hiddenWord += "U";
    }

    if(trueCypher == 21)
    {
      hiddenWord += "V";
    }

    if (trueCypher == 22)
    {
      hiddenWord += "W";
    }

    if(trueCypher == 23)
    {
      hiddenWord += "X";
    }

    if (trueCypher == 24)
    {
      hiddenWord += "Y";
    }

    if(trueCypher == 25)
    {
      hiddenWord += "Z";
    }

    if (keydex < key.length() - 1)
    {
      keydex++;
    }
    else
    {
      keydex = 0;
    }

  }
  cout << "The encrypted word is: " << endl;
  cout << hiddenWord << endl;
  return "Cipher";
}

string cracker2(string cipherText, int keyLength, int firstWordLength)
{
  int keyFirstChar;
  int keySecondChar;

  cout << "Generating possible first words:" << endl;
  string firstWord = cipherText.substr (0, firstWordLength);
  cout << firstWord << endl;

  //int wholeLength = cipherText.length();

  //cout << wholeLength << endl;
  clock_t start;
  double duration;

  start = clock();
  for (int j = 65; j <= 90; j++)
  {
    for (int z = 65; z <=90; z++)
    {
      string possFirst = "";
      //bool condBreak = false;
      int swap = j;

      for (int i = 0; i < firstWordLength; i++)
      {

        int linedup = swap;
        char cyphChar = firstWord[i];

        int trueCypher = ((int(cyphChar) - linedup) % 26);
        //cout << trueCypher << endl;

        if (trueCypher == 0)
        {
          possFirst += "A";
        }

        if(trueCypher == 1)
        {
          possFirst += "B";
        }

        if (trueCypher == 2)
        {
          possFirst += "C";
        }

        if(trueCypher == 3)
        {
          possFirst += "D";
        }

        if (trueCypher == 4)
        {
          possFirst += "E";
        }

        if(trueCypher == 5)
        {
          possFirst += "F";
        }

        if (trueCypher == 6)
        {
          possFirst += "G";
        }

        if(trueCypher == 7)
        {
          possFirst += "H";
        }

        if (trueCypher == 8)
        {
          possFirst += "I";
        }

        if(trueCypher == 9)
        {
          possFirst += "J";
        }

        if (trueCypher == 10)
        {
          possFirst += "K";
        }

        if(trueCypher == 11)
        {
          possFirst += "L";
        }

        if (trueCypher == 12)
        {
          possFirst += "M";
        }

        if(trueCypher == 13)
        {
          possFirst += "N";
        }

        if (trueCypher == 14)
        {
          possFirst += "O";
        }

        if(trueCypher == 15)
        {
          possFirst += "P";
        }

        if (trueCypher == 16)
        {
          possFirst += "Q";
        }

        if(trueCypher == 17)
        {
          possFirst += "R";
        }

        if (trueCypher == 18)
        {
          possFirst += "S";
        }

        if(trueCypher == 19)
        {
          possFirst += "T";
        }

        if (trueCypher == 20)
        {
          possFirst += "U";
        }

        if(trueCypher == 21)
        {
          possFirst += "V";
        }

        if (trueCypher == 22)
        {
          possFirst += "W";
        }

        if(trueCypher == 23)
        {
          possFirst += "X";
        }

        if (trueCypher == 24)
        {
          possFirst += "Y";
        }

        if(trueCypher == 25)
        {
          possFirst += "Z";
        }

        if(trueCypher == -1)
        {
          possFirst += "Z";
        }

        if (trueCypher == -2)
        {
          possFirst += "Y";
        }

        if(trueCypher == -3)
        {
          possFirst += "X";
        }

        if (trueCypher == -4)
        {
          possFirst += "W";
        }

        if(trueCypher == -5)
        {
          possFirst += "V";
        }

        if (trueCypher == -6)
        {
          possFirst += "U";
        }

        if(trueCypher == -7)
        {
          possFirst += "T";
        }

        if (trueCypher == -8)
        {
          possFirst += "S";
        }

        if(trueCypher == -9)
        {
          possFirst += "R";
        }

        if (trueCypher == -10)
        {
          possFirst += "Q";
        }

        if(trueCypher == -11)
        {
          possFirst += "P";
        }

        if (trueCypher == -12)
        {
          possFirst += "O";
        }

        if(trueCypher == -13)
        {
          possFirst += "N";
        }

        if (trueCypher == -14)
        {
          possFirst += "M";
        }

        if(trueCypher == -15)
        {
          possFirst += "L";
        }

        if (trueCypher == -16)
        {
          possFirst += "K";
        }

        if(trueCypher == -17)
        {
          possFirst += "J";
        }

        if (trueCypher == -18)
        {
          possFirst += "I";
        }

        if(trueCypher == -19)
        {
          possFirst += "H";
        }

        if (trueCypher == -20)
        {
          possFirst += "G";
        }

        if(trueCypher == -21)
        {
          possFirst += "F";
        }

        if (trueCypher == -22)
        {
          possFirst += "E";
        }

        if(trueCypher == -23)
        {
          possFirst += "D";
        }

        if (trueCypher == -24)
        {
          possFirst += "C";
        }

        if(trueCypher == -25)
        {
          possFirst += "B";
        }
        keyFirstChar = j;
        keySecondChar = z;

        if (swap == j)
        {
          swap = z;
        }
        else
        {
          swap = j;
        }

    }

    if (std::find(dict.begin(), dict.end(), possFirst) != dict.end())
    {
      cout << keyFirstChar << " " << keySecondChar << endl;
      cout << "POSSIBLE MATCHED WORD:" << endl;
      cout << possFirst << endl;

      string key = "";
      key += asciiChart(keyFirstChar - 65);
      key += asciiChart(keySecondChar - 65);
      cout << "ASSOCIATED KEY: " << endl;
      cout << key << endl;

      cout << "ENTIRE STRING: " << endl;
      int swap = keyFirstChar;
      string outputStr = "";

      for (uint u = 0; u < cipherText.length(); u ++)
      {
        char cyphChar = cipherText[u];
        int trueCypher = ((int(cyphChar) - swap) % 26);
        outputStr += asciiChart(trueCypher);

        if (swap == keyFirstChar)
        {
          swap = keySecondChar;
        }
        else
        {
          swap = keyFirstChar;
        }
      }
      cout << outputStr << endl;
      duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
      cout << "Duration: " << duration << endl;
    }

  }
    //int hashed = firstWordLength % (i + 2);
  }
  return "CRACK";
}

string cracker3(string cipherText, int keyLength, int firstWordLength)
{
  int keyFirstChar;
  int keySecondChar;
  int keyThirdChar;

  cout << "Generating possible first words:" << endl;
  string firstWord = cipherText.substr (0, firstWordLength);
  cout << firstWord << endl;

  //int wholeLength = cipherText.length();

  //cout << wholeLength << endl;

  std::clock_t start;
  double duration;

  start = std::clock();

  for (int j = 65; j <= 90; j++)
  {
    for (int z = 65; z <=90; z++)
    {
      for (int l = 65; l <= 90; l++)
      {
        string possFirst = "";
        //bool condBreak = false;
        int swap = j;

        for (int i = 0; i < firstWordLength; i++)
        {

          int linedup = swap;
          char cyphChar = firstWord[i];

          int trueCypher = ((int(cyphChar) - linedup) % 26);
          //cout << trueCypher << endl;

          possFirst += asciiChart(trueCypher);

          keyFirstChar = j;
          keySecondChar = z;
          keyThirdChar = l;

          if (swap == j)
          {
            swap = z;
          }
          else if (swap == z)
          {
            swap = l;
          }
          else if (swap == l)
          {
            swap = j;
          }

        }

        if (std::find(dict.begin(), dict.end(), possFirst) != dict.end())
        {
          cout << keyFirstChar << " " << keySecondChar << endl;
          cout << "POSSIBLE MATCHED WORD:" << endl;
          cout << possFirst << endl;

          string key = "";
          key += asciiChart(keyFirstChar - 65);
          key += asciiChart(keySecondChar - 65);
          key += asciiChart(keyThirdChar - 65);
          cout << "ASSOCIATED KEY: " << endl;
          cout << key << endl;

          cout << "ENTIRE STRING: " << endl;
          int swap = keyFirstChar;
          string outputStr = "";

          for (uint u = 0; u < cipherText.length(); u ++)
          {
            char cyphChar = cipherText[u];
            int trueCypher = ((int(cyphChar) - swap) % 26);
            outputStr += asciiChart(trueCypher);

            if (swap == keyFirstChar)
            {
              swap = keySecondChar;
            }
            else if (swap == keySecondChar)
            {
              swap = keyThirdChar;
            }
            else if (swap == keyThirdChar)
            {
              swap = keyFirstChar;
            }
          }
          cout << outputStr << endl;
          duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
          cout << "Duration: " << duration << endl;
        }
      }
    }
    //int hashed = firstWordLength % (i + 2);
  }
  return "CRACK";
}

string cracker4(string cipherText, int keyLength, int firstWordLength)
{
  int keyFirstChar;
  int keySecondChar;
  int keyThirdChar;
  int keyFourthChar;

  cout << "Generating possible first words:" << endl;
  string firstWord = cipherText.substr (0, firstWordLength);
  cout << firstWord << endl;

  std::clock_t start;
  double duration;

  start = std::clock();

  for (int j = 65; j <= 90; j++)
  {
    for (int z = 65; z <=90; z++)
    {
      for (int l = 65; l <= 90; l++)
      {
        for (int w = 65; w <= 90; w++)
        {
          string possFirst = "";
          //bool condBreak = false;
          int swap = j;

          for (int i = 0; i < firstWordLength; i++)
          {

            int linedup = swap;
            char cyphChar = firstWord[i];

            int trueCypher = ((int(cyphChar) - linedup) % 26);
            //cout << trueCypher << endl;

            possFirst += asciiChart(trueCypher);

            keyFirstChar = j;
            keySecondChar = z;
            keyThirdChar = l;
            keyFourthChar = w;

            if (swap == j)
            {
              swap = z;
            }
            else if (swap == z)
            {
              swap = l;
            }
            else if (swap == l)
            {
              swap = w;
            }
            else if (swap == w)
            {
              swap = j;
            }

          }

          if (std::find(dict.begin(), dict.end(), possFirst) != dict.end())
          {
            cout << keyFirstChar << " " << keySecondChar << endl;
            cout << "POSSIBLE MATCHED WORD:" << endl;
            cout << possFirst << endl;

            string key = "";
            key += asciiChart(keyFirstChar - 65);
            key += asciiChart(keySecondChar - 65);
            key += asciiChart(keyThirdChar - 65);
            key += asciiChart(keyFourthChar - 65);
            cout << "ASSOCIATED KEY: " << endl;
            cout << key << endl;

            cout << "ENTIRE STRING: " << endl;
            int swap = keyFirstChar;
            string outputStr = "";

            for (uint u = 0; u < cipherText.length(); u ++)
            {
              char cyphChar = cipherText[u];
              int trueCypher = ((int(cyphChar) - swap) % 26);
              outputStr += asciiChart(trueCypher);

              if (swap == keyFirstChar)
              {
                swap = keySecondChar;
              }
              else if (swap == keySecondChar)
              {
                swap = keyThirdChar;
              }
              else if (swap == keyThirdChar)
              {
                swap = keyFourthChar;
              }
              else if (swap == keyFourthChar)
              {
                swap = keyFirstChar;
              }
            }
            cout << outputStr << endl;

          }
          }
        }
      }

    //int hashed = firstWordLength % (i + 2);
  }
  duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
  cout << "Duration: " << duration << endl;
  return "CRACK";
}

string cracker5(string cipherText, int keyLength, int firstWordLength)
{
  int keyFirstChar;
  int keySecondChar;
  int keyThirdChar;
  int keyFourthChar;
  int keyFifthChar;

  cout << "Generating possible first words:" << endl;
  string firstWord = cipherText.substr (0, firstWordLength);
  cout << firstWord << endl;

  std::clock_t start;
  double duration;

  start = std::clock();

  for (int j = 65; j <= 90; j++)
  {
    for (int z = 65; z <=90; z++)
    {
      for (int l = 65; l <= 90; l++)
      {
        for (int w = 65; w <= 90; w++)
        {
          for (int m = 65; m <= 90; m++)
          {
            string possFirst = "";
            //bool condBreak = false;
            int swap = j;

            for (int i = 0; i < firstWordLength; i++)
            {

              int linedup = swap;
              char cyphChar = firstWord[i];

              int trueCypher = ((int(cyphChar) - linedup) % 26);
              //cout << trueCypher << endl;

              possFirst += asciiChart(trueCypher);

              keyFirstChar = j;
              keySecondChar = z;
              keyThirdChar = l;
              keyFourthChar = w;
              keyFifthChar = m;

              if (swap == j)
              {
                swap = z;
              }
              else if (swap == z)
              {
                swap = l;
              }
              else if (swap == l)
              {
                swap = w;
              }
              else if (swap == w)
              {
                swap = m;
              }
              else if (swap == m)
              {
                swap = j;
              }
            }

            if (std::find(dict.begin(), dict.end(), possFirst) != dict.end())
            {
              cout << keyFirstChar << " " << keySecondChar << endl;
              cout << "POSSIBLE MATCHED WORD:" << endl;
              cout << possFirst << endl;

              string key = "";
              key += asciiChart(keyFirstChar - 65);
              key += asciiChart(keySecondChar - 65);
              key += asciiChart(keyThirdChar - 65);
              key += asciiChart(keyFourthChar - 65);
              key += asciiChart(keyFifthChar - 65);
              cout << "ASSOCIATED KEY: " << endl;
              cout << key << endl;

              cout << "ENTIRE STRING: " << endl;
              int swap = keyFirstChar;
              string outputStr = "";

              for (uint u = 0; u < cipherText.length(); u ++)
              {
                char cyphChar = cipherText[u];
                int trueCypher = ((int(cyphChar) - swap) % 26);
                outputStr += asciiChart(trueCypher);

                if (swap == keyFirstChar)
                {
                  swap = keySecondChar;
                }
                else if (swap == keySecondChar)
                {
                  swap = keyThirdChar;
                }
                else if (swap == keyThirdChar)
                {
                  swap = keyFourthChar;
                }
                else if (swap == keyFourthChar)
                {
                  swap = keyFifthChar;
                }
                else if (swap == keyFifthChar)
                {
                  swap = keyFirstChar;
                }
              }
              cout << outputStr << endl;

            }
          }
          }
        }
      }

    //int hashed = firstWordLength % (i + 2);
  }
  duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
  cout << "Duration: " << duration << endl;
  return "CRACK";
}

string cracker6(string cipherText, int keyLength, int firstWordLength)
{
  int keyFirstChar;
  int keySecondChar;
  int keyThirdChar;
  int keyFourthChar;
  int keyFifthChar;
  int keySixthChar;

  cout << "Generating possible first words:" << endl;
  string firstWord = cipherText.substr (0, firstWordLength);
  cout << firstWord << endl;

  std::clock_t start;
  double duration;

  start = std::clock();

  for (int j = 65; j <= 90; j++)
  {
    for (int z = 65; z <=90; z++)
    {
      for (int l = 65; l <= 90; l++)
      {
        for (int w = 65; w <= 90; w++)
        {
          for (int m = 65; m <= 90; m++)
          {
            for (int n = 65; n <=90; n++)
            {
              string possFirst = "";
              //bool condBreak = false;
              int swap = j;

              for (int i = 0; i < firstWordLength; i++)
              {

                int linedup = swap;
                char cyphChar = firstWord[i];

                int trueCypher = ((int(cyphChar) - linedup) % 26);
                //cout << trueCypher << endl;

                possFirst += asciiChart(trueCypher);

                keyFirstChar = j;
                keySecondChar = z;
                keyThirdChar = l;
                keyFourthChar = w;
                keyFifthChar = m;
                keySixthChar = n;

                if (swap == j)
                {
                  swap = z;
                }
                else if (swap == z)
                {
                  swap = l;
                }
                else if (swap == l)
                {
                  swap = w;
                }
                else if (swap == w)
                {
                  swap = m;
                }
                else if (swap == m)
                {
                  swap = n;
                }
                else if (swap == n)
                {
                  swap = j;
                }
              }

              if (std::find(dict.begin(), dict.end(), possFirst) != dict.end())
              {
                cout << keyFirstChar << " " << keySecondChar << endl;
                cout << "POSSIBLE MATCHED WORD:" << endl;
                cout << possFirst << endl;

                string key = "";
                key += asciiChart(keyFirstChar - 65);
                key += asciiChart(keySecondChar - 65);
                key += asciiChart(keyThirdChar - 65);
                key += asciiChart(keyFourthChar - 65);
                key += asciiChart(keyFifthChar - 65);
                key += asciiChart(keySixthChar - 65);
                cout << "ASSOCIATED KEY: " << endl;
                cout << key << endl;

                cout << "ENTIRE STRING: " << endl;
                int swap = keyFirstChar;
                string outputStr = "";

                for (int u = 0; u < cipherText.length(); u ++)
                {
                  char cyphChar = cipherText[u];
                  int trueCypher = ((int(cyphChar) - swap) % 26);
                  outputStr += asciiChart(trueCypher);

                  if (swap == keyFirstChar)
                  {
                    swap = keySecondChar;
                  }
                  else if (swap == keySecondChar)
                  {
                    swap = keyThirdChar;
                  }
                  else if (swap == keyThirdChar)
                  {
                    swap = keyFourthChar;
                  }
                  else if (swap == keyFourthChar)
                  {
                    swap = keyFifthChar;
                  }
                  else if (swap == keyFifthChar)
                  {
                    swap = keySixthChar;
                  }
                  else if (swap == keySixthChar)
                  {
                    swap = keyFirstChar;
                  }
                }
                cout << outputStr << endl;

            }
          }

          }
          }
        }
      }

    //int hashed = firstWordLength % (i + 2);
  }
  duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
  cout << "Duration: " << duration << endl;
  return "CRACK";
}

int main()
{

  ifstream inFile;
  inFile.open("dict.txt");
  string oneline;

  //int counter = 0;

  if(!inFile)
  {
    cout << "There doesn't seem to be anything here..." << endl;
  }

  while (inFile)
  {
    getline(inFile, oneline);
    oneline.erase(oneline.size()-1);
    dict.push_back(oneline);
  }

  string cText;
  int keyLength;
  int fwLength;
  int choice;

  cout << "Welcome to the very very simple Vigenere Cipher program!" << endl;
  cout << "Would you like to ENCRYPT or DECRYPT?" << endl;
  cout << "Input '1' for encryption or '2' for decryption..." << endl;
  cin >> choice;

  if (choice == 1)
  {
    string pText;
    string key;

    cout << "Enter PLAINTEXT to be encrypted: " << endl;
    cin >> pText;
    for (uint i = 0; i < pText.length(); i++)
    {
      pText[i] = toupper(pText[i]);
    }
    cout << "Enter encryption KEY: " << endl;
    cin >> key;
    for (uint j = 0; j < pText.length(); j++)
    {
      key[j] = toupper(key[j]);
    }
    vigenereCipher(pText, key);
  }

  else if (choice == 2)
  {
    cout << "Enter CIPHERTEXT:" << endl;
    cin >> cText;
    cout << "Enter KEY LENGTH:" << endl;
    cin >> keyLength;
    cout << "Enter FIRST WORD LENGTH:" << endl;
    cin >> fwLength;
    if (keyLength == 2)
    {
      cracker2(cText, keyLength, fwLength);
    }
    else if (keyLength == 3)
    {
      cracker3(cText, keyLength, fwLength);
    }
    else if (keyLength == 4)
    {
      cracker4(cText, keyLength, fwLength);
    }
    else if (keyLength == 5)
    {
      cracker5(cText, keyLength, fwLength);
    }
    else if (keyLength == 6)
    {
      cracker6(cText, keyLength, fwLength);
    }
    else
    {
      cout << "My programmer was lazy and did not implement functionality for key lengths greater than 6 or less than 2..." << endl;
      cout << "...he also didn't even make a while loop to handle invalid input so this is goodbye!" << endl;
    }
  }

  else
  {
    cout << "That number wasn't an option. This is awkward. The program will end now, I guess." << endl;
  }

  return 0;
}
