#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PendingLoadItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PendingLoadItem"));
	}

	template <typename T = int32_t> T& row() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& col() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& patch() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
