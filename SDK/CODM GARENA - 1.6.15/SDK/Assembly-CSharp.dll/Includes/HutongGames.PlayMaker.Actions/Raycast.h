#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Raycast
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Raycast"));
	}

	template <typename T = uintptr_t> T& fromGameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fromPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& space() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& distance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& hitEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& storeDidHit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& storeHitObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& storeHitPoint() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& storeHitNormal() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& storeHitDistance() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& repeatInterval() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& layerMask() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& invertMask() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& debugColor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& debug() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& repeat() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Raycast*))(Il2CppBase() + 0x4D81FD0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Raycast*))(Il2CppBase() + 0x4D821A8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Raycast*))(Il2CppBase() + 0x4D82990))(this);
	}
	template <typename T = void> T DoRaycast() {
		return ((T (*)(Raycast*))(Il2CppBase() + 0x4D821F0))(this);
	}

};

}
