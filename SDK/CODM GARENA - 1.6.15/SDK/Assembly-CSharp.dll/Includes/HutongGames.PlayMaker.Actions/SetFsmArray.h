#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetFsmArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetFsmArray"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& variableName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& setValue() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& copyValues() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetFsmArray*))(Il2CppBase() + 0x4FB74DC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetFsmArray*))(Il2CppBase() + 0x4FB75B8))(this);
	}
	template <typename T = void> T DoSetFsmArrayCopy() {
		return ((T (*)(SetFsmArray*))(Il2CppBase() + 0x4FB75D8))(this);
	}

};

}
