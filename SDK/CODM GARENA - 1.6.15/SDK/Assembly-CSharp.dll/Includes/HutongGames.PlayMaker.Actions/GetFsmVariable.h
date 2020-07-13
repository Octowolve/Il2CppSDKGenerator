#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetFsmVariable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetFsmVariable"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& cachedGO() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& sourceFsm() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& sourceVariable() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& targetVariable() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetFsmVariable*))(Il2CppBase() + 0x508C734))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetFsmVariable*))(Il2CppBase() + 0x508C830))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetFsmVariable*))(Il2CppBase() + 0x508CBBC))(this);
	}
	template <typename T = void> T InitFsmVar() {
		return ((T (*)(GetFsmVariable*))(Il2CppBase() + 0x508C864))(this);
	}
	template <typename T = void> T DoGetFsmVariable() {
		return ((T (*)(GetFsmVariable*))(Il2CppBase() + 0x508CB4C))(this);
	}

};

}
