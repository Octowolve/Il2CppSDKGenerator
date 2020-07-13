#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetIntValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetIntValue"));
	}

	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& intValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetIntValue*))(Il2CppBase() + 0x5026A14))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetIntValue*))(Il2CppBase() + 0x5026A28))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetIntValue*))(Il2CppBase() + 0x5026A8C))(this);
	}

};

}
