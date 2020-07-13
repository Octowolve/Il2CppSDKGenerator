#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlomoCallBackDuration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlomoCallBackDuration"));
	}

	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Invoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T Invoke() {
		return ((T (*)(SlomoCallBackDuration*))(Il2CppBase() + 0x3F1E008))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_Invoke() {
		return ((T (*)(SlomoCallBackDuration*))(Il2CppBase() + 0x3F1E0F0))(this);
	}

};

}
