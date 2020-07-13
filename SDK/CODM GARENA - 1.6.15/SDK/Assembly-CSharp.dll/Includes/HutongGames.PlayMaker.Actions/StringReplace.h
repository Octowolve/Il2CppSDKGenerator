#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StringReplace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StringReplace"));
	}

	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& replace() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& with() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(StringReplace*))(Il2CppBase() + 0x4F165B0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StringReplace*))(Il2CppBase() + 0x4F166B0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StringReplace*))(Il2CppBase() + 0x4F16774))(this);
	}
	template <typename T = void> T DoReplace() {
		return ((T (*)(StringReplace*))(Il2CppBase() + 0x4F166DC))(this);
	}

};

}
