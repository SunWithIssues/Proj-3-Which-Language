// prog3WhichLangMacbeth.cpp
//    Use letter frequency counts to determine what language text is in.
//
// Author: Anya Ellis
// Date: Oct 17, 2018
// Class: CS 141, Fall 2018
// Language: C++
//
// Translations of Macbeth were created online using Google translate, starting with the
// English version at http://shakespeare.mit.edu/macbeth/full.html
// To trigger the translation option, I went to the Chrome browser / Settings / Language
// option and changed the default language, which triggered showing the translation option
// for the English Macbeth page when it was displayed.  The translated text was then
// copy/pasted into a text file and saved.  The texts are stored using the multi-byte
// UTF-8 format, explained at https://en.wikipedia.org/wiki/UTF-8, though here we are
// not attempting to count more than the first 128 alphabetical characters.
//
/* Results of running the final version of the program are shown below.

		Program 3: Which Language

		Letter Frequency Counts:
				 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
		A:   6018  9416  6544  5068  7541  8935  9939 10052
		B:   1464   448  1081  2060  1746  1221  1173  1387
		C:   2144   636  3028  3126  1014  3865  2855  3222
		D:   3331  1013  2698  4592  2265  2945  3687  3815
		E:   9270  7187 12782 14779  8280  9364 10551 10861
		F:   1701   297  1101  1464   932  1099  1039   653
		G:   1333   187   772  2503  2975  1423   983   936
		H:   5244  2384  1004  4775  1687  1485  1413  1263
		I:   4653  8022  5583  7062  2961  8128  4179  3964
		J:     38  1331   538   148  1049     5   216   429
		K:    691  3952    28  1080  3551    51    19    18
		L:   3294  4648  4240  3089  4658  4814  2082  3985
		M:   2481  3526  3269  2861  3812  2790  4415  3021
		N:   4987  7958  5958  9026  4725  5966  4455  5704
		O:   6054  4219  5315  2208  3529  8668  8898  7605
		P:   1000  1331  2297   466   448  2060  1862  1842
		Q:    121    78   907    84    77   548   954   883
		R:   4518  1784  5986  5955  2802  5357  5328  5706
		S:   4943  5425  6898  5852  4538  4863  6774  6468
		T:   7055  7620  6025  5477  5632  5373  3729  3932
		U:   2590  4226  5373  3327   963  3081  3840  3591
		V:    657  1784  1566   661  1297  1287  1351   893
		W:   1926   120    78  1797   138   141    68    61
		X:    112    45   328    89    49    42   260    91
		Y:   1637  1403   247   169  1998   216    65   891
		Z:     15     3   343   939  2742   490   314   301

		Letter frequency order:
			 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
					E     A     E     E     E     E     E     E
					T     I     S     N     A     A     A     A
					O     N     A     I     T     O     O     O
					A     T     T     R     N     I     S     S
					H     E     R     S     L     N     R     R
					N     S     N     T     S     T     N     N
					S     L     I     A     M     R     M     L
					I     U     U     H     K     S     I     I
					R     O     O     D     O     L     U     T
					D     K     L     U     G     C     T     D
					L     M     M     C     I     U     D     U
					U     H     C     L     R     D     C     C
					M     R     D     M     Z     M     L     M
					C     V     P     G     D     P     P     P
					W     Y     V     O     Y     H     H     B
					F     J     F     B     B     G     V     H
					Y     P     B     W     H     V     B     G
					B     D     H     F     V     B     F     V
					G     C     Q     K     J     F     G     Y
					P     B     G     Z     C     Q     Q     Q
					K     F     J     V     U     Z     Z     F
					V     G     Z     P     F     Y     X     J
					Q     W     X     Y     P     W     J     Z
					X     Q     Y     J     W     K     W     X
					J     X     W     X     Q     X     Y     W
					Z     Z     K     Q     X     J     K     K

		Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac): 
		Ma per arrivare a un agreement bisogna essere in due. E dato che il governo intende 
		resistere sui numeri della manovra, è necessario offrire garanzie all’Europa e ai 
		mercati. Perciò sono stati stabiliti due capisaldi: uno tecnico, l’altro più politico. 
		La riduzione strutturale del debito viene fissato come un «obiettivo strategico», 
		non a caso sottolineato da Di Maio dopo il vertice. La linea dell’esecutivo è che 
		per far ripartire l’Italia sia necessario «cambiare approccio» con una manovra 
		espansiva «dopo anni di cure rigoriste senza risultati», ma s

		A:51 B:5 C:20 D:15 E:55 F:4 G:6 H:2 I:54 J:0 K:0 L:22 M:10 N:29 O:39 P:13 Q:0 R:37 S:28 T:31 U:15 V:9 W:0 X:0 Y:0 Z:3 

		Letter frequency order:
			 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User
					E     A     E     E     E     E     E     E     E
					T     I     S     N     A     A     A     A     I
					O     N     A     I     T     O     O     O     A
					A     T     T     R     N     I     S     S     O
					H     E     R     S     L     N     R     R     R
					N     S     N     T     S     T     N     N     T
					S     L     I     A     M     R     M     L     N
					I     U     U     H     K     S     I     I     S
					R     O     O     D     O     L     U     T     L
					D     K     L     U     G     C     T     D     C
					L     M     M     C     I     U     D     U     D
					U     H     C     L     R     D     C     C     U
					M     R     D     M     Z     M     L     M     P
					C     V     P     G     D     P     P     P     M
					W     Y     V     O     Y     H     H     B     V
					F     J     F     B     B     G     V     H     G
					Y     P     B     W     H     V     B     G     B
					B     D     H     F     V     B     F     V     F
					G     C     Q     K     J     F     G     Y     Z
					P     B     G     Z     C     Q     Q     Q     H
					K     F     J     V     U     Z     Z     F     J
					V     G     Z     P     F     Y     X     J     K
					Q     W     X     Y     P     W     J     Z     Q
					X     Q     Y     J     W     K     W     X     W
					J     X     W     X     Q     X     Y     W     X
					Z     Z     K     Q     X     J     K     K     Y

				 60    78    16    50    94    10    18    13  <--- Difference (This line is not part of expected output, but is helpful!)

		Language is Italian
 
 */

// Your code should go here
// ...
// 

#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>
#include <iomanip> //for space padding
#include <string>
#include <vector> //I might not use this --CHECK BACK--
using namespace std;

const int SIZE = 26;
const int langsKnown = 9;
const string fileNames[] = {"MacbethEnglish.txt", "MacbethFinnish.txt", "MacbethFrench.txt", "MacbethGerman.txt", 
                           "MacbethHungarian.txt", "MacbethItalian.txt", "MacbethPortuguese.txt", "MacbethSpanish.txt",
						   "MacbethEsperanto.txt"};


struct FreqHolder{
  
  vector <int> english;
  vector <int> finnish;
  vector <int> french;
  vector <int> german;
  vector <int> hungarian;
  vector <int> italian;
  vector <int> portuguese;
  vector <int> spanish;
  vector <int> esperanto;
  
};

struct LettersHolder{
  vector <char> english;
  vector <char> finnish;
  vector <char> french;
  vector <char> german;
  vector <char> hungarian;
  vector <char> italian;
  vector <char> portuguese;
  vector <char> spanish; 
  vector <char> esperanto;
};


//Testing purposes for vector list
void displayList(vector <int> L){ 
	for (int i=0; i < L.size(); ++i){
		cout << L[i] << endl;
	}
	
}

//Counts occurence of alphabetical letters in a file - parameters are file, and int* array of size 26
void frequencyCounter(string fileName, vector <int> &occurenceCount){
  
  ifstream inputFileStream;
  char c = ' ';  
    
  inputFileStream.open(fileName.c_str()); //Open files
  
  if (!inputFileStream.is_open()){ //Checks to see if file exist for testing purposes
      cout << "FILE NOT AVAILABLE --FILENAME DOES NOT EXIST IN DIR--" << endl;
      exit(-1);
  }
    
  for(int letter=0; letter < SIZE; letter++){
   occurenceCount.at(letter) = 0;   
  }
    
  while(inputFileStream >> c){
    if (isalpha(c)){
      c = toupper(c);
      occurenceCount.at(c-'A') = occurenceCount.at(c-'A') + 1;
    }
  }
  
  inputFileStream.close(); //Closes file
}

// Sets orderDescend to the descending order of the frequency counts and letterDescend to the descending order of the alphabetical characters by the frequency counts.
// This means that orderDescend[0] is the biggest integer in occurenceCount, and orderDescend[SIZE-1] is the smallest number in occurenceCount.
// letterDescend[0] is set to the most used character, and letterDescend[SIZE-1] is the least used letter. If the letter is used the same amount of times as another
// letter then the alphabetic order proceeds the ordering. For example, if A is used as much as Z, then A comes before Z.
void frequencyOrder(vector <int> occurenceCount, int orderDescend[], char letterDescend[]){
  
  int remember; //the biggest number in that particular pass
  vector <int> newFreq;
    int max;
    int maxEle;
   char dummyArray[26];
  //Gives orderDescend same values as occurenceCount
  for (int num=0; num < SIZE; num++){
      orderDescend[num] = occurenceCount[num];
  } 
  
  //Selection sort for orderDescend array
  for (int pass=0; pass < SIZE; ++pass){
      //remember = pass;
    
      max = -1;
      maxEle = -1;
     
      for(int letter=0; letter < SIZE; ++letter){
          
          
        //This block compares orderDescend values
        if (orderDescend[letter] > max){
            max = orderDescend[letter];
            maxEle = letter;
        }
      }
      
      letterDescend[pass] = (char)(maxEle + 'A');
      orderDescend[maxEle] = -1;
      
  }
    
}

//Returns a struct that contains the frequencies of each language
struct FreqHolder step1(){ //No parameters for step 1
  
  FreqHolder allFrequencies; //struct to be returned
    
  //array for each language's frequencies
  vector <int> freqEng(SIZE), freqFin(SIZE), freqFre(SIZE), freqGer(SIZE), freqHun(SIZE), freqIta(SIZE), freqPor(SIZE), freqSpa(SIZE), freqEsp(SIZE); 
   
  
  for (int i=0; i < langsKnown; ++i){ //Calls frequencyCounter for each file in fileNames array and each frequency array per language
      switch (i){
          case 0:
              frequencyCounter(fileNames[i], freqEng);
              break;
          case 1:
              frequencyCounter(fileNames[i], freqFin);
              break;
          case 2:
              frequencyCounter(fileNames[i], freqFre);
              break;
          case 3:
              frequencyCounter(fileNames[i], freqGer);
              break;
          case 4:
              frequencyCounter(fileNames[i], freqHun);
              break;
          case 5:
              frequencyCounter(fileNames[i], freqIta);
              break;
          case 6:
              frequencyCounter(fileNames[i], freqPor);
              break;
          case 7:
              frequencyCounter(fileNames[i], freqSpa);
              break;
          case 8:
          	  frequencyCounter(fileNames[i], freqEsp);
          	  break;
          default: //For testing purposes only
              cout << endl << "----SWITCH CASE DOES NOT WORK----" << endl;
              break;
      }
  }
  
    
  
  //Block sets frequency arrays per language to allFrequencies struct
  allFrequencies.english = freqEng;
  allFrequencies.finnish = freqFin;
  allFrequencies.french = freqFre;
  allFrequencies.german = freqGer;
  allFrequencies.hungarian = freqHun;
  allFrequencies.italian = freqIta;
  allFrequencies.portuguese = freqPor;
  allFrequencies.spanish = freqSpa;
  allFrequencies.esperanto = freqEsp;
  
  
  return allFrequencies; //allFrequencies struct for ease in manipulating next steps
  
}

struct LettersHolder step2(struct FreqHolder frequencies){
  
  //Initialized array that will hold the frequencies in desending order
  int orderNumEng[SIZE], orderNumFin[SIZE], orderNumFre[SIZE], orderNumGer[SIZE], orderNumHun[SIZE], orderNumIta[SIZE], orderNumPor[SIZE], orderNumSpa[SIZE], orderNumEsp[SIZE];
  //Initialized array that will hold alphabet in descending order by frequency count. Example: if A is the most used letter, A will be at the top of that list.
  char orderEng[SIZE], orderFin[SIZE], orderFre[SIZE], orderGer[SIZE], orderHun[SIZE], orderIta[SIZE], orderPor[SIZE], orderSpa[SIZE], orderEsp[SIZE];
  vector <char> emptyCharArray(SIZE); //For the purposes of setting the vectors in LetterHolder to the same initial properties
  
  struct LettersHolder letters; 
  
  //Sets each elements of vector <char> emptyCharArray to 0
  for(int i=0; i < SIZE; i++){
    emptyCharArray.at(i) = 0;
  }
    
  //This block sets each vector <char> in LettersHolder letters to the same initial properties
  letters.english = emptyCharArray;
  letters.finnish = emptyCharArray;
  letters.french = emptyCharArray;
  letters.german = emptyCharArray;
  letters.hungarian = emptyCharArray;
  letters.italian = emptyCharArray;
  letters.portuguese = emptyCharArray;
  letters.spanish = emptyCharArray;
  letters.esperanto = emptyCharArray;
    
  //This block sets the alphabetic order and frequency count order in descending order for each language
  frequencyOrder(frequencies.english, orderNumEng, orderEng);
  frequencyOrder(frequencies.finnish, orderNumFin, orderFin);
  frequencyOrder(frequencies.french, orderNumFre, orderFre);
  frequencyOrder(frequencies.german, orderNumGer, orderGer);
  frequencyOrder(frequencies.hungarian, orderNumHun, orderHun);
  frequencyOrder(frequencies.italian, orderNumIta, orderIta);
  frequencyOrder(frequencies.portuguese, orderNumPor, orderPor);
  frequencyOrder(frequencies.spanish, orderNumSpa, orderSpa);
  frequencyOrder(frequencies.esperanto, orderNumEsp, orderEsp);
  

  //Sets the order alphabet to the LettersHolder letters for each language
  for(int i=0; i<SIZE; i++){
	  letters.english.at(i) = orderEng[i];
	  letters.finnish.at(i) = orderFin[i];
	  letters.french.at(i) = orderFre[i];
	  letters.german.at(i) = orderGer[i];
	  letters.hungarian.at(i) = orderHun[i];
	  letters.italian.at(i) = orderIta[i];
	  letters.portuguese.at(i) = orderPor[i];
	  letters.spanish.at(i) = orderSpa[i];
	  letters.esperanto.at(i) = orderEsp[i];
  }
  
    
  return letters;
}

//Takes in the user's inputted paragraph and returns a vector <char> userOrderVec, which has the alphabet ordered by most used letters
vector <char> userIterface(struct LettersHolder letters){
    string userPara; //Will hold the paragraph given by the user.
    vector <int> userFrequency(SIZE); //This will hold the user's count frequency; The vectors position correspond with the alphabetic position. A is 0th place; Z is 25th place.
    char c; //given each character of the userParagraph
    int len = -1;
    
    int userInt[SIZE];
    char userOrder[SIZE];
    vector <char> userOrderVec(SIZE);
    
    
    for(int letter=0; letter < SIZE; ++letter){
        userFrequency.at(letter) = 0;
    }
    
    cout << endl << "Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac):" << endl;
    
    while(cin >> c){
        if (c == '\0'){
            break;
        }
        if (isalpha(c)){
            len++;
            c = toupper(c);
            userFrequency.at(c-'A')++; 
        }
    }
    
    
    frequencyOrder(userFrequency, userInt, userOrder);
    

    for (int i=0; i<SIZE; i++){
       userOrderVec.at(i) = userOrder[i];
    }
    return userOrderVec; 
}

void step4(struct LettersHolder letters){
    
    vector <int> difference(langsKnown); //vector to store language differences in an array for positional information
    vector <char> langCharacters; //particular language character
    vector <char> userOrder; //user order characters of input
    int distance=0; // The absolute distance of btwn user input and lang char
    int min; //the smallest difference value
    int userLang = 0; //the languange which is ouputted; It is set to the first language, English, by default.
    int threshold = 5; //threshold for finding difference
    
    
    //populates each difference value w/ 0
    for(int i=0; i < langsKnown; ++i){
        difference.at(i) = 0;
    }
    
    //calls step3 to get userOrder
    userOrder = userIterface(letters);
  
    //Outputs first part of response
    cout << endl << "Language is ";
    
  
    //Access each language once for comparison
    for (int lang=0; lang < langsKnown; ++lang){
        //Decides which language to run to compare first
        switch(lang){
            case 0:
                langCharacters = letters.english;
                break;
            case 1:
                langCharacters = letters.finnish;
                break;
            case 2:
                langCharacters = letters.french;
                break;
            case 3:
                langCharacters = letters.german;
                break;
            case 4:
                langCharacters = letters.hungarian;
                break;
            case 5:
                langCharacters = letters.italian;
                break;
            case 6:
                langCharacters = letters.portuguese;
                break;
            case 7:
                langCharacters = letters.spanish;
                break;
            case 8:
            	langCharacters = letters.esperanto;
            	break;
                
        }
        
  		
        //Finds difference of each language in comparison to user input 
        for (int i=0; i < SIZE; ++i){
            for(int j=0; j < SIZE; ++j){
                if (userOrder.at(i) == langCharacters.at(j)){ //Compares the alphabetic ordered user list with the alphabetic ordered frequency of the langauges
                    distance = abs(i-j);
                    if(distance >= threshold){ //if the absolute distance is greater than 5
                        difference.at(lang) = difference.at(lang) + distance;
                    }
                }
            }           
        }
       }
    
    
    
    
    //Finds smallest difference
    min = difference.at(0); //userLang is set to 0, at the beginning
    for(int i=1; i < langsKnown; ++i){
        if (difference.at(i) < min){
            min = difference.at(i);
            userLang = i;
        }
            
    }
    
    
    
    
    //Prints language output depending on smallest difference
    switch(userLang){
        case 0:
            cout << "English";
            break;
        case 1:
            cout << "Finnish";
            break;
        case 2:
            cout << "French";
            break;
        case 3:
            cout << "German";
            break;
        case 4:
            cout << "Hungarian";
            break;
        case 5:
            cout << "Italian";
            break;
        case 6:
            cout << "Portugues";
            break;
        case 7:
            cout << "Spanish";
            break;
        case 8:
        	cout << "Esperanto";
        	break;
    }
    
    cout << endl;
}


int main (){
  cout << "Program 3: Which Language." << endl << endl;
  cout << "The languages that can be analyzed: " << endl;
  cout << "English, Finnish, French, German, Hungarian, Italian, Portugues, Spanish, Esperanto." << endl; 
  
  struct FreqHolder frequencies; //Struct that holds vector of int type of all frequencies for each language
  struct LettersHolder letters;  //Struct that holds the ordered character values for each language
  
  
  frequencies = step1();
  letters = step2(frequencies);
  step4(letters);
  
  return 0;
}
