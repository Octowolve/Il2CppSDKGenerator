#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DblClickSnapping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "DblClickSnapping"));
	}

	template <typename T = unsigned char> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& WORDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& PARAGRAPHS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
