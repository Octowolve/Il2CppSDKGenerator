#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PortalVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PortalVolume"));
	}

	template <typename T = uintptr_t> T& portalRoot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& enterSoundEvent() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& exitSoundEvent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& enterReleaseObjectRoot() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& enterCleanupPool() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& portalEffect() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PortalVolume*))(Il2CppBase() + 0x1DEC91C))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(PortalVolume*, uintptr_t, bool))(Il2CppBase() + 0x1DECA00))(this, p, enter);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PortalVolume*))(Il2CppBase() + 0x1DED8CC))(this);
	}

};

}
