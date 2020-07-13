#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetLightColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetLightColor"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& lightColor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetLightColor*))(Il2CppBase() + 0x50270A0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetLightColor*))(Il2CppBase() + 0x50270F0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetLightColor*))(Il2CppBase() + 0x5027244))(this);
	}
	template <typename T = void> T DoSetLightColor() {
		return ((T (*)(SetLightColor*))(Il2CppBase() + 0x502711C))(this);
	}

};

}
