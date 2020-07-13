#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayReverse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayReverse"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayReverse*))(Il2CppBase() + 0x4F31238))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayReverse*))(Il2CppBase() + 0x4F31244))(this);
	}

};

}
