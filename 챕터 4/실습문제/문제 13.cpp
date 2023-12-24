#include <iostream>
using namespace std;

class Histogram {
	string text;
	int alphabets;
	int histogram[26];
public:
	Histogram(string initial_text) {
		text = initial_text;
		putc('\n');
	}
	void put(string add_text) {
		text += add_text;
	}
	void putc(char add_letter) {
		text += add_letter;
	}
	void print() {
		alphabets = 0;
		memset(histogram, 0, sizeof(histogram));
		for (int i = 0; i < text.length(); ++i) {
			if (isalpha(text[i])) {
				++alphabets;
				char alpha = tolower(text[i]);
				++histogram[(int)(alpha - 97)];
			}
		}

		cout << text << endl << endl << "ÃÑ ¾ËÆÄºª ¼ö " << alphabets << endl << endl;
		int num;
		for (char c = 'a'; c <= 'z'; ++c) {
			num = histogram[(int)(c - 97)];
			cout << c << " (" << num << ")\t: ";
			for (int i = 0; i < num; ++i)
				cout << "*";
			cout << endl;
		}
	}
};

void num13() {
	Histogram elvisHisto("Wise men sy, only fols rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}