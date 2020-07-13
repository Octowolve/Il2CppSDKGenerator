#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class ScreenSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "ScreenSettings"));
	}

	template <typename T = Il2CppVector2> T& screenResolution() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& fullScreen() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& applyScreenResolution() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& updateScreenResolution() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Update() {
		return ((T (*)(ScreenSettings*))(Il2CppBase() + 0x487EFAC))(this);
	}

};

}
