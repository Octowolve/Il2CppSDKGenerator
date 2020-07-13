#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class ZMGameEndHUDAchievementItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "ZMGameEndHUDAchievementItem"));
	}

	template <typename T = uintptr_t> T& Star() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Words() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowStar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetWords(Il2CppString* text) {
		return ((T (*)(ZMGameEndHUDAchievementItem*, Il2CppString*))(Il2CppBase() + 0x4068738))(this, text);
	}
	template <typename T = void> T SetStar(bool showStar, float delay) {
		return ((T (*)(ZMGameEndHUDAchievementItem*, bool, float))(Il2CppBase() + 0x4068800))(this, showStar, delay);
	}
	template <typename T = uintptr_t> T ShowStar(float delay) {
		return ((T (*)(ZMGameEndHUDAchievementItem*, float))(Il2CppBase() + 0x406890C))(this, delay);
	}

};

}
