//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//
//
//
//int main()
//{
//    srand(time(0));
    //TASK1!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    //string title;
    //cout << "ENTER TITLE WHITHOUT TXT\n";
    //cin >> title;
    //string text;
    //ifstream text4Read(title + ".txt");
    //if (text4Read.is_open()) {
    //	for (char letter;text4Read.get(letter);)
    //	{
    //		text += letter;
    //		cout << letter;
    //	}
    //	for (;getline(text4Read,text);)
    //	{
    //		cout << text <<endl;
    //	}
    //	while (getline(text4Read, text)) {
    //		cout << text << endl;
    //	}
    //}
    //text4Read.close();

    //string title1;
    //cout << "ENTER TITLE WHITHOUT TXT\n";
    //cin >> title1;
    //while (true) {
    //	if (title1 != title) {
    //		break;
    //	}
    //	cout << "ENTER TITLE AGAIN\n";
    //	cin >> title1;
    //}
    //ofstream text1(title1 + ".txt", ios::app);
    //if (text1.is_open()) {
    //		
    //    text1 << text<<"\n";
    //}
    //else {
    //	cout << "ERROR\n";
    //}
    //text1.close();
    ////TASK3!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    //int arr[5] = { 1,2,3,4,5 };
    //string title2;
    //cout << "ENTER TITLE WHITHOUT TXT\n";
    //cin >> title2;
    //while (true) {
    //    if (title2 != title && title2 != title1) {
    //        break;
    //    }
    //    cout << "ENTER TITLE AGAIN\n";
    //    cin >> title2;
    //}
    //ofstream arra(title2 + ".txt", ios::app);
    //if (arra.is_open()) {

    //    for (int i = 0; i < 5; i++)
    //    {
    //        arra << arr[4-i] << "\n";
    //    }
    //    
    //}
    //else {
    //    cout << "ERROR\n";
    //}
    //arra.close();
    //TASK2!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//    string title3;
//    cout << "ENTER TITLE WHITHOUT TXT\n";
//    cin >> title3;
//    /*while (true) {
//        if (title3 != title && title3 != title1 && title3 != title2) {
//            break;
//        }
//        cout << "ENTER TITLE AGAIN\n";
//        cin >> title3;
//    }*/
//    ofstream numbers(title3 + ".txt", ios::app);
//    if (numbers.is_open()) {
//    	while (true) {
//    		string texta;
//    		cout << "ENTER TEXT(qwe to exit): \n";
//    		cin >> texta;
//    		if (texta != "qwe") {
//    			numbers << texta + "\n";
//    			cout << "COMPLETE\n";
//    		}
//    		else
//    		{
//    			numbers.close();
//    			break;
//    		}
//    	}
//    		
//    
//    }
//    else {
//    	cout << "ERROR\n";
//    }
//    int simb = 0;
//    ifstream number4Read(title3 + ".txt");
//    if (number4Read.is_open()) {
//        string text;
//        for (char letter;number4Read.get(letter);)
//        {
//            simb++;
//        }
//    }
//    cout << simb;
//    number4Read.close();
//
//}