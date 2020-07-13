#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LetterProperties
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LetterProperties"));
	}

	template <typename T = float> T& start() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& offset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
