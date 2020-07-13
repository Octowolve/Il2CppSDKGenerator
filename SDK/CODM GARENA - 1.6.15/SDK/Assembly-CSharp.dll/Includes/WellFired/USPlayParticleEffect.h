#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USPlayParticleEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USPlayParticleEffect"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USPlayParticleEffect*))(Il2CppBase() + 0x4A4388C))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USPlayParticleEffect*, float))(Il2CppBase() + 0x4A43A2C))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USPlayParticleEffect*))(Il2CppBase() + 0x4A43ACC))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USPlayParticleEffect*))(Il2CppBase() + 0x4A43B7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USPlayParticleEffect*))(Il2CppBase() + 0x4A43D1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USPlayParticleEffect*))(Il2CppBase() + 0x4A43D24))(this);
	}

};

}
