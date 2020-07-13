#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StringContains
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StringContains"));
	}

	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& containsString() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& trueEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& falseEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(StringContains*))(Il2CppBase() + 0x4F16240))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StringContains*))(Il2CppBase() + 0x4F1631C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StringContains*))(Il2CppBase() + 0x4F1645C))(this);
	}
	template <typename T = void> T DoStringContains() {
		return ((T (*)(StringContains*))(Il2CppBase() + 0x4F16348))(this);
	}

};

}
