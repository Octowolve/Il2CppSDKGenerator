#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class TdrDate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "TdrDate"));
	}

	template <typename T = int16_t> T& nYear() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& bMon() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = unsigned char> T& bDay() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_parse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_toDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T parse(uint32_t date) {
		return ((T (*)(TdrDate*, uint32_t))(Il2CppBase() + 0x44494A4))(this, date);
	}
	template <typename T = bool> T isValid() {
		return ((T (*)(TdrDate*))(Il2CppBase() + 0x4449574))(this);
	}
	template <typename T = void> T toDate(uintptr_t* date) {
		return ((T (*)(TdrDate*, uintptr_t*))(Il2CppBase() + 0x4449738))(this, date);
	}

};

}
