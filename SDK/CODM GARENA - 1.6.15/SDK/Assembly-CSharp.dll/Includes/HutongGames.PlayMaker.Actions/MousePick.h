#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class MousePick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "MousePick"));
	}

	template <typename T = uintptr_t> T& rayDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeDidPickObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeGameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storePoint() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeNormal() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& storeDistance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& layerMask() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& invertMask() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(MousePick*))(Il2CppBase() + 0x4D79CFC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(MousePick*))(Il2CppBase() + 0x4D79DD4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(MousePick*))(Il2CppBase() + 0x4D7A0EC))(this);
	}
	template <typename T = void> T DoMousePick() {
		return ((T (*)(MousePick*))(Il2CppBase() + 0x4D79E00))(this);
	}

};

}
