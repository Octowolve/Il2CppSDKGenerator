#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PostProcessEventComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PostProcessEventComparer"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T Equals(uintptr_t x, uintptr_t y) {
		return ((T (*)(PostProcessEventComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48002BC))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(PostProcessEventComparer*, uintptr_t))(Il2CppBase() + 0x480036C))(this, obj);
	}

};

}
