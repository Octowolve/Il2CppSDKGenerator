#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AbstractPVPScorePanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AbstractPVPScorePanelController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T UpdateView() {
		return ((T (*)(AbstractPVPScorePanelController*))(Il2CppBase() + 0x0))(this);
	}

};

}
