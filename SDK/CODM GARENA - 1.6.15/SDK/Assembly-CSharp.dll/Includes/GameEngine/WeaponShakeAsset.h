#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponShakeAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponShakeAsset"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ShakeModeData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MoveSideData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& JumpData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& TurnCameraOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TurnCameraPopup() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& TumCameraKickback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& MoveSidePopup() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& MoveSideKickback() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& JumpLandPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& JumpLandRot() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_Item(uintptr_t idx) {
		return ((T (*)(WeaponShakeAsset*, uintptr_t))(Il2CppBase() + 0x33A6180))(this, idx);
	}

};

}
