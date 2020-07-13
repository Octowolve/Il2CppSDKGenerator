#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class BoolAnyTrue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "BoolAnyTrue"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& boolVariables() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(BoolAnyTrue*))(Il2CppBase() + 0x4F34424))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(BoolAnyTrue*))(Il2CppBase() + 0x4F3443C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(BoolAnyTrue*))(Il2CppBase() + 0x4F34548))(this);
	}
	template <typename T = void> T DoAnyTrue() {
		return ((T (*)(BoolAnyTrue*))(Il2CppBase() + 0x4F34468))(this);
	}

};

}
