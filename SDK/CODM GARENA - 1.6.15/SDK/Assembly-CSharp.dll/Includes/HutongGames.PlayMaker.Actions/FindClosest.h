#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FindClosest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FindClosest"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& withTag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ignoreOwner() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mustBeVisible() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& storeDistance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FindClosest*))(Il2CppBase() + 0x504E6A8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FindClosest*))(Il2CppBase() + 0x504E770))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FindClosest*))(Il2CppBase() + 0x504EDD0))(this);
	}
	template <typename T = void> T DoFindClosest() {
		return ((T (*)(FindClosest*))(Il2CppBase() + 0x504E79C))(this);
	}

};

}
