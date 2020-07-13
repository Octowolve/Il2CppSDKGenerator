#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EnumSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EnumSwitch"));
	}

	template <typename T = uintptr_t> T& enumVariable() {
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
		return ((T (*)(EnumSwitch*))(Il2CppBase() + 0x4FCC994))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EnumSwitch*))(Il2CppBase() + 0x4FCCA5C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(EnumSwitch*))(Il2CppBase() + 0x4FCCBA8))(this);
	}
	template <typename T = void> T DoEnumSwitch() {
		return ((T (*)(EnumSwitch*))(Il2CppBase() + 0x4FCCA88))(this);
	}

};

}
