#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntPlayerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntPlayerController"));
	}

	template <typename T = uintptr_t> T& m_PHPawn() {
		return *(T*)((uintptr_t)this + 0x2DC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllowRotateWhenSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartObserve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLookat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCeliling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_PHPawn() {
		return ((T (*)(PropHuntPlayerController*))(Il2CppBase() + 0x34AFA54))(this);
	}
	template <typename T = bool> T AllowRotateWhenSpectating() {
		return ((T (*)(PropHuntPlayerController*))(Il2CppBase() + 0x34AFBBC))(this);
	}
	template <typename T = void> T StartObserve() {
		return ((T (*)(PropHuntPlayerController*))(Il2CppBase() + 0x34AFC5C))(this);
	}
	template <typename T = void> T CheckLookat(uintptr_t targetPos, Il2CppQuaternion targetRot) {
		return ((T (*)(PropHuntPlayerController*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x34AFF1C))(this, targetPos, targetRot);
	}
	template <typename T = void> T StartSpectating() {
		return ((T (*)(PropHuntPlayerController*))(Il2CppBase() + 0x34B064C))(this);
	}
	template <typename T = void> T CheckCeliling(Il2CppVector3 targetPos) {
		return ((T (*)(PropHuntPlayerController*, Il2CppVector3))(Il2CppBase() + 0x34B07D0))(this, targetPos);
	}
	template <typename T = bool> T xLuaBaseProxy_AllowRotateWhenSpectating() {
		return ((T (*)(PropHuntPlayerController*))(Il2CppBase() + 0x34B088C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartObserve() {
		return ((T (*)(PropHuntPlayerController*))(Il2CppBase() + 0x34B0894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckLookat(uintptr_t P0, Il2CppQuaternion P1) {
		return ((T (*)(PropHuntPlayerController*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0x34B089C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_StartSpectating() {
		return ((T (*)(PropHuntPlayerController*))(Il2CppBase() + 0x34B08C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CheckCeliling(Il2CppVector3 P0) {
		return ((T (*)(PropHuntPlayerController*, Il2CppVector3))(Il2CppBase() + 0x34B08D0))(this, P0);
	}

};

}
