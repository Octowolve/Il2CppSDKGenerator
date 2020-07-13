#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetMaterialTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetMaterialTexture"));
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
	template <typename T = uintptr_t> T& namedTexture() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& texture() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetMaterialTexture*))(Il2CppBase() + 0x5029528))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetMaterialTexture*))(Il2CppBase() + 0x50295D8))(this);
	}
	template <typename T = void> T DoSetMaterialTexture() {
		return ((T (*)(SetMaterialTexture*))(Il2CppBase() + 0x50295F8))(this);
	}

};

}
