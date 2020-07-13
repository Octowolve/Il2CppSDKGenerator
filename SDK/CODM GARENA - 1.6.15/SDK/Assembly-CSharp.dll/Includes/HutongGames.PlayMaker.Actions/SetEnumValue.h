#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetEnumValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetEnumValue"));
	}

	template <typename T = uintptr_t> T& enumVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& enumValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetEnumValue*))(Il2CppBase() + 0x4FB68FC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetEnumValue*))(Il2CppBase() + 0x4FB6910))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetEnumValue*))(Il2CppBase() + 0x4FB6988))(this);
	}
	template <typename T = void> T DoSetEnumValue() {
		return ((T (*)(SetEnumValue*))(Il2CppBase() + 0x4FB693C))(this);
	}

};

}
