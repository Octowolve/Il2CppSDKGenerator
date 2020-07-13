#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAllFsmGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAllFsmGameObject"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAllFsmGameObject*))(Il2CppBase() + 0x4FB0C80))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAllFsmGameObject*))(Il2CppBase() + 0x4FB0C84))(this);
	}
	template <typename T = void> T DoSetFsmGameObject() {
		return ((T (*)(SetAllFsmGameObject*))(Il2CppBase() + 0x4FB0C98))(this);
	}

};

}
