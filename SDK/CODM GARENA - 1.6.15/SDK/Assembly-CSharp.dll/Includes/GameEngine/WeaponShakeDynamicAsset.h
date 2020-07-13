#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponShakeDynamicAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponShakeDynamicAsset"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ShakeModeData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TurnCameraOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TurnCameraPopup() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& TumCameraKickback() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Item(uintptr_t idx) {
		return ((T (*)(WeaponShakeDynamicAsset*, uintptr_t))(Il2CppBase() + 0x33AD458))(this, idx);
	}

};

}
