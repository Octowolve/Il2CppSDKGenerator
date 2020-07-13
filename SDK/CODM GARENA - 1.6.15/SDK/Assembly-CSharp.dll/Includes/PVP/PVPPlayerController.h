#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPPlayerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPPlayerController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T StartSpectating() {
		return ((T (*)(PVPPlayerController*))(Il2CppBase() + 0x2B09078))(this);
	}
	template <typename T = void> T EndSpectating() {
		return ((T (*)(PVPPlayerController*))(Il2CppBase() + 0x2B091F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartSpectating() {
		return ((T (*)(PVPPlayerController*))(Il2CppBase() + 0x2B092E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndSpectating() {
		return ((T (*)(PVPPlayerController*))(Il2CppBase() + 0x2B092F0))(this);
	}

};

}
