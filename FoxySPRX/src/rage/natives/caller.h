#pragma once
#include "rage/natives/invoker/invoker.h"

template <typename ret>
ret invoke(rage::scrNativeHash hash) {
	g_invoker.begin();
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1>
ret invoke(rage::scrNativeHash hash, P1 p0) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.push(p16);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.push(p16);
	g_invoker.push(p17);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.push(p16);
	g_invoker.push(p17);
	g_invoker.push(p18);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.push(p16);
	g_invoker.push(p17);
	g_invoker.push(p18);
	g_invoker.push(p19);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.push(p16);
	g_invoker.push(p17);
	g_invoker.push(p18);
	g_invoker.push(p19);
	g_invoker.push(p20);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21, typename P22>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20, P22 p21) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.push(p16);
	g_invoker.push(p17);
	g_invoker.push(p18);
	g_invoker.push(p19);
	g_invoker.push(p20);
	g_invoker.push(p21);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21, typename P22, typename P23>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20, P22 p21, P23 p22) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.push(p16);
	g_invoker.push(p17);
	g_invoker.push(p18);
	g_invoker.push(p19);
	g_invoker.push(p20);
	g_invoker.push(p21);
	g_invoker.push(p22);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21, typename P22, typename P23, typename P24>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20, P22 p21, P23 p22, P24 p23) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.push(p16);
	g_invoker.push(p17);
	g_invoker.push(p18);
	g_invoker.push(p19);
	g_invoker.push(p20);
	g_invoker.push(p21);
	g_invoker.push(p22);
	g_invoker.push(p23);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21, typename P22, typename P23, typename P24, typename P25>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20, P22 p21, P23 p22, P24 p23, P25 p24) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.push(p16);
	g_invoker.push(p17);
	g_invoker.push(p18);
	g_invoker.push(p19);
	g_invoker.push(p20);
	g_invoker.push(p21);
	g_invoker.push(p22);
	g_invoker.push(p23);
	g_invoker.push(p24);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}
template <typename ret, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7, typename P8, typename P9, typename P10, typename P11, typename P12, typename P13, typename P14, typename P15, typename P16, typename P17, typename P18, typename P19, typename P20, typename P21, typename P22, typename P23, typename P24, typename P25, typename P26>
ret invoke(rage::scrNativeHash hash, P1 p0, P2 p1, P3 p2, P4 p3, P5 p4, P6 p5, P7 p6, P8 p7, P9 p8, P10 p9, P11 p10, P12 p11, P13 p12, P14 p13, P15 p14, P16 p15, P17 p16, P18 p17, P19 p18, P20 p19, P21 p20, P22 p21, P23 p22, P24 p23, P25 p24, P26 p25) {
	g_invoker.begin();
	g_invoker.push(p0);
	g_invoker.push(p1);
	g_invoker.push(p2);
	g_invoker.push(p3);
	g_invoker.push(p4);
	g_invoker.push(p5);
	g_invoker.push(p6);
	g_invoker.push(p7);
	g_invoker.push(p8);
	g_invoker.push(p9);
	g_invoker.push(p10);
	g_invoker.push(p11);
	g_invoker.push(p12);
	g_invoker.push(p13);
	g_invoker.push(p14);
	g_invoker.push(p15);
	g_invoker.push(p16);
	g_invoker.push(p17);
	g_invoker.push(p18);
	g_invoker.push(p19);
	g_invoker.push(p20);
	g_invoker.push(p21);
	g_invoker.push(p22);
	g_invoker.push(p23);
	g_invoker.push(p24);
	g_invoker.push(p25);
	g_invoker.end(hash);
	return g_invoker.getRet<ret>();
}