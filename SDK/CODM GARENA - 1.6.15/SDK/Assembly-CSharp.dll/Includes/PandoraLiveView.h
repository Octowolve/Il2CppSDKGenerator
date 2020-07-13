#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PandoraLiveView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PandoraLiveView"));
	}

	template <typename T = uintptr_t> T& tranRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLiveOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T GetRootPath() {
		return ((T (*)(PandoraLiveView*))(Il2CppBase() + 0x3EFD3DC))(this);
	}
	template <typename T = bool> T IsLiveOpen() {
		return ((T (*)(PandoraLiveView*))(Il2CppBase() + 0x3EFD060))(this);
	}

};

}
