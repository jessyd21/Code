#include <iostream>

using namespace std;

string pickword()
{
    //ACTUALLY RANDOMIZE
    return "WE'RE TRYING TO CODE HANGMAN";
}

string makeUnderscores(string secret)
{
    string output;
    for(unsigned int x = 0; x < secret.length(); x++)
    {
        char c = secret[x];
        if(c >= 'A' && c <= 'Z')
        {
            output += ".";
        }
        else
            output += c;

    }

    return output;

}
//returns secret string has char
bool checkGuess(string secret, char guess)
{

    return (secret.find(guess) != string:: npos);

}

void playgame(string secret)
{
    char guess;
    string progress = makeUnderscores(secret);
    cout << progress << endl;
    cout << "Guess a letter: ";
    cin >> guess;

    string guessStr = "" + guess;

    if(checkGuess(secret, guess))
    {
        //REPLACE STRING IN PROGRESS
        for(unsigned int x = 0; x < secret.length(); x++)
        {
            if(guess == secret[x])
            {
                progress = progress.substr(0,x) + guess + progress.substr(x+1);
                //cout << progress;
            }
        }
        cout << progress << endl;
    }
    else
    {
        //you lose!
        cout << "H\n";
    }





}

int main()
{
   string word = pickword();
   playgame(word);



}
