#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetShadowStrength
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetShadowStrength"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& shadowStrength() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetShadowStrength*))(Il2CppBase() + 0x502BF8C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetShadowStrength*))(Il2CppBase() + 0x502BFC0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetShadowStrength*))(Il2CppBase() + 0x502C0FC))(this);
	}
	template <typename T = void> T DoSetShadowStrength() {
		return ((T (*)(SetShadowStrength*))(Il2CppBase() + 0x502BFEC))(this);
	}

};

}
