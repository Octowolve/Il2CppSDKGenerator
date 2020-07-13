#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FrontEndStage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FrontEndStage"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnEvent(uintptr_t msg) {
		return ((T (*)(FrontEndStage*, uintptr_t))(Il2CppBase() + 0x31EAFD4))(this, msg);
	}
	template <typename T = void> T OnZoneEvent(uintptr_t msg) {
		return ((T (*)(FrontEndStage*, uintptr_t))(Il2CppBase() + 0x31EB0D8))(this, msg);
	}
	template <typename T = void> T OnLeave() {
		return ((T (*)(FrontEndStage*))(Il2CppBase() + 0x31EB1DC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FrontEndStage*))(Il2CppBase() + 0x31EB2A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(FrontEndStage*, uintptr_t))(Il2CppBase() + 0x31EB338))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneEvent(uintptr_t P0) {
		return ((T (*)(FrontEndStage*, uintptr_t))(Il2CppBase() + 0x31EB340))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLeave() {
		return ((T (*)(FrontEndStage*))(Il2CppBase() + 0x31EB348))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(FrontEndStage*))(Il2CppBase() + 0x31EB350))(this);
	}

};

}
