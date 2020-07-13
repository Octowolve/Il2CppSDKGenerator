#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimestampedRenderTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimestampedRenderTexture"));
	}

	template <typename T = uintptr_t> T& texture() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& timestamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& used() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
