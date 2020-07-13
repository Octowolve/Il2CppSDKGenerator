#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetLightRange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetLightRange"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& lightRange() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetLightRange*))(Il2CppBase() + 0x5027B60))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetLightRange*))(Il2CppBase() + 0x5027B94))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetLightRange*))(Il2CppBase() + 0x5027CD0))(this);
	}
	template <typename T = void> T DoSetLightRange() {
		return ((T (*)(SetLightRange*))(Il2CppBase() + 0x5027BC0))(this);
	}

};

}
