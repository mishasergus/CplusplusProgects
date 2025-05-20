//#include <iostream>
//#include <fstream>
//#include <string>
//#include <filesystem>
//using namespace std;
//namespace fs = filesystem;
//
//
//int main()
//{
//    srand(time(0));
//
//    string dirName;
//    cout << "Name of directory:\n";
//    cin >> dirName;
//    fs::create_directory(dirName);
//    int nOfSimb = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        string fileName;
//        string text;
//        cout << "Name of file(without .txt):\n";
//        cin >> fileName;
//        string path = dirName + "/" + fileName + ".txt";
//        fstream obj;
//        obj.open(path, ios::out);
//        if (obj.is_open())
//        {
//            cout << "text:\n";
//            cin >> text;
//            obj << text << endl;
//            obj.close();
//        }
//        ifstream objq(path);
//        if (objq.is_open())
//        {
//            for (char letter;objq.get(letter);)
//            {
//                nOfSimb++;
//            }
//            objq.close();
//        }
//        else {
//            cout << "File can not be opened..." << endl;
//        }
//        cout << "nOfSimb:"<< nOfSimb <<"\n";
//
//        fs::create_directory(dirName + "/backup");
//            
//        fstream obj2;
//        string path1 = dirName + "/backup/" + fileName + ".txt";
//        obj2.open(path1, ios::out);
//        if (obj2.is_open())
//        {
//            obj2 << text << endl;
//            obj2.close();
//        }
//    }
//
//    
//
//}