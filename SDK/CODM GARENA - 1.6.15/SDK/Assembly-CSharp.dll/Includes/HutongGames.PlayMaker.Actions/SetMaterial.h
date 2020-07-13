#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetMaterial"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& materialIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetMaterial*))(Il2CppBase() + 0x5028684))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetMaterial*))(Il2CppBase() + 0x50286B4))(this);
	}
	template <typename T = void> T DoSetMaterial() {
		return ((T (*)(SetMaterial*))(Il2CppBase() + 0x50286D4))(this);
	}

};

}
