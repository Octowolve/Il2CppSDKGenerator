#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PandoraMainWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PandoraMainWindowView"));
	}

	template <typename T = uintptr_t> T& CenterRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T GetRootPath() {
		return ((T (*)(PandoraMainWindowView*))(Il2CppBase() + 0x3EFE158))(this);
	}

};

}
