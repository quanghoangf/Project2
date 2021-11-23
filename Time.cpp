#include "Time.h"
#include "DoHoa.h"
string get_time()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	return to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + ":" + to_string(ltm->tm_sec);
}
string get_day()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	return to_string(ltm->tm_mday) + "/" + to_string(1 + ltm->tm_mon) + "/" + to_string(1900 + ltm->tm_year);
}
void intime()
{
	CanLe();
	cout << " Thoi gian: " << get_time() << endl;
	CanLe();
	cout << " Ngay: " << get_day() << endl;
}