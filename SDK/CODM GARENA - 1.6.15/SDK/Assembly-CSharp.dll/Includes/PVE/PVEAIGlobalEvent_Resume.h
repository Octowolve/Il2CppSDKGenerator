#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAIGlobalEventResume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAIGlobalEvent_Resume"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldHandleEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T ShouldHandleEvent(uintptr_t c) {
		return ((T (*)(PVEAIGlobalEventResume*, uintptr_t))(Il2CppBase() + 0x4379868))(this, c);
	}
	template <typename T = bool> T HandleEvent(uintptr_t c) {
		return ((T (*)(PVEAIGlobalEventResume*, uintptr_t))(Il2CppBase() + 0x4379948))(this, c);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldHandleEvent(uintptr_t P0) {
		return ((T (*)(PVEAIGlobalEventResume*, uintptr_t))(Il2CppBase() + 0x4379A1C))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_HandleEvent(uintptr_t P0) {
		return ((T (*)(PVEAIGlobalEventResume*, uintptr_t))(Il2CppBase() + 0x4379A20))(this, P0);
	}

};

}
