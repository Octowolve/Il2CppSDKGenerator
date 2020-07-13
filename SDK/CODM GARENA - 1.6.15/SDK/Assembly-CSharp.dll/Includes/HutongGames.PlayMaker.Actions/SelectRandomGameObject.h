#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SelectRandomGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SelectRandomGameObject"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& gameObjects() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weights() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeGameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SelectRandomGameObject*))(Il2CppBase() + 0x4FADEC4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SelectRandomGameObject*))(Il2CppBase() + 0x4FAE09C))(this);
	}
	template <typename T = void> T DoSelectRandomGameObject() {
		return ((T (*)(SelectRandomGameObject*))(Il2CppBase() + 0x4FAE0BC))(this);
	}

};

}
