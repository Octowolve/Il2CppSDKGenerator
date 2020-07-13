#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SafeAreaCircle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SafeArea_Circle"));
	}

	template <typename T = Il2CppVector3> T& InitPos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& InitRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppVector3> T get_InitPos() {
		return ((T (*)(SafeAreaCircle*))(Il2CppBase() + 0x3572EC8))(this);
	}
	template <typename T = void> T set_InitPos(Il2CppVector3 value) {
		return ((T (*)(SafeAreaCircle*, Il2CppVector3))(Il2CppBase() + 0x3572EDC))(this, value);
	}
	template <typename T = float> T get_InitRadius() {
		return ((T (*)(SafeAreaCircle*))(Il2CppBase() + 0x3572EE8))(this);
	}
	template <typename T = void> T set_InitRadius(float value) {
		return ((T (*)(SafeAreaCircle*, float))(Il2CppBase() + 0x3572EF0))(this, value);
	}
	template <typename T = void> T SetupInfo(Il2CppVector3 pos, float radius) {
		return ((T (*)(SafeAreaCircle*, Il2CppVector3, float))(Il2CppBase() + 0x3572EF8))(this, pos, radius);
	}
	template <typename T = float> T get_CurrentRadius() {
		return ((T (*)(SafeAreaCircle*))(Il2CppBase() + 0x3573010))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(SafeAreaCircle*))(Il2CppBase() + 0x3573018))(this);
	}

};

}
