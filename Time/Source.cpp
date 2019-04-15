//#include<iostream>
//#include<Windows.h>
//
//using namespace std;
//
//class clock
//{
//private:
//	int hour;
//	int minute;
//	int second;
//public:
//	void set_hour()
//	{
//		do
//		{
//			cout << "Какой час?" << endl;
//			cin >> hour;
//
//		} while (hour < 0 && hour >24);
//	}
//	void set_hour(int a)
//	{
//		if (a >= 0 && a < 24)
//		{
//			hour = a;
//		}
//		else
//			hour = 0;
//	}
//	void set_minute()
//	{
//		do
//		{
//			cout << "Минуты?" << endl;
//			cin >> minute;
//
//		} while (minute < 0 && minute >60);
//	}	
//	void set_minute(int a)
//	{
//		if (a >= 0 && a <= 59)
//		{
//			minute = a;
//		}
//		else
//			minute = 0;
//	}
//	void set_second()
//	{
//		do
//		{
//			cout << "Секунды?" << endl;
//			cin >> second;
//
//		} while (second < 0 && second >60);
//	}
//	void set_second(int a)
//	{
//		if (a >= 0 && a <= 59)
//		{
//			second = a;
//		}
//		else
//			second = 0;
//	}
//	void printTime()
//	{
//		if (hour <10 && second<10 && minute<10)
//		{
//			cout << "Время: 0" << hour << ":0" << minute << ":0" << second << endl;
//		}
//		else if (hour<10 && minute<10)
//		{
//			cout << "Время: 0" << hour << ":0" << minute << ":" << second << endl;
//		}
//		else if (hour<10 && second<10)
//		{
//			cout << "Время: 0" << hour << ":" << minute << ":0" << second << endl;
//		}
//		else if (second<10 && minute<10)
//		{
//			cout << "Время: " << hour << ":0" << minute << ":0" << second << endl;
//		}
//		else if (second<10)
//		{
//			cout << "Время: " << hour << ":" << minute << ":0" << second << endl;
//		}
//		else if (hour<10)
//		{
//			cout << "Время: 0" << hour << ":" << minute << ":" << second << endl;
//		}
//		else if (minute<10)
//		{
//			cout << "Время: " << hour << ":0" << minute << ":" << second << endl;
//		}
//		else
//			cout << "Время: " << hour << ":" << minute << ":" << second << endl;
//	}
//	void printHour()
//	{
//		if (hour < 10)
//			cout << "0" << endl;
//		else
//			cout << hour << endl;
//	}
//	void printMinute()
//	{
//		if (minute < 10)
//			cout << "0" << endl;
//		else
//			cout << minute << endl;
//	}
//	void printSecond()
//	{
//		if (second < 10)
//			cout << "0" << endl;
//		else
//			cout << second << endl;
//	}
//	void plusSecond()
//	{
//		second++;
//		if (second == 60)
//		{
//			minute++;
//		}
//	}
//	void plusMinute()
//	{
//		minute++;
//		if (minute == 60)
//		{
//			hour++;
//		}
//	}
//	void plusHour()
//	{
//		hour++;
//		if (hour == 25)
//		{
//			minute++;
//		}
//	}
//	void Check()
//	{
//
//		if (second == 60)
//		{
//			second = 0;
//		}
//		if (minute == 60)
//		{
//			hour++;
//			minute = 0;
//		}
//		if (hour == 24)
//		{
//			hour = 0;
//		}
//
//	}
//};
//
//void main()
//{
//	setlocale(LC_ALL, "");
//
//	clock a;
//
//	a.set_hour(2);
//	a.set_minute(58);
//	a.set_second(59);
//
//	while (1)
//	{
//		a.printTime();
//		a.plusSecond();
//		a.Check();
//		Sleep(1000);
//		system("cls");
//	}
//
//	system("pause");
//}
#include <iostream>
#include< Windows.h>
using namespace std;


class clock
{
private:
	int hours;
	int minutes;
	int seconds;
public:

	//clock()
	//{
	//	hours = 0;
	//	minutes = 0;
	//	seconds = 0;
	//}
	//clock(int a)
	//{
	//	set_hours(a);
	//	minutes = 0;
	//	seconds = 0;
	//}
	//clock(int a,int b)
	//{
	//	set_hours(a);
	//	set_minutes(b);
	//	seconds = 0;
	//}
	//clock(int a, int b, int c)
	//{
	//	set_hours(a);
	//	set_minutes(b);
	//	set_seconds(c);
	//}

	clock(int a = 0, int b = 0, int c = 0)
	{
		set_hours(a);
		set_minutes(b);
		set_seconds(c);
	}
	clock(const clock &asd)
	{
		this->hours = asd.hours;
		this->minutes = asd.minutes;
		this->seconds = asd.seconds;
	}

	void set_hours(int a)
	{
		if (hours >= 0 || hours < 24)
			hours = a;
		else
			hours = 0;
	}
	void set_minutes(int a)
	{
		if (minutes >= 0 || minutes < 60)
			minutes = a;
		else
			minutes = 0;
	}
	void set_seconds(int a)
	{
		if (seconds >= 0 || seconds < 60)
			seconds = a;
		else
			seconds = 0;
	}
	int get_hours()const
	{
		return hours;
	}
	int get_minutes()const
	{
		return minutes;
	}
	int get_seconds()const
	{
		return seconds;
	}
	void print()const {
		if (hours < 10) cout << "0";
		cout << hours << ":";
		if (minutes < 10) cout << "0";
		cout << minutes << ":";
		if (seconds < 10) cout << "0";
		cout << seconds << endl;
	}
	void addHours()
	{
		if (hours >= 23)
		{
			hours = 0;
		}
		else hours++;
	}
	void addMinutes()
	{
		minutes++;
		if (minutes == 60)
		{
			minutes = 0;
			addHours();
		}

	}
	void addSeconds()
	{
		if (seconds == 59)
		{
			seconds = 0;
			addMinutes();
		}
		else seconds++;
	}
	clock& operator++()
	{
		this->addSeconds();
		return *this;
	}
	clock operator++(int)
	{
		clock c = *this;
		this->addSeconds();
		return c;
	}
	void addHours(int x)
	{
		this->hours = this->hours + x;
		this->hours = this->hours % 24;
		//do
		//{
		//	if (hours>23)
		//	{
		//		hours = hours - 24;
		//	}
		//} while (hours > 23);
	}
	void addminutes(int x)
	{
		addHours(x / 60);
		x = x % 60;
		minutes = minutes + x;
		if (minutes>59)
		{
			addHours();
		}

	}
	void addSeconds(int x)
	{
		addminutes(x/60);
		x = x % 60;
		seconds += x;
		if (seconds>59)
		{
			addSeconds();
		}

	}
	void operator+=(const clock &b)
	{
		this->addHours(b.hours);
		this->addminutes(b.minutes );
		this->addSeconds(b.seconds);

	}
	clock& operator=(const clock &qq)
	{
		//if (this == &qq)
		//{
		//	return *this;
		//}
		this->hours = qq.hours;
		this->minutes = qq.minutes;
		this->seconds = qq.seconds;
		return *this;
	}
};

ostream& operator<<(ostream &os, const clock& s)
{

}


void main()
{
	clock a(0,0,15);
	clock b(23, 59, 59);
	a = b++;
	a.print();
	b.print();

	//int x = 5;
	//int y = x++;
	//cout << x << " " << y << endl;

	system("pause");
}
//a.set_hours(23);
//a.set_minutes(59);
//a.set_seconds(40);
//while (1) {
//	a.print();
//	a.addSeconds();
//	Sleep(1000);
//	system("cls");
//}
