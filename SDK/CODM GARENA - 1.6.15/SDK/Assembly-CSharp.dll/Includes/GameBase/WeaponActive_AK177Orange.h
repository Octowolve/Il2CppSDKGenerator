#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponActiveAK177Orange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponActive_AK177Orange"));
	}

	template <typename T = float> T& mWatchTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& mWaitTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mCurWatchState() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponActiveAK177Orange*, float))(Il2CppBase() + 0x1C49508))(this, DeltaTime);
	}

};

}
