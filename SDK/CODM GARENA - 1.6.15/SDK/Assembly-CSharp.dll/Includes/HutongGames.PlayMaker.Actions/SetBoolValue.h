#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetBoolValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetBoolValue"));
	}

	template <typename T = uintptr_t> T& boolVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& boolValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetBoolValue*))(Il2CppBase() + 0x4FB5F24))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetBoolValue*))(Il2CppBase() + 0x4FB5F38))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetBoolValue*))(Il2CppBase() + 0x4FB5F9C))(this);
	}

};

}
