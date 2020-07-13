#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArraySet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArraySet"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& index() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& indexOutOfRange() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArraySet*))(Il2CppBase() + 0x4F3137C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArraySet*))(Il2CppBase() + 0x4F31398))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ArraySet*))(Il2CppBase() + 0x4F314D0))(this);
	}
	template <typename T = void> T DoGetValue() {
		return ((T (*)(ArraySet*))(Il2CppBase() + 0x4F313C4))(this);
	}

};

}
