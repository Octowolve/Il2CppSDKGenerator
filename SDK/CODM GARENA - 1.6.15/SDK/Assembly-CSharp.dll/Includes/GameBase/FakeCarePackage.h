#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FakeCarePackage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FakeCarePackage"));
	}

	template <typename T = bool> T& NeedHideDelay() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& HideDelay() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FakeCarePackage*))(Il2CppBase() + 0x31D38C4))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(FakeCarePackage*))(Il2CppBase() + 0x31D395C))(this);
	}

};

}
