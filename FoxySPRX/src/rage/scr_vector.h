#pragma once

namespace rage {
	struct scrVector {
		scrVector() = default;
		scrVector(float x, float y, float z) : x(x), y(y), z(z) {}
		float x, y, z;
	};
}