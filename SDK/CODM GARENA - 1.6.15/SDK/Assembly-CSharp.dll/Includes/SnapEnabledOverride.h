#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SnapEnabledOverride
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SnapEnabledOverride"));
	}


	template <typename T = bool> T IsEnabled() {
		return ((T (*)(SnapEnabledOverride*))(Il2CppBase() + 0x0))(this);
	}

};

}
