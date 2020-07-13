#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SpectatingInfoWhiteScreen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SpectatingInfo_WhiteScreen"));
	}

	template <typename T = uintptr_t> T& m_OwnerInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsWhiteScreen() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBySpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T SyncSpectateInfo(bool active) {
		return ((T (*)(SpectatingInfoWhiteScreen*, bool))(Il2CppBase() + 0x33FCD18))(this, active);
	}
	template <typename T = void> T RecordSpectateInfo(bool active) {
		return ((T (*)(SpectatingInfoWhiteScreen*, bool))(Il2CppBase() + 0x33FCDB8))(this, active);
	}
	template <typename T = void> T InitBySpectateInfo() {
		return ((T (*)(SpectatingInfoWhiteScreen*))(Il2CppBase() + 0x33FCE60))(this);
	}
	template <typename T = void> T HandleSpectateInfo(bool active) {
		return ((T (*)(SpectatingInfoWhiteScreen*, bool))(Il2CppBase() + 0x33FD064))(this, active);
	}
	template <typename T = void> T UpdateSpectateInfo() {
		return ((T (*)(SpectatingInfoWhiteScreen*))(Il2CppBase() + 0x33FD270))(this);
	}
	template <typename T = bool> T GetSpectateInfo() {
		return ((T (*)(SpectatingInfoWhiteScreen*))(Il2CppBase() + 0x33FD308))(this);
	}

};

}
