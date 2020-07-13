#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextureParameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextureParameter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Interp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Interp(uintptr_t from, uintptr_t to, float t) {
		return ((T (*)(TextureParameter*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x4658C1C))(this, from, to, t);
	}

};

}
