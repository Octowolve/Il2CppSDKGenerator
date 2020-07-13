#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StringSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StringSwitch"));
	}

	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& compareTo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(StringSwitch*))(Il2CppBase() + 0x4F16A58))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StringSwitch*))(Il2CppBase() + 0x4F16B20))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StringSwitch*))(Il2CppBase() + 0x4F16CF8))(this);
	}
	template <typename T = void> T DoStringSwitch() {
		return ((T (*)(StringSwitch*))(Il2CppBase() + 0x4F16B4C))(this);
	}

};

}
