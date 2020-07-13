#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetTextureScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetTextureScale"));
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
	template <typename T = uintptr_t> T& scaleX() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& scaleY() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetTextureScale*))(Il2CppBase() + 0x502D1EC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetTextureScale*))(Il2CppBase() + 0x502D2C0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetTextureScale*))(Il2CppBase() + 0x502D698))(this);
	}
	template <typename T = void> T DoSetTextureScale() {
		return ((T (*)(SetTextureScale*))(Il2CppBase() + 0x502D2EC))(this);
	}

};

}
