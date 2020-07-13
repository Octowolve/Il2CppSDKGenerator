#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ArrayAddRange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ArrayAddRange"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& variables() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ArrayAddRange*))(Il2CppBase() + 0x4F2FD9C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ArrayAddRange*))(Il2CppBase() + 0x4F2FE38))(this);
	}
	template <typename T = void> T DoAddRange() {
		return ((T (*)(ArrayAddRange*))(Il2CppBase() + 0x4F2FE58))(this);
	}

};

}
