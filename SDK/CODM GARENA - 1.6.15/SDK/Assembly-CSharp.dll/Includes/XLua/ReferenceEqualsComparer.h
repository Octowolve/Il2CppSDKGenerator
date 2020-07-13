#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class ReferenceEqualsComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "ReferenceEqualsComparer"));
	}


	template <typename T = bool> T Equals(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(ReferenceEqualsComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF5B284))(this, o1, o2);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(ReferenceEqualsComparer*, uintptr_t))(Il2CppBase() + 0xF5B290))(this, obj);
	}

};

}
