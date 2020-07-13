#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StringCompare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StringCompare"));
	}

	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& compareTo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& equalEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& notEqualEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(StringCompare*))(Il2CppBase() + 0x4F15FC0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StringCompare*))(Il2CppBase() + 0x4F1609C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StringCompare*))(Il2CppBase() + 0x4F16234))(this);
	}
	template <typename T = void> T DoStringCompare() {
		return ((T (*)(StringCompare*))(Il2CppBase() + 0x4F160C8))(this);
	}

};

}
