#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SlipVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SlipVolume"));
	}

	template <typename T = uintptr_t> T& m_LocalPawn() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_SlipDirection() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnEnterVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnExitVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnPawnEnterVolume(uintptr_t pawn) {
		return ((T (*)(SlipVolume*, uintptr_t))(Il2CppBase() + 0x3092640))(this, pawn);
	}
	template <typename T = void> T OnPawnExitVolume(uintptr_t pawn) {
		return ((T (*)(SlipVolume*, uintptr_t))(Il2CppBase() + 0x3092738))(this, pawn);
	}
	template <typename T = Il2CppVector3> T GetVelocity(Il2CppVector3 currentVelocity, Il2CppVector3 currentPosition) {
		return ((T (*)(SlipVolume*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x30927F4))(this, currentVelocity, currentPosition);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnEnterVolume(uintptr_t P0) {
		return ((T (*)(SlipVolume*, uintptr_t))(Il2CppBase() + 0x3092A50))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnExitVolume(uintptr_t P0) {
		return ((T (*)(SlipVolume*, uintptr_t))(Il2CppBase() + 0x3092A58))(this, P0);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetVelocity(Il2CppVector3 P0, Il2CppVector3 P1) {
		return ((T (*)(SlipVolume*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3092A60))(this, P0, P1);
	}

};

}
