#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Tips
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Tips"));
	}

	template <typename T = Il2CppString*> T& content() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& visibleTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
