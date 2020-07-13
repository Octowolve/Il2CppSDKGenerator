#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FullScreenHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FullScreenHelper"));
	}

	template <typename T = float> T& OriginWidth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& OriginHeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FullScreenHelper*))(Il2CppBase() + 0x3B65694))(this);
	}

};

}
