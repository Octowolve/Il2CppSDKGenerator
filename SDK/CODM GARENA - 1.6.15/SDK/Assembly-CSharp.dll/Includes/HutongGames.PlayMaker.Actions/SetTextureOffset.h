#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetTextureOffset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetTextureOffset"));
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
	template <typename T = uintptr_t> T& offsetX() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& offsetY() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetTextureOffset*))(Il2CppBase() + 0x502CCB8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetTextureOffset*))(Il2CppBase() + 0x502CD8C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetTextureOffset*))(Il2CppBase() + 0x502D164))(this);
	}
	template <typename T = void> T DoSetTextureOffset() {
		return ((T (*)(SetTextureOffset*))(Il2CppBase() + 0x502CDB8))(this);
	}

};

}
