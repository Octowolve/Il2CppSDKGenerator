#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponShakeRecoilAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponShakeRecoilAsset"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& RecoilData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& RecoilOnce() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RecoilLoop() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Item(uintptr_t idx) {
		return ((T (*)(WeaponShakeRecoilAsset*, uintptr_t))(Il2CppBase() + 0x33AD578))(this, idx);
	}

};

}
