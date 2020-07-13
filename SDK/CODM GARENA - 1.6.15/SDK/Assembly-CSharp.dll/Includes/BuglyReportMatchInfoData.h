#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuglyReportMatchInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuglyReportMatchInfoData"));
	}

	template <typename T = uint64_t> T& roleId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& weapon_itemid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& weapon_actorid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& inVehicle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& vehicalType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& UltID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> static T& key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T ToBuglyString() {
		return ((T (*)(BuglyReportMatchInfoData*))(Il2CppBase() + 0x3C47B08))(this);
	}
	template <typename T = void> T ClearData() {
		return ((T (*)(BuglyReportMatchInfoData*))(Il2CppBase() + 0x3C47AE8))(this);
	}

};

}
