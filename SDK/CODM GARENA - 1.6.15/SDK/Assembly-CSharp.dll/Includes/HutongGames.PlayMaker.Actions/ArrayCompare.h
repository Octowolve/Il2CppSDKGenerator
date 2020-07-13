#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayCompare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayCompare"));
	}

	template <typename T = uintptr_t> T& array1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& array2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SequenceEqual() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SequenceNotEqual() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayCompare*))(Il2CppBase() + 0x4F30100))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayCompare*))(Il2CppBase() + 0x4F30110))(this);
	}
	template <typename T = void> T DoSequenceEqual() {
		return ((T (*)(ArrayCompare*))(Il2CppBase() + 0x4F3013C))(this);
	}

};

}
