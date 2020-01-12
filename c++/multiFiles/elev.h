#include"elv_app.h"
#include"msoftcon.h"
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
using namespace std;

enum direction { UP, DOWN, STOP };
const int LOADING_TIME = 3;
const int SPACING = 7;
const int BUF_LENGTH = 80;

class building;

class elevator {
	private:
		builting *ptrBuilding;
		const int car_number;
		int current_floor;
		int old_floor;
		direction current_dir;
		bool destination[NUM_FLOOR];
		int loading_timer;
		int unloading_timer;
	public:
		elevator(building*, int);
		void car_tick1();
		void car_tick2();
		void car_display();
		void dests_display() const;
		void decide();
		void move();
		void get_destinations();
		int get_floor() const;
		direction get_direction() const;
};

class building {
	private:
		elevator* car_list[NUM_CARS];
		int num_cars;
		bool floor_request[2][NUM_FLOORS];
	public:
		building();
		~building();
		void master_tick();
		int get_cars_floor(const int) const;
		direction get_cars_dir(const int) const;
		bool get_floor_req(const int, const int) const;
		void set_floor_req(const int, const int, const bool);
		void record_floor_reqs();
		void show_floor_reqs() const;
};

