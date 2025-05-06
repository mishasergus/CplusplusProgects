//#include <iostream>
//using namespace std;
//
//struct Animal {
//
//	string type;
//
//	int speed;
//	string color;
//
//	float fly_speed = 0;
//	bool even_toed = 0;
//	int Iq = 0;
//
//	Animal(string _type, int _speed, string _color, float _fly) {
//		type = _type;
//		speed = _speed;
//		color = _color;
//		fly_speed = _fly;
//	}
//	
//	Animal(string _type, int _speed, string _color, bool _even_toed) {
//		type = _type;
//		speed = _speed;
//		color = _color;
//		even_toed = _even_toed;
//	}
//	Animal(string _type, int _speed, string _color, int _Iq) {
//		type = _type;
//		speed = _speed;
//		color = _color;
//		Iq = _Iq;
//	}
//	void Show() {
//		if (type == "bird") {
//			cout << "speed: " << speed << " tipe: " << type << " color: " << color << " speedOfFly: " << fly_speed;
//		}
//		else if (type == "animal") {
//			cout << "speed: " << speed << " tipe: " << type << " color: " << color << " artiodactyl: " << even_toed;
//		}
//		else if (type == "human") {
//			cout << "speed: " << speed << " tipe: " << type << " color: " << color << " iq: " << Iq;
//		}
//		else
//		{
//			cout << "Smth was wrong(maybe tipe)";
//		}
//	}
//	float getSpeed() {
//		return speed;
//	}
//	void setSpeed(float speed1) {
//		speed = speed1;
//	}
//	string getTipe() {
//		return type;
//	}
//	void setTipe(string type1) {
//		type = type1;
//	}
//	string getColour() {
//		return color;
//	}
//	void setColour(string colour1) {
//		color = colour1;
//	}
//	float getHaracterisation1() {
//		return fly_speed;
//	}
//	void setHaracterisation1(float fly_speed1) {
//		fly_speed = fly_speed1;
//	}
//	int getHaracterisation2() {
//		return Iq;
//	}
//	void setHaracterisation2(int Iq1) {
//		Iq = Iq1;
//	}
//	bool getHaracterisation3() {
//		return even_toed;
//	}
//	void setHaracterisation3(bool even_toed1) {
//		even_toed = even_toed1;
//	}
//	
//	
//};
//	//	if (typeid(mass[i].fly_speed) == typeid(float)) {
//
//struct Car
//{
//private:
//	string colour;
//	string model;
//	int number[5];
//public:
//	Car(string colour1, string model1) {
//		colour = colour1;
//		model = model1;
//	}
//
//	void Show() {
//		cout << "colour: " << colour << " model: " << model << " number: ";
//		for (int i = 0; i < 5; i++)
//		{
//			cout << number[i];
//		}
//		cout << "\n";
//	}
//	string getColour() {
//		return colour;
//	}
//	void setColour(string colour1) {
//		colour = colour1;
//	}
//	string getModel() {
//		return model;
//	}
//	void setModel(string model1) {
//		model = model1;
//	}
//	int getNumber() {
//		int num = 0;
//		for (int i = 0;i < 5;i++) {
//			num += number[4-i] * pow(10,i);
//		}
//		return num;
//	}
//	void setNumber(int number1) {
//		int prom = 0;
//		for (int i = 4;i >= 0;i--) {
//			number[4 - i] = floor(number1*pow(10,-i)) - prom;
//			prom *= 10;
//			prom += number[4-i] * 10;
//		}
//	}
//
//};
//void changeOne1(int num, Animal arr[]) {
//	string type;
//	int speed;
//	string color;
//	cout << "type:\n";
//	cin >> type;
//	cout << "speed:\n";
//	cin >> speed;
//	cout << "color:\n";
//	cin >> color;
//	arr[num].setColour(color);
//	arr[num].setSpeed(speed);
//	arr[num].setTipe(type);
//	if (arr[num].getTipe() == "animal") {
//		bool even_toed;
//		cout << "even_toed:\n";
//		cin >> even_toed;
//		arr[num].setHaracterisation3(even_toed);
//	}
//	else if (arr[num].getTipe() == "bird") {
//		float fly_speed;
//		cout << "fly_speed:\n";
//		cin >> fly_speed;
//		arr[num].setHaracterisation1(fly_speed);
//	}
//	else if (arr[num].getTipe() == "human") {
//		int Iq;
//		cout << "Iq:\n";
//		cin >> Iq;
//		arr[num].setHaracterisation2(Iq);
//	}
//
//}
//void changeOne(int num, Car arr[]) {
//	string col1;
//	string mod1;
//	int nume;
//	cout << "Colour:";
//	cin >> col1;
//	cout << "Model:";
//	cin >> mod1;
//	cout << "Number(5numbs):";
//	cin >> nume;
//	arr[num].setColour(col1);
//	arr[num].setModel(mod1);
//	arr[num].setNumber(nume);
//}
//void showall(Car arr[]) {
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Car"<<i+1<<"\n";
//		cout << "colour: " << arr[i].getColour() << " model: " << arr[i].getModel() << " number: "<< arr[i].getNumber()<<"\n";
//	}
//}
//void search(Car arr[],int num) {
//	for (int i = 0; i < 10; i++)
//	{
//		if (num == arr[i].getNumber()) {
//			cout << "colour: " << arr[i].getColour() << " model: " << arr[i].getModel() << " number: " << arr[i].getNumber() << "\n";
//
//		}
//	}
//}
//void seakByHar(int iq, Animal arr[]) {
//	for (int i = 0; i < 4; i++)
//	{
//		if (arr[i].getTipe() == "human") {
//			if (arr[i].getHaracterisation2() == iq) {
//				arr[i].Show();
//			}
//		}
//	}
//}
//void seakByHar(float fly_speed, Animal arr[]) {
//	for (int i = 0; i < 4; i++)
//	{
//
//		if (arr[i].getTipe() == "bird") {
//			if (arr[i].getHaracterisation3() == fly_speed) {
//				arr[i].Show();
//			}
//		}
//	}
//}
//void seakByHar(bool even_toed, Animal arr[]) {
//	for (int i = 0; i < 4; i++)
//	{
//		if (arr[i].getTipe() == "animal") {
//			if (arr[i].getHaracterisation1() == even_toed) {
//				arr[i].Show();
//			}
//		}
//	}
//}
//int main()
//{
//
//	srand(time(0));
//	/*Car bmw("Oleg", "ss");
//	bmw.setNumber(12345);
//	Car bwm("Oleg", "ss");
//	bwm.setNumber(12345);
//	Car mbw("Oleg", "ss");
//	mbw.setNumber(12345);
//	Car mwb("Oleg", "ss");
//	mwb.setNumber(12345);
//	Car wmb("Oleg", "ss");
//	wmb.setNumber(12345);
//	Car wbm("Oleg", "ss");
//	wbm.setNumber(12345);
//	Car www("WWWWW", "wwwww");
//	www.setNumber(42424);
//	Car bbb("BBBBB", "bbbbbb");
//	bbb.setNumber(11111);
//	Car mmm("Mavrodi", "MmM");
//	mmm.setNumber(12344);
//	Car wmm("Mawrodi", "MwM");
//	wmm.setNumber(14344);
//	Car arr[10] = { bmw, bwm ,mbw ,mwb ,wmb ,wbm ,www ,bbb ,mmm ,wmm };
//	changeOne(2, arr);
//	showall(arr);
//	search(arr, 11111);*/
//
//
//
//	Animal q("animal", 123, "ss", true);
//	Animal w("human", 123, "ss", 11);
//	Animal e("human", 123, "ss", 2);
//	Animal r("bird", 123, "ss", (float)11.3);
//	Animal arr1[4] = { q, w ,e ,r};
//	for (int i = 0;i<4;i++)
//		{
//			arr1[i].Show();
//			cout << "\n";
//		}
//	cout << "\n";
//	changeOne1(2, arr1);
//	cout << "\n";
//	seakByHar(11, arr1);
//
//}