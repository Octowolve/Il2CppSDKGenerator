#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Comparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Comparer"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Compare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(Comparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48053E8))(this, x, y);
	}

};

}
