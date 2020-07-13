#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ShowBrandAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ShowBrandAction"));
	}

	template <typename T = uintptr_t> T& brandVolume() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& brand() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& Alive() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& ShowSignboard() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& Relife() {
		return *(T*)((uintptr_t)this + 0x32);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ShowBrandAction*))(Il2CppBase() + 0x502E6C0))(this);
	}
	template <typename T = void> T DoActivate() {
		return ((T (*)(ShowBrandAction*))(Il2CppBase() + 0x502E6C4))(this);
	}

};

}
