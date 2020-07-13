#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua.Cast {

class Any1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua.Cast", "Any`1"));
	}

	template <typename T = uintptr_t> T& mTarget() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(Any1*))(Il2CppBase() + 0x518F3E0))(this);
	}

};

}
