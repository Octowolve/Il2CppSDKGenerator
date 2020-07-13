#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SnapIsEnabledOverride
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SnapIsEnabledOverride"));
	}

	template <typename T = bool> T& m_SnapIsEnabled() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T IsEnabled() {
		return ((T (*)(SnapIsEnabledOverride*))(Il2CppBase() + 0x4814EC0))(this);
	}

};

}
