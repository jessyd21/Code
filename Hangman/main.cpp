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
            output += "_ ";
        }
        else
            output += c;
            output += " ";
    }

    return output;

}

void playgame(string secret)
{
    string progress = makeUnderscores(secret);
    cout << progress << endl;


}

int main()
{
   string word = pickword();
   playgame(word);



}
