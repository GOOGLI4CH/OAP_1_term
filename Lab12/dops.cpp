#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Доп.1 " << endl;

	char string[256], ending[32], words1[256] = {};

	puts("Введите предложение: ");
	gets_s(string);
	puts("Введите окончание: ");
	gets_s(ending);

	int endingLen = strlen(ending);
	char word[256] = {};          //Буфер для считывания строки
	stringstream x;        //Создание потоковой переменной
	x << string;                //Перенос строки в поток
	cout << "Слова с таким окончанием в предложении: ";
	while (x >> word)
    {
		cout << word << " ";
		int j = strlen(word) - endingLen;
		int spore = 0;
		if (strlen(word) > 3)
			for (int i = j, k = 0; word[i] != 0; i++, k++)
			{
				if (ending[k] == word[i])
				{
					spore++;
					if (spore == endingLen)
					{
						cout << word << ' ';
					}
				}

			}
	}
}


//доп4
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

int main(int argc, char* argv[])
{
    std::vector<std::string> arr;
    std::string str;
    std::string word;
    int i = 0;

    std::cout << "Enter sentence.." << std::endl;
    std::getline(std::cin, str);

    std::stringstream  data(str);

    while (std::getline(data, word, ' '))
    {
        if (i++ % 2 != 0)
        {
            std::reverse(word.begin(), word.end());
            arr.push_back(word);
        }
    }

    for (std::vector<std::string>::iterator iter = arr.begin(); iter < arr.end(); ++iter)
        std::cout << *iter << " ";

    return 0;
}


//доп5
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    char stringA[256];

    puts("Enter sentence: ");
    gets_s(stringA);

    char word[256] = {};          //Буфер для считывания строки
    stringstream x;        //Создание потоковой переменной
    x << stringA;                 //Перенос строки в поток
    while (x >> word)
    {
        //cout << word << " ";
        if ((strlen(word)) % 2 == 0)
        {
            for (int i = strlen(word); i >= 0; i--)
            {
                cout << word[i];
            }
            cout << " ";
        }
        else
        {
            cout << "";
        }
    }
}

//доп7
#include<iostream>
#include <algorithm>
#include <unordered_set>
#include <iterator>
#include <sstream>

using namespace std;

int main()
{
    string s1;
    string s2;
    cout << "Input first sentence...\n";
    getline(cin, s1);
    cout << "Input second sentence...\n";
    getline(cin, s2);
    stringstream sss(s2);
    unordered_set<string>sal{ istream_iterator<string>(sss),istream_iterator<string>() };
    sss.str("");
    sss.clear();
    sss << s1;
    cout << "\nWord:";
    cout << *min_element(istream_iterator<string>(sss), istream_iterator<string>(), [&sal](const string& a, const string& b) {
        return a.length() < b.length() && sal.find(a) == sal.end();
        });
    return 0;
}