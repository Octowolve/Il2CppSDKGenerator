#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PandoraFacePopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PandoraFacePopupView"));
	}

	template <typename T = uintptr_t> T& tranRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T GetRootPath() {
		return ((T (*)(PandoraFacePopupView*))(Il2CppBase() + 0x3EFC720))(this);
	}

};

}
