#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.FFAGame {

class FFAGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.FFAGame", "FFAGame"));
	}

	template <typename T = float> T& m_MlkGameUavCd() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& m_MlkGameUavTime() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSpectate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(FFAGame*, uintptr_t, bool))(Il2CppBase() + 0x4016878))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(FFAGame*))(Il2CppBase() + 0x40169A8))(this);
	}
	template <typename T = float> T get_MlkGameUavCd() {
		return ((T (*)(FFAGame*))(Il2CppBase() + 0x4016A64))(this);
	}
	template <typename T = float> T get_MlkGameUavTime() {
		return ((T (*)(FFAGame*))(Il2CppBase() + 0x4016A6C))(this);
	}
	template <typename T = void> T StartMatch() {
		return ((T (*)(FFAGame*))(Il2CppBase() + 0x4016A74))(this);
	}
	template <typename T = bool> T CanSpectate(uintptr_t viewTarget) {
		return ((T (*)(FFAGame*, uintptr_t))(Il2CppBase() + 0x4016BAC))(this, viewTarget);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(FFAGame*, uintptr_t, bool))(Il2CppBase() + 0x4016D44))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_StartMatch() {
		return ((T (*)(FFAGame*))(Il2CppBase() + 0x4016D4C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSpectate(uintptr_t P0) {
		return ((T (*)(FFAGame*, uintptr_t))(Il2CppBase() + 0x4016D54))(this, P0);
	}

};

}
