#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class IntSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "IntSwitch"));
	}

	template <typename T = uintptr_t> T& intVariable() {
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
		return ((T (*)(IntSwitch*))(Il2CppBase() + 0x4F09D5C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(IntSwitch*))(Il2CppBase() + 0x4F09E24))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(IntSwitch*))(Il2CppBase() + 0x4F09F5C))(this);
	}
	template <typename T = void> T DoIntSwitch() {
		return ((T (*)(IntSwitch*))(Il2CppBase() + 0x4F09E50))(this);
	}

};

}
