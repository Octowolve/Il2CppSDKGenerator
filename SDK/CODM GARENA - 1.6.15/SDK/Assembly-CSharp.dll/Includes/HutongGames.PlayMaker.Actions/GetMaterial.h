#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetMaterial"));
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
	template <typename T = bool> T& getSharedMaterial() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetMaterial*))(Il2CppBase() + 0x508E34C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetMaterial*))(Il2CppBase() + 0x508E380))(this);
	}
	template <typename T = void> T DoGetMaterial() {
		return ((T (*)(GetMaterial*))(Il2CppBase() + 0x508E3A0))(this);
	}

};

}
