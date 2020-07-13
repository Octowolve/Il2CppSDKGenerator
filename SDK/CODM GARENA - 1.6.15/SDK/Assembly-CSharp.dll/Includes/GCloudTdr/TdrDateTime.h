#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class TdrDateTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "TdrDateTime"));
	}

	template <typename T = uintptr_t> T& tdrDate() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& tdrTime() {
		return *(T*)((uintptr_t)this + 0xC);
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
	template <typename T = uintptr_t> static T& __Hotfix0_toDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T parse(uint64_t datetime) {
		return ((T (*)(TdrDateTime*, uint64_t))(Il2CppBase() + 0x4449B44))(this, datetime);
	}
	template <typename T = void> T toDateTime(uintptr_t* datetime) {
		return ((T (*)(TdrDateTime*, uintptr_t*))(Il2CppBase() + 0x4449D10))(this, datetime);
	}
	template <typename T = bool> T isValid() {
		return ((T (*)(TdrDateTime*))(Il2CppBase() + 0x4449ED0))(this);
	}

};

}
