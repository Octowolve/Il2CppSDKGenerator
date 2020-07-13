#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayContains
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayContains"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& index() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& isContained() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& isContainedEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& isNotContainedEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayContains*))(Il2CppBase() + 0x4F302A8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayContains*))(Il2CppBase() + 0x4F302C4))(this);
	}
	template <typename T = void> T DoCheckContainsValue() {
		return ((T (*)(ArrayContains*))(Il2CppBase() + 0x4F302E4))(this);
	}

};

}
