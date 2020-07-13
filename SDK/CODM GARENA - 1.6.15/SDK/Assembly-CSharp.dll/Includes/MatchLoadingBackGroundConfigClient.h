#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MatchLoadingBackGroundConfigClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MatchLoadingBackGroundConfigClient"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetData(uintptr_t pData) {
		return ((T (*)(MatchLoadingBackGroundConfigClient*, uintptr_t))(Il2CppBase() + 0x41C7714))(this, pData);
	}
	template <typename T = void> T LogData() {
		return ((T (*)(MatchLoadingBackGroundConfigClient*))(Il2CppBase() + 0x41C77BC))(this);
	}

};

}
