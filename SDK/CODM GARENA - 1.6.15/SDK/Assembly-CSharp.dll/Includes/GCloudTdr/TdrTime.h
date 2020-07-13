#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class TdrTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "TdrTime"));
	}

	template <typename T = int16_t> T& nHour() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& bMin() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = unsigned char> T& bSec() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_toTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T parse(uint32_t time) {
		return ((T (*)(TdrTime*, uint32_t))(Il2CppBase() + 0x4449C40))(this, time);
	}
	template <typename T = bool> T isValid() {
		return ((T (*)(TdrTime*))(Il2CppBase() + 0x4449FA8))(this);
	}
	template <typename T = void> T toTime(uintptr_t* time) {
		return ((T (*)(TdrTime*, uintptr_t*))(Il2CppBase() + 0x4449E14))(this, time);
	}

};

}
