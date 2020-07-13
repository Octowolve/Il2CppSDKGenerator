#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetIntFromFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetIntFromFloat"));
	}

	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& floatValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetIntFromFloat*))(Il2CppBase() + 0x5026938))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetIntFromFloat*))(Il2CppBase() + 0x502694C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetIntFromFloat*))(Il2CppBase() + 0x50269B8))(this);
	}

};

}
