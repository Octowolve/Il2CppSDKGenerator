#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateLodJob
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateLodJob"));
	}

	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Execute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Execute() {
		return ((T (*)(UpdateLodJob*))(Il2CppBase() + 0x2491C8C))(this);
	}

};

}
