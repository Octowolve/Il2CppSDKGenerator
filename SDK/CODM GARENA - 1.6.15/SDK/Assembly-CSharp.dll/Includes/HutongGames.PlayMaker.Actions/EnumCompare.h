#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EnumCompare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EnumCompare"));
	}

	template <typename T = uintptr_t> T& enumVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& compareTo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& equalEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& notEqualEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EnumCompare*))(Il2CppBase() + 0x4FCC860))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EnumCompare*))(Il2CppBase() + 0x4FCC87C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(EnumCompare*))(Il2CppBase() + 0x4FCC988))(this);
	}
	template <typename T = void> T DoEnumCompare() {
		return ((T (*)(EnumCompare*))(Il2CppBase() + 0x4FCC8A8))(this);
	}

};

}
