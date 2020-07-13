#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetMaterialTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetMaterialTexture"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& materialIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& namedTexture() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& storedTexture() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& getFromSharedMaterial() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetMaterialTexture*))(Il2CppBase() + 0x508E7F0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetMaterialTexture*))(Il2CppBase() + 0x508E8A0))(this);
	}
	template <typename T = void> T DoGetMaterialTexture() {
		return ((T (*)(GetMaterialTexture*))(Il2CppBase() + 0x508E8C0))(this);
	}

};

}
