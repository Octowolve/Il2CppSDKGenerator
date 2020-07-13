#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SpectatingInfoPrepareState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SpectatingInfo_PrepareState"));
	}

	template <typename T = uintptr_t> T& m_OwnerInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsPrepare() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBySpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T GetSpectateInfo() {
		return ((T (*)(SpectatingInfoPrepareState*))(Il2CppBase() + 0x33FB160))(this);
	}
	template <typename T = void> T InitBySpectateInfo() {
		return ((T (*)(SpectatingInfoPrepareState*))(Il2CppBase() + 0x33FB208))(this);
	}
	template <typename T = void> T HandleSpectateInfo(bool active) {
		return ((T (*)(SpectatingInfoPrepareState*, bool))(Il2CppBase() + 0x33FB4EC))(this, active);
	}
	template <typename T = void> T RecordSpectateInfo(bool active) {
		return ((T (*)(SpectatingInfoPrepareState*, bool))(Il2CppBase() + 0x33FB58C))(this, active);
	}
	template <typename T = void> T SyncSpectateInfo(bool active) {
		return ((T (*)(SpectatingInfoPrepareState*, bool))(Il2CppBase() + 0x33FB634))(this, active);
	}
	template <typename T = void> T UpdateSpectateInfo() {
		return ((T (*)(SpectatingInfoPrepareState*))(Il2CppBase() + 0x33FB6D4))(this);
	}

};

}
