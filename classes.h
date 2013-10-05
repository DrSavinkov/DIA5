#include <stdlib.h>
#include "afc.h"

long double dt=1; // sec

class T_cell
{
	private:
		int lifetime_sec;
		int divtime_sec;
		int curr_life_time;
		int left_to_div;
	public:
		bool active;
		T_cell()
		{
			active = true;
			lifetime_sec = (3600*24)*30;
			divtime_sec = 60*30;
			curr_life_time = random()*lifetime_sec;
			left_to_div = random()*divtime_sec;
		}
		void as_new()
		{
			T_cell();
			curr_life_time = 0;
			left_to_div = 0;
		}
		short addt()
		{
			short k=0;
			curr_life_time++;
			left_to_div--;
			if(left_to_div==0)
			{
				k++;
				left_to_div=divtime_sec;
			}
			if(curr_life_time>lifetime_sec)
			{
				k+=2;
				active=false;
			}
			// return 1 if time to div
			// return 2 if time to die
			// return 3 if time to div&die(???)
			return k;
		}
};

class lmph
{
	private:
		int lifetime_sec;
		int divtime_sec;
		int curr_life_time;
		int time_to_find;
		short cft;
	public:
		bool active;
		lmph(int lt,int dt, int )
		{
			active = true;
			lifetime_sec = (3600*24)*14;
			divtime_sec = 3600*4; // 4 hour
			curr_life_time = random()*lifetime_sec;
			time_to_find = 40;
			cft = random()*time_to_find;
		}
		short addt()
		{
			short k=0; 
			curr_life_time++;
			cft--;
			divtime_sec--;
			if(divtime_sec<=0)
{
k+=4;
}
			if(cft==0)
			{
				k++;
				cft=time_to_find;
			}
			if(curr_life_time==lifetime_sec)
			{
				active=false;
				k+=2;
			}
			return k;
		}
};

class vir
{
	private:
		int lifetime_sec;
		int curr_life_time;
		int time_to_find;
		short cft;
	public:
		bool active;
		vir(int lt,int dt, int )
		{
			active = true;
			lifetime_sec = (3600*24)*14;
			divtime_sec = 3600*4; // 4 hour
			curr_life_time = random()*lifetime_sec;
			time_to_find = 40;
			cft = random()*time_to_find;
		}
		short addt()
		{
			short k=0; 
			curr_life_time++;
			cft--;
			if(cft==0)
			{
				k++;
				cft=time_to_find;
			}
			if(curr_life_time==lifetime_sec)
			{
				active=false;
				k+=2;
			}
			return k;
		}
};


