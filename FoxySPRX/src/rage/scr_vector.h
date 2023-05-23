#pragma once

namespace rage {
	class scrVector {
	public:
		scrVector() : x(0.f), y(0.f), z(0.f) {}
		scrVector(float x, float y, float z) : x(x), y(y), z(z) {}
	public:
		alignas(8) float x, y, z;
	};
}