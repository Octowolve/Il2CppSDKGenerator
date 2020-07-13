#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatSwitch"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& lessThan() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatSwitch*))(Il2CppBase() + 0x5051494))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatSwitch*))(Il2CppBase() + 0x505155C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatSwitch*))(Il2CppBase() + 0x50516AC))(this);
	}
	template <typename T = void> T DoFloatSwitch() {
		return ((T (*)(FloatSwitch*))(Il2CppBase() + 0x5051588))(this);
	}

};

}
