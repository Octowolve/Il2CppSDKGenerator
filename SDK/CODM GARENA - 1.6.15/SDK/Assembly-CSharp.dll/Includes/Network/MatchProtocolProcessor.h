#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class MatchProtocolProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "MatchProtocolProcessor"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& m_ProcessFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_GetSizeFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& CombinedPkgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& f__mg$cache10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache11() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& f__mg$cache12() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& f__mg$cache13() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& f__mg$cache14() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache15() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& f__mg$cache16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& f__mg$cache17() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& f__mg$cache18() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache19() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& f__mg$cache20() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache21() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& f__mg$cache22() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& f__mg$cache23() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& f__mg$cache24() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache25() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache26() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache27() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache28() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache29() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache30() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache31() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache33() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache34() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache35() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache36() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache37() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache38() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache39() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& f__mg$cache40() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache41() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& f__mg$cache42() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& f__mg$cache43() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& f__mg$cache44() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache45() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& f__mg$cache46() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& f__mg$cache47() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& f__mg$cache48() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache49() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& f__mg$cache50() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache51() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& f__mg$cache52() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& f__mg$cache53() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& f__mg$cache54() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache55() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& f__mg$cache56() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& f__mg$cache57() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& f__mg$cache58() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache59() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& f__mg$cache60() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache61() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& f__mg$cache62() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& f__mg$cache63() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& f__mg$cache64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache65() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache66() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache67() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache68() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache69() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache70() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache71() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache72() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache73() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache74() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache75() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache76() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache77() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache78() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache79() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& f__mg$cache80() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache81() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& f__mg$cache82() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& f__mg$cache83() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& f__mg$cache84() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache85() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& f__mg$cache86() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& f__mg$cache87() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& f__mg$cache88() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache89() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& f__mg$cache90() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache91() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& f__mg$cache92() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& f__mg$cache93() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& f__mg$cache94() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache95() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& f__mg$cache96() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& f__mg$cache97() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& f__mg$cache98() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache99() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x27C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x29C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2AC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheAA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheAB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheAC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2BC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheAD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheAE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheAF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2CC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2DC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2EC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheBA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheBB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheBC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2FC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheBD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheBE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x304);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheBF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x314);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x31C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x324);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheCA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x334);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheCB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheCC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x33C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheCE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x344);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheCF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x354);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x35C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x364);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x36C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheD9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheDA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x374);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheDB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheDC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x37C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheDD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheDE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x384);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheDF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x394);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x39C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3AC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheE9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheEA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheEB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheEC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3BC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheEE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheEF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3CC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3DC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3EC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheF9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheFA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F4);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheFB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheFC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3FC);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheFD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheFE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x404);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = uintptr_t> static T& f__mg$cache100() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache101() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = uintptr_t> static T& f__mg$cache102() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x414);
	}
	template <typename T = uintptr_t> static T& f__mg$cache103() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = uintptr_t> static T& f__mg$cache104() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x41C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache105() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = uintptr_t> static T& f__mg$cache106() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x424);
	}
	template <typename T = uintptr_t> static T& f__mg$cache107() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = uintptr_t> static T& f__mg$cache108() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x42C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache109() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = uintptr_t> static T& f__mg$cache10A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x434);
	}
	template <typename T = uintptr_t> static T& f__mg$cache10B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = uintptr_t> static T& f__mg$cache10C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x43C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache10D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = uintptr_t> static T& f__mg$cache10E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x444);
	}
	template <typename T = uintptr_t> static T& f__mg$cache10F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = uintptr_t> static T& f__mg$cache110() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache111() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = uintptr_t> static T& f__mg$cache112() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x454);
	}
	template <typename T = uintptr_t> static T& f__mg$cache113() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = uintptr_t> static T& f__mg$cache114() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x45C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache115() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = uintptr_t> static T& f__mg$cache116() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x464);
	}
	template <typename T = uintptr_t> static T& f__mg$cache117() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = uintptr_t> static T& f__mg$cache118() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x46C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache119() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = uintptr_t> static T& f__mg$cache11A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x474);
	}
	template <typename T = uintptr_t> static T& f__mg$cache11B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = uintptr_t> static T& f__mg$cache11C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x47C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache11D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = uintptr_t> static T& f__mg$cache11E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x484);
	}
	template <typename T = uintptr_t> static T& f__mg$cache11F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = uintptr_t> static T& f__mg$cache120() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache121() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = uintptr_t> static T& f__mg$cache122() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x494);
	}
	template <typename T = uintptr_t> static T& f__mg$cache123() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = uintptr_t> static T& f__mg$cache124() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x49C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache125() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache126() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache127() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache128() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4AC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache129() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache12A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache12B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache12C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4BC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache12D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache12E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache12F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache130() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4CC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache131() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache132() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache133() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache134() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4DC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache135() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache136() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache137() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache138() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4EC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache139() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache13A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache13B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache13C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4FC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache13D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	template <typename T = uintptr_t> static T& f__mg$cache13E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x504);
	}
	template <typename T = uintptr_t> static T& f__mg$cache13F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	template <typename T = uintptr_t> static T& f__mg$cache140() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache141() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	template <typename T = uintptr_t> static T& f__mg$cache142() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x514);
	}
	template <typename T = uintptr_t> static T& f__mg$cache143() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	template <typename T = uintptr_t> static T& f__mg$cache144() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x51C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache145() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	template <typename T = uintptr_t> static T& f__mg$cache146() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x524);
	}
	template <typename T = uintptr_t> static T& f__mg$cache147() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	template <typename T = uintptr_t> static T& f__mg$cache148() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x52C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache149() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	template <typename T = uintptr_t> static T& f__mg$cache14A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x534);
	}
	template <typename T = uintptr_t> static T& f__mg$cache14B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	template <typename T = uintptr_t> static T& f__mg$cache14C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x53C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache14D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	template <typename T = uintptr_t> static T& f__mg$cache14E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x544);
	}
	template <typename T = uintptr_t> static T& f__mg$cache14F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	template <typename T = uintptr_t> static T& f__mg$cache150() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache151() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	template <typename T = uintptr_t> static T& f__mg$cache152() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x554);
	}
	template <typename T = uintptr_t> static T& f__mg$cache153() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	template <typename T = uintptr_t> static T& f__mg$cache154() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x55C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache155() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	template <typename T = uintptr_t> static T& f__mg$cache156() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x564);
	}
	template <typename T = uintptr_t> static T& f__mg$cache157() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	template <typename T = uintptr_t> static T& f__mg$cache158() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x56C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache159() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	template <typename T = uintptr_t> static T& f__mg$cache15A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x574);
	}
	template <typename T = uintptr_t> static T& f__mg$cache15B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	template <typename T = uintptr_t> static T& f__mg$cache15C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x57C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache15D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	template <typename T = uintptr_t> static T& f__mg$cache15E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x584);
	}
	template <typename T = uintptr_t> static T& f__mg$cache15F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	template <typename T = uintptr_t> static T& f__mg$cache160() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache161() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	template <typename T = uintptr_t> static T& f__mg$cache162() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x594);
	}
	template <typename T = uintptr_t> static T& f__mg$cache163() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	template <typename T = uintptr_t> static T& f__mg$cache164() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x59C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache165() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache166() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache167() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache168() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5AC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache169() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache16A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache16B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache16C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5BC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache16D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache16E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache16F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache170() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5CC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache171() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache172() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache173() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache174() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5DC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache175() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache176() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache177() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache178() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5EC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache179() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache17A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache17B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache17C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5FC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache17D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	template <typename T = uintptr_t> static T& f__mg$cache17E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x604);
	}
	template <typename T = uintptr_t> static T& f__mg$cache17F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	template <typename T = uintptr_t> static T& f__mg$cache180() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache181() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	template <typename T = uintptr_t> static T& f__mg$cache182() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x614);
	}
	template <typename T = uintptr_t> static T& f__mg$cache183() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	template <typename T = uintptr_t> static T& f__mg$cache184() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x61C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache185() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	template <typename T = uintptr_t> static T& f__mg$cache186() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x624);
	}
	template <typename T = uintptr_t> static T& f__mg$cache187() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	template <typename T = uintptr_t> static T& f__mg$cache188() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x62C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache189() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	template <typename T = uintptr_t> static T& f__mg$cache18A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x634);
	}
	template <typename T = uintptr_t> static T& f__mg$cache18B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	template <typename T = uintptr_t> static T& f__mg$cache18C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x63C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache18D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	template <typename T = uintptr_t> static T& f__mg$cache18E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x644);
	}
	template <typename T = uintptr_t> static T& f__mg$cache18F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	template <typename T = uintptr_t> static T& f__mg$cache190() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache191() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	template <typename T = uintptr_t> static T& f__mg$cache192() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x654);
	}
	template <typename T = uintptr_t> static T& f__mg$cache193() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	template <typename T = uintptr_t> static T& f__mg$cache194() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x65C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache195() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	template <typename T = uintptr_t> static T& f__mg$cache196() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x664);
	}
	template <typename T = uintptr_t> static T& f__mg$cache197() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	template <typename T = uintptr_t> static T& f__mg$cache198() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x66C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache199() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	template <typename T = uintptr_t> static T& f__mg$cache19A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x674);
	}
	template <typename T = uintptr_t> static T& f__mg$cache19B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	template <typename T = uintptr_t> static T& f__mg$cache19C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x67C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache19D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	template <typename T = uintptr_t> static T& f__mg$cache19E() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x684);
	}
	template <typename T = uintptr_t> static T& f__mg$cache19F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterBuildMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterGetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x694);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitProtocolFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGetSizeFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x69C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProtocolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPacket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessCombinedPkgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}

	template <typename T = void> static T RegisterBuildMsg() {
		return ((T (*)(void *))(Il2CppBase() + 0x4831B98))(0);
	}
	template <typename T = void> static T RegisterGetSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x483FE28))(0);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x4829000))(0);
	}
	template <typename T = void> static T InitProtocolFunc() {
		return ((T (*)(void *))(Il2CppBase() + 0x4850290))(0);
	}
	template <typename T = void> static T InitGetSizeFunc() {
		return ((T (*)(void *))(Il2CppBase() + 0x485254C))(0);
	}
	template <typename T = int32_t> static T GetProtocolSize(int32_t protocolCmd, Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4831048))(0, protocolCmd, data, DataIndex);
	}
	template <typename T = int32_t> static T ProcessPacket(Il2CppArray<uintptr_t>* packData, int32_t PackDataIndex, int32_t PackDataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4829D7C))(0, packData, PackDataIndex, PackDataCount, Sequence);
	}
	template <typename T = int32_t> static T ProcessCombinedPkgs(Il2CppArray<uintptr_t>* data, int32_t DataIndex, int32_t DataCount, int32_t Sequence) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4852A6C))(0, data, DataIndex, DataCount, Sequence);
	}

};

}
