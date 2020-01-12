#include "elev.h"

int main(int argc, char** argv) {
	building theBuilding;
	while(true) {
		theBuilding.master_tick();
		wait(1000);
		theBuilding.record_floor_reqs();
	}

	return 0;
}

