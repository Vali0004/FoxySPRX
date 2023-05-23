#include "features.h"

namespace features {
	void init() {

	}
	bool onceFlag{};
	void tick() {
		if (!onceFlag) {
			init();
			onceFlag = true;
		}
	}
}