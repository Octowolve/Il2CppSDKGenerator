#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CookieCollectionComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "CookieCollectionComparer"));
	}


	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(CookieCollectionComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42BC358))(this, x, y);
	}

};

}
