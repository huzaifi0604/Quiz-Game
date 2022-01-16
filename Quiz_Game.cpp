#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<time.h>
using namespace std;

int main() {
	playagain:
	cout << "\t\t*****WELCOME TO QUIZ GAME***\n" << endl;
	int choice;
	int k = 0;
	int array[3] = {0};
	for (int i = 0; i < 3; i++) {
	again:
		cout << "Total Subjects are: \n1-General Knowledge\n2-Chemistry\n3-Cricket\n4-Movies\n5-Quit\nChoose: ";

		cin >> choice;
		while (choice < 1 || choice >5) {
			cout << "Invalid Input Enter Again " << endl;
			cout << "Total Subjects are: \n1-General Knowledge\n2-Chemistry\n3-Cricket\n4-Movies\n5-Quit\nChoose: ";
			cin >> choice;
		}
		for (int j = 0; j < 3; j++) {
			if (choice == array[j]) {
				cout << "Subject Already Chosen" << endl;
				goto again;
			}
		}
		array[k] = choice;
		k++;
	}
	fstream ifile("MCQS.txt", ios::in);
	string generalknowledge[20] = { "\0" };
	char gkanswers[20];
	string buff;
	getline(ifile, buff);
	for (int i = 0; i < 20; i++) {
		generalknowledge[i] = "\0";
		for (int j = 0; j < 4; j++) {
			getline(ifile, buff);
			generalknowledge[i] += buff;
			generalknowledge[i] += "\n";
		}
		getline(ifile, buff);
		gkanswers[i] = buff[buff.size() - 1];
	}
	/*cout << "\n\nPrinting General Knowledge\n\n";
	for (int i = 0; i < 20; i++) {
		cout << generalknowledge[i] << "\n";
		cout << gkanswers[i] << endl;
	}*/
	string chemistry[20] = { "\0" };
	char chemans[20];
	getline(ifile, buff);
	for (int i = 0; i < 20; i++) {
		chemistry[i] = "\0";
		for (int j = 0; j < 4; j++) {
			getline(ifile, buff);
			chemistry[i] += buff;
			chemistry[i] += "\n";
		}
		getline(ifile, buff);
		chemans[i] = buff[buff.size() - 1];
	}/*
	cout << "\n\nPrinting Chemistry\n" << endl;
	for (int i = 0; i < 20; i++) {
		cout << chemistry[i] << "\n";
		cout << chemans[i] << endl;
	}*/
	string cricket[15] = { "\0" };
	char cricketans[15];
	getline(ifile, buff);
	for (int i = 0; i < 15; i++) {
		cricket[i] = "\0";
		for (int j = 0; j < 5; j++) {
			getline(ifile, buff);
			cricket[i] += buff;
			cricket[i] += "\n";
		}
		getline(ifile, buff);
		cricketans[i] = buff[buff.size() - 1];
	}/*
	cout << "\n\nPrinting cricket\n\n" << endl;
	for (int i = 0; i < 15; i++) {
		cout << cricket[i] << "\n";
		cout << cricketans[i] << endl;
	}*/
	//cout << "Printing Movies" << endl;
	string movies[20] = { "\0" };
	char movieans[20] = {'\0'};
	getline(ifile, buff);
	for (int i = 0; i < 20; i++) {
		movies[i] = "\0";
		for (int j = 0; j < 5; j++) {
			getline(ifile, buff);
			movies[i] += buff;
			movies[i] += "\n";
		}
	}
	
	for (int i = 0; i<10; i++) {
		getline(ifile, buff);
		movieans[i]=buff[buff.size()-1];
	}/*
	for (int i = 0; i < 20; i++) {
		cout << movies[i] << "\n";
		cout << movieans[i] << endl;
	}*/
	bool repeat[75] = { false };
	int total_marks = 0;
	for (int i = 0; i < 20; i++) {
		srand(time(NULL));
		int a = rand() % 2;
		switch (array[a]) {
		case 1: {
			cout << "General Knowledge" << endl;
			cout << "\nPlease Enter Input in Capityal Letters\n";
			int b = rand() % 19 + 1;
			switch (b) {
			case 1: {
				char ans;
				if (repeat[0] == false) {
					cout << generalknowledge[0];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == gkanswers[0]) {
						total_marks += 10;
					}
					repeat[0] = true;
					continue;
				}
			}
			case 2: {
				char ans;
				if (repeat[1] == false) {
					cout << generalknowledge[1];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == gkanswers[1]) {
						total_marks += 10;
					}
					repeat[1] = true;
					continue;
				}
			}
			case 3: {
				char ans;
				if (repeat[2] == false) {
					cout << generalknowledge[2];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == gkanswers[2]) {
						total_marks += 10;
					}
					repeat[2] = true;
					continue;
				}
			}
			case 4: {
				char ans;
				if (repeat[3] == false) {
					cout << generalknowledge[3];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == gkanswers[3]) {
						total_marks += 10;
					}
					repeat[3] = true;
					continue;
				}
			}
			case 5: {
				char ans;
				if (repeat[4] == false) {
					cout << generalknowledge[4];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == gkanswers[4]) {
						total_marks += 10;
					}
					repeat[4] = true;
					continue;
				}
			}
			case 6: {
				char ans;
				if (repeat[5] == false) {
					cout << generalknowledge[5];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == gkanswers[5]) {
						total_marks += 10;
					}
					repeat[5] = true;
					continue;
				}
			}
			case 7: {
				char ans;
				if (repeat[6] == false) {
					cout << generalknowledge[6];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == gkanswers[6]) {
						total_marks += 10;
					}
					repeat[6] = true;
					continue;
				}
			}
			case 8: {
				char ans;
				if (repeat[7] == false) {
					cout << generalknowledge[7];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == gkanswers[7]) {
						total_marks += 10;
					}
					repeat[7] = true;
					continue;
				}
			}
			case 9: {
				char ans;
				if (repeat[8] == false) {
					cout << generalknowledge[8];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == gkanswers[8]) {
						total_marks += 10;
					}
					repeat[8] = true;
					continue;
				}
			}
			case 10: {
				cout << "General Knowledge" << endl;
				int b = rand() % 19 + 1;
				switch (b) {
				case 1: {
					char ans;
					if (repeat[9] == false) {
						cout << generalknowledge[9];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[9]) {
							total_marks += 10;
						}
						repeat[9] = true;
						continue;
					}
				}
				case 11: {
					char ans;
					if (repeat[10] == false) {
						cout << generalknowledge[10];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[10]) {
							total_marks += 10;
						}
						repeat[10] = true;
						continue;
					}
				}
				case 12: {
					char ans;
					if (repeat[11] == false) {
						cout << generalknowledge[11];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[11]) {
							total_marks += 10;
						}
						repeat[11] = true;
						continue;
					}
				}
				case 13: {
					char ans;
					if (repeat[12] == false) {
						cout << generalknowledge[12];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[12]) {
							total_marks += 10;
						}
						repeat[12] = true;
						continue;
					}
				}
				case 14: {
					char ans;
					if (repeat[13] == false) {
						cout << generalknowledge[13];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[13]) {
							total_marks += 10;
						}
						repeat[13] = true;
						continue;
					}
				}
				case 15: {
					char ans;
					if (repeat[14] == false) {
						cout << generalknowledge[14];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[14]) {
							total_marks += 10;
						}
						repeat[14] = true;
						continue;
					}
				}
				case 16: {
					char ans;
					if (repeat[15] == false) {
						cout << generalknowledge[15];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[15]) {
							total_marks += 10;
						}
						repeat[15] = true;
						continue;
					}
				}
				case 17: {
					char ans;
					if (repeat[16] == false) {
						cout << generalknowledge[16];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[16]) {
							total_marks += 10;
						}
						repeat[16] = true;
						continue;
					}
				}
				case 18: {
					char ans;
					if (repeat[17] == false) {
						cout << generalknowledge[17];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[17]) {
							total_marks += 10;
						}
						repeat[17] = true;
						continue;
					}
				}
				case 19: {
					char ans;
					if (repeat[18] == false) {
						cout << generalknowledge[18];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[18]) {
							total_marks += 10;
						}
						repeat[18] = true;
						continue;
					}
				}
				case 20: {
					char ans;
					if (repeat[19] == false) {
						cout << generalknowledge[19];
						cin >> ans;
						while (ans < 65 && ans > 69) {
							cout << "Invalid Input Enter Again" << endl;
							cin >> ans;
						}
						if (ans == gkanswers[19]) {
							total_marks += 10;
						}
						repeat[19] = true;
						continue;
					}
				}
				}
			}
			}
		}
		case 2: {
			cout << "Chemistry" << endl;
			cout << "Please Enter Your Answers in Capital Letters\n";
			int b = rand() % 19 + 1;
			switch (b) {
			case 1: {
				char ans;
				if (repeat[20] == false) {
					cout << chemistry[0];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[0]) {
						total_marks += 10;
					}
					repeat[20] = true;
					continue;
				}
			}
			case 2: {
				char ans;
				if (repeat[21] == false) {
					cout << chemistry[1];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[1]) {
						total_marks += 10;
					}
					repeat[21] = true;
					continue;
				}
			}
			case 3: {
				char ans;
				if (repeat[22] == false) {
					cout << chemistry[2];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[2]) {
						total_marks += 10;
					}
					repeat[22] = true;
					continue;
				}
			}
			case 4: {
				char ans;
				if (repeat[23] == false) {
					cout << chemistry[3];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[3]) {
						total_marks += 10;
					}
					repeat[23] = true;
					continue;
				}
			}
			case 5: {
				char ans;
				if (repeat[24] == false) {
					cout << chemistry[4];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[4]) {
						total_marks += 10;
					}
					repeat[24] = true;
					continue;
				}
			}
			case 6: {
				char ans;
				if (repeat[25] == false) {
					cout << chemistry[5];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[5]) {
						total_marks += 10;
					}
					repeat[25] = true;
					continue;
				}
			}
			case 7: {
				char ans;
				if (repeat[26] == false) {
					cout << chemistry[6];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[6]) {
						total_marks += 10;
					}
					repeat[26] = true;
					continue;
				}
			}
			case 8: {
				char ans;
				if (repeat[27] == false) {
					cout << chemistry[7];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[7]) {
						total_marks += 10;
					}
					repeat[27] = true;
					continue;
				}
			}
			case 9: {
				char ans;
				if (repeat[28] == false) {
					cout << chemistry[8];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[8]) {
						total_marks += 10;
					}
					repeat[28] = true;
					continue;
				}
			}
			case 10: {
				char ans;
				if (repeat[29] == false) {
					cout << chemistry[9];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[9]) {
						total_marks += 10;
					}
					repeat[29] = true;
					continue;
				}
			}
			case 11: {
				char ans;
				if (repeat[30] == false) {
					cout << chemistry[10];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[10]) {
						total_marks += 10;
					}
					repeat[30] = true;
					continue;
				}
			}
			case 12: {
				char ans;
				if (repeat[31] == false) {
					cout << chemistry[11];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[11]) {
						total_marks += 10;
					}
					repeat[31] = true;
					continue;
				}
			}
			case 13: {
				char ans;
				if (repeat[32] == false) {
					cout << chemistry[12];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[12]) {
						total_marks += 10;
					}
					repeat[32] = true;
					continue;
				}
			}
			case 14: {
				char ans;
				if (repeat[33] == false) {
					cout << chemistry[13];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[13]) {
						total_marks += 10;
					}
					repeat[33] = true;
					continue;
				}
			}
			case 15: {
				char ans;
				if (repeat[34] == false) {
					cout << chemistry[14];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[14]) {
						total_marks += 10;
					}
					repeat[34] = true;
					continue;
				}
			}
			case 16: {
				char ans;
				if (repeat[35] == false) {
					cout << chemistry[15];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[15]) {
						total_marks += 10;
					}
					repeat[35] = true;
					continue;
				}
			}
			case 17: {
				char ans;
				if (repeat[36] == false) {
					cout << chemistry[16];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[16]) {
						total_marks += 10;
					}
					repeat[36] = true;
					continue;
				}
			}
			case 18: {
				char ans;
				if (repeat[37] == false) {
					cout << chemistry[17];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[17]) {
						total_marks += 10;
					}
					repeat[37] = true;
					continue;
				}
			}
			case 19: {
				char ans;
				if (repeat[38] == false) {
					cout << chemistry[18];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[18]) {
						total_marks += 10;
					}
					repeat[38] = true;
					continue;
				}
			}
			case 20: {
				char ans;
				if (repeat[39] == false) {
					cout << chemistry[19];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == chemans[19]) {
						total_marks += 10;
					}
					repeat[39] = true;
					continue;
				}
			}
			}
		}
		case 3: {
			cout << "Cricket" << endl;
			cout << "\nPlease Enter Your Answers in Capital Letters\n";
			int b = rand() % 19 + 1;
			switch (b) {
			case 1: {
				char ans;
				if (repeat[40] == false) {
					cout << cricket[0];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[0]) {
						total_marks += 10;
					}
					repeat[40] = true;
					continue;
				}
			}
			case 2: {
				char ans;
				if (repeat[41] == false) {
					cout << cricket[1];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[1]) {
						total_marks += 10;
					}
					repeat[41] = true;
					continue;
				}
			}
			case 3: {
				char ans;
				if (repeat[42] == false) {
					cout << cricket[2];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[2]) {
						total_marks += 10;
					}
					repeat[42] = true;
					continue;
				}
			}
			case 4: {
				char ans;
				if(repeat[43] == false){
					cout << cricket[3];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[3]) {
						total_marks += 10;
					}
					repeat[43] = true;
					continue;
				}
			}
			case 5: {
				char ans;
				if (repeat[44] == false) {
					cout << cricket[4];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[4]) {
						total_marks += 10;
					}
					repeat[44] = true;
					continue;
				}
			}
			case 6: {
				char ans;
				if (repeat[45] == false) {
					cout << cricket[5];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[5]) {
						total_marks += 10;
					}
					repeat[45] = true;
					continue;
				}
			}
			case 7: {
				char ans;
				if (repeat[46] == false) {
					cout << cricket[6];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[6]) {
						total_marks += 10;
					}
					repeat[46] = true;
					continue;
				}
			}
			case 8: {
				char ans;
				if (repeat[47] == false) {
					cout << cricket[7];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[7]) {
						total_marks += 10;
					}
					repeat[47] = true;
					continue;
				}
			}
			case 9: {
				char ans;
				if (repeat[48] == false) {
					cout << cricket[8];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[8]) {
						total_marks += 10;
					}
					repeat[48] = true;
					continue;
				}
			}
			case 10: {
				char ans;
				if (repeat[49] == false) {
					cout << cricket[9];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[9]) {
						total_marks += 10;
					}
					repeat[49] = true;
					continue;
				}
			}
			case 11: {
				char ans;
				if (repeat[50] == false) {
					cout << cricket[10];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[10]) {
						total_marks += 10;
					}
					repeat[50] = true;
					continue;
				}
			}
			case 12: {
				char ans;
				if (repeat[51] == false) {
					cout << cricket[11];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[11]) {
						total_marks += 10;
					}
					repeat[51] = true;
					continue;
				}
			}
			case 13: {
				char ans;
				if (repeat[52] == false) {
					cout << cricket[12];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[12]) {
						total_marks += 10;
					}
					repeat[52] = true;
					continue;
				}
			}
			case 14: {
				char ans;
				if (repeat[53] == false) {
					cout << cricket[13];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[13]) {
						total_marks += 10;
					}
					repeat[53] = true;
					continue;
				}
			}
			case 15: {
				char ans;
				if (repeat[54] == false) {
					cout << cricket[14];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == cricketans[14]) {
						total_marks += 10;
					}
					repeat[54] = true;
					continue;
				}
			}
			}
		}
		case 4: {
			cout << "Movies" << endl;
			cout << "Please Enter Your Answers in small Letters" << endl;
			int b = rand() % 19 + 1;
			switch (b) {
			case 1: {
				char ans;
				if (repeat[55] == false) {
					cout << movies[0];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[0]) {
						total_marks += 10;
					}
					repeat[55] = true;
					continue;
				}
			}
			case 2: {
				char ans;
				if (repeat[56] == false) {
					cout << movies[1];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[1]) {
						total_marks += 10;
					}
					repeat[56] = true;
					continue;
				}
			}
			case 3: {
				char ans;
				if (repeat[57] == false) {
					cout << movies[2];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[2]) {
						total_marks += 10;
					}
					repeat[57] = true;
					continue;
				}
			}
			case 4: {
				char ans;
				if (repeat[58] == false) {
					cout << movies[3];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[3]) {
						total_marks += 10;
					}
					repeat[58] = true;
					continue;
				}
			}
			case 5: {
				char ans;
				if (repeat[59] == false) {
					cout << movies[4];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[4]) {
						total_marks += 10;
					}
					repeat[59] = true;
					continue;
				}
			}
			case 6: {
				char ans;
				if (repeat[60] == false) {
					cout << movies[5];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[5]) {
						total_marks += 10;
					}
					repeat[60] = true;
					continue;
				}
			}
			case 7: {
				char ans;
				if (repeat[61] == false) {
					cout << movies[6];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[6]) {
						total_marks += 10;
					}
					repeat[61] = true;
					continue;
				}
			}
			case 8: {
				char ans;
				if (repeat[62] == false) {
					cout << movies[7];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[7]) {
						total_marks += 10;
					}
					repeat[62] = true;
					continue;
				}
			}
			case 9: {
				char ans;
				if (repeat[63] == false) {
					cout << movies[8];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[8]) {
						total_marks += 10;
					}
					repeat[63] = true;
					continue;
				}
			}
			case 10: {
				char ans;
				if (repeat[64] == false) {
					cout << movies[9];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[9]) {
						total_marks += 10;
					}
					repeat[64] = true;
					continue;
				}
			}
			case 11: {
				char ans;
				if (repeat[65] == false) {
					cout << movies[10];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[10]) {
						total_marks += 10;
					}
					repeat[65] = true;
					continue;
				}
			}
			case 12: {
				char ans;
				if (repeat[66] == false) {
					cout << movies[11];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[11]) {
						total_marks += 10;
					}
					repeat[66] = true;
					continue;
				}
			}
			case 13: {
				char ans;
				if (repeat[67] == false) {
					cout << movies[12];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[12]) {
						total_marks += 10;
					}
					repeat[67] = true;
					continue;
				}
			}
			case 14: {
				char ans;
				if (repeat[68] == false) {
					cout << movies[13];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[13]) {
						total_marks += 10;
					}
					repeat[68] = true;
					continue;
				}
			}
			case 15: {
				char ans;
				if (repeat[69] == false) {
					cout << movies[14];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[14]) {
						total_marks += 10;
					}
					repeat[69] = true;
					continue;
				}
			}
			case 16: {
				char ans;
				if (repeat[70] == false) {
					cout << movies[15];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[15]) {
						total_marks += 10;
					}
					repeat[70] = true;
					continue;
				}
			}
			case 17: {
				char ans;
				if (repeat[71] == false) {
					cout << movies[16];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[16]) {
						total_marks += 10;
					}
					repeat[71] = true;
					continue;
				}
			}
			case 18: {
				char ans;
				if (repeat[72] == false) {
					cout << movies[17];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[17]) {
						total_marks += 10;
					}
					repeat[72] = true;
					continue;
				}
			}
			case 19: {
				char ans;
				if (repeat[73] == false) {
					cout << movies[18];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[18]) {
						total_marks += 10;
					}
					repeat[73] = true;
					continue;
				}
			}
			case 20: {
				char ans;
				if (repeat[74] == false) {
					cout << movies[19];
					cin >> ans;
					while (ans < 65 && ans > 69) {
						cout << "Invalid Input Enter Again" << endl;
						cin >> ans;
					}
					if (ans == movieans[19]) {
						total_marks += 10;
					}
					repeat[74] = true;
					continue;
				}
			}
			}
		}
		case 5: {
			cout << "\t\tHave A Nice Day\n\n\t\t GOOD BYE!!\n";
			return 0;
		}
		}
	}
	ifile.close();
	cout << "Your Total Marks are: " << total_marks << endl;
	fstream ofile("score.txt", ios::app);
		ofile << "Score for Game is: "<<total_marks << "\n";
		ofile.close();
		int play_again;
		cout << "Do You Want To \n1- Play Again\n2- Exit\n Choose: ";
		cin >> play_again;
		if (play_again == 1)
			goto playagain;
		else
			return 0;

	return 0;
}