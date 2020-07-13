#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorldOriginShiftExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldOriginShiftExtension"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Unshift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Shift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector3> static T Unshift(Il2CppVector3 pos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0xC1C354))(0, pos);
	}
	template <typename T = Il2CppVector3> static T Shift(Il2CppVector3 pos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0xC1C628))(0, pos);
	}
	template <typename T = uintptr_t> static T Shift_1(uintptr_t bounds) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xC1C764))(0, bounds);
	}

};

}
