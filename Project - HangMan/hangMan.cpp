#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <thread>
#include <chrono>

using namespace std;

const int MAX_WRONG_ANSWER = 7;
const char DATA_FILE_NAME[] = "D:/Workspace/Cpp-files/Cpp-project/hangManWord.txt";

string getRandomWord (const char* fileName);
void renderGame (int countWrongAns, string guessWord, string wrongAnswer);
void clearScreen ();
char getAnswer ();
bool contain (char answer, string keyWord);
void update (string& guessWord, const string& keyWord, char answer);
void hangManGame();
int getChoice ();
bool checkContinuePlaying (int choice);
void displayWin ();
void displayLoss (const string& keyWord);


int main () {
    int choice;
    do {
        hangManGame();
        choice = getChoice();
    } while (checkContinuePlaying(choice));

    return 0;

}

const string FIGURE[] = {
" ------------- \n"
" | \n"
" | \n"
" | \n"
" | \n"
" | \n"
" ----- \n",
" ------------- \n"
" |  | \n"
" | \n"
" | \n"
" | \n"
" | \n"
" ----- \n",
" ------------- \n"
" |  | \n"
" |  O \n"
" | \n"
" | \n"
" | \n"
" ----- \n",
" ------------- \n"
" |  | \n"
" |  O \n"
" |  | \n"
" | \n"
" | \n"
" ----- \n",
" ------------- \n"
" |  | \n"
" |  O \n"
" | /| \n"
" | \n"
" | \n"
" ----- \n",
" ------------- \n"
" |  | \n"
" |  O \n"
" | /|\\ \n"
" | \n"
" | \n"
" ----- \n",
" ------------- \n"
" |  | \n"
" |  O \n"
" | /|\\ \n"
" | / \n"
" | \n"
" ----- \n",
" ------------- \n"
" |  | \n"
" |  O \n"
" | /|\\ \n"
" | / \\ \n"
" | \n"
" ----- \n",
};

const string FIGURE_WIN[] = {
"       O \n"
"       |/  \n"
"      /|    \n"
"      / \\ \n"
"  \n"
"  \n",
"       O    \n"
"       |    \n"
"      /|\\   \n"
"      / \\     \n"
"  \n"
"  \n",
"       O     \n"
"      \\|     \n"
"       |\\  \n"
"      / \\    \n"
"  \n"
"  \n",
"       O    \n"
"       |    \n"
"      /|\\   \n"
"      / \\     \n"
"  \n"
"  \n",
};

const string FIGURE_LOSS[] = {
" ------------- \n"
" |     | \n"
" |     O \n"
" |    /|\\ \n"
" |    / \\ \n"
" | \n"
" ----- \n",
" ------------- \n"
" |     \\ \n"
" |      O \n"
" |     /|\\ \n"
" |     / \\ \n"
" | \n"
" ----- \n",
" ------------- \n"
" |     | \n"
" |     O \n"
" |    /|\\ \n"
" |    / \\ \n"
" | \n"
" ----- \n",
" ------------- \n"
" |     / \n"
" |    O \n"
" |   /|\\ \n"
" |   / \\ \n"
" | \n"
" ----- \n",
};

void hangManGame() {
    srand(time(0));
    string keyWord = getRandomWord(DATA_FILE_NAME);
    string guessWord = string (keyWord.size(), '-');
    string wrongAnswer = "";
    int countWrongAns = 0;

    do {
        renderGame (countWrongAns, guessWord, wrongAnswer);
        char answer = getAnswer();
        if (contain(answer, keyWord)) {
            update(guessWord, keyWord, answer);
        } else {
            countWrongAns ++;
            wrongAnswer += answer;
        }
    } while (countWrongAns < MAX_WRONG_ANSWER && guessWord != keyWord);
    renderGame(countWrongAns, guessWord, wrongAnswer);
    if (countWrongAns < MAX_WRONG_ANSWER) {
        displayWin();
    } else {
        displayLoss(keyWord);
    }
}

string getLowerString (const string &s) {
    string re_string = s;
    for (int i = 0; i < s.size(); ++ i) {
        re_string[i] = tolower(s[i]);
    }

    return re_string;
}

int getChoice () {
    int choice;
    cout << "Press 1 to play another game or press 0 to exit game: ";
    cin >> choice;

    return choice;
}

string getRandomWord (const char* fileName) {
    vector <string> word;
    ifstream file(fileName);
    
    if (file.is_open()) {
    	string s;
    	while (file >> s) {
    		word.push_back(s);
		}
	}
	
	if (word.size() > 0) {
		int randomIndex = rand() % word.size();
		return getLowerString(word[randomIndex]);
	} else {
		return "";
	}
} 

void renderGame (int countWrongAns, string guessWord, string wrongAnswer) {

    system("cls");
    
    cout << FIGURE[countWrongAns] << endl;

    cout << "Your word: " << guessWord << endl;
    cout << "Number of wrong answers: " << countWrongAns << endl;

    cout << "Your wrong answers: " ;
    for (int i = 0; i < wrongAnswer.size(); ++ i) {
        cout << wrongAnswer[i] << " ";
    }

    cout << endl;
}

char getAnswer () {
    char answer;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer >= 'A' && answer <= 'Z') {
        answer = answer + 32;
    }

    return answer;
}

bool contain (char answer, string keyWord) {
    bool check = false;
    for (int i = 0; i < keyWord.size(); ++ i) {
        if (answer == keyWord[i]) {
            check = true;
            break;
        }
    }

    return check;
}

void update(string& guessWord, const string& keyWord, char answer)
{
	for (int i = keyWord.length() - 1; i >= 0; i--) {
        if (keyWord[i] == answer) {
            guessWord[i] = answer;
        }
    }
}

bool checkContinuePlaying (int choice) {
    if (choice == 1) {
        cout << "Now playing next hangman game." << endl;
        this_thread::sleep_for(chrono::milliseconds(800));
        return true;
    } else {
        cout << "Exit hangman game." << endl;
        this_thread::sleep_for(chrono::milliseconds(800));
        return false;
    }
}

void displayWin () {
	for (int i = 0; i < 2; ++ i) {
		for (int j = 0; j < 4; ++ j) {
			system("cls");
			cout << "Congratulation! You win" << endl;
			cout << FIGURE_WIN[j];
			this_thread::sleep_for(chrono::milliseconds(300));
		}
	}
}

void displayLoss (const string &keyWord) {
	for (int i = 0; i < 2; ++ i) {
		for (int j = 0; j < 4; ++ j) {
			system("cls");
			cout << "You lost the game." << endl;
			cout << "The secret word is: " << keyWord << endl;
			cout << FIGURE_LOSS[j];
			this_thread::sleep_for(chrono::milliseconds(300));
		}
	}
}
