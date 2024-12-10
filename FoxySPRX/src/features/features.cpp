#include "features.h"

namespace features {
	void init() {
		//Place code you only want ran once here
	}
	bool onceFlag{};
	void tick() {
		if (!onceFlag) {
			init();
			onceFlag = true;
		}
		//Place code that you ran every tick here
	}
}