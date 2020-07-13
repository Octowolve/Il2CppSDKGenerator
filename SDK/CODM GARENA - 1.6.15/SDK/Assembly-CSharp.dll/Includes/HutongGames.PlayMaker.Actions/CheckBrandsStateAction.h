#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CheckBrandsStateAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CheckBrandsStateAction"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& brands() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& brandState() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& targetHitTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& FinishEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(CheckBrandsStateAction*))(Il2CppBase() + 0x4F3A280))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(CheckBrandsStateAction*))(Il2CppBase() + 0x4F3A288))(this);
	}

};

}
