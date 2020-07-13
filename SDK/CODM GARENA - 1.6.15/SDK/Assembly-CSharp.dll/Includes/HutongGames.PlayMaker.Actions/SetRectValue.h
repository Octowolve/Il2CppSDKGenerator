#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetRectValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetRectValue"));
	}

	template <typename T = uintptr_t> T& rectVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& rectValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetRectValue*))(Il2CppBase() + 0x502B564))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetRectValue*))(Il2CppBase() + 0x502B578))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetRectValue*))(Il2CppBase() + 0x502B5F4))(this);
	}

};

}
