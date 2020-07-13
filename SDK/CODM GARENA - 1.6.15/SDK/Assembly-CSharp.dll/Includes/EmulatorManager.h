#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmulatorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmulatorManager"));
	}

	template <typename T = Il2CppString*> T& m_EmulatorType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_EmulatorSettingLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_EmulatorFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_EmulatorResHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& GarenaSimulatorSpriteName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& OtherSimulatorSpriteName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_curTickTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> static T& TICK_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableDeviceWarning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEmulatorParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEmulatorType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidEmulatorOrDevice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_EmulatorSettingLevel() {
		return ((T (*)(EmulatorManager*))(Il2CppBase() + 0x4BCCB9C))(this);
	}
	template <typename T = uintptr_t> T get_EmulatorFrameRateLevel() {
		return ((T (*)(EmulatorManager*))(Il2CppBase() + 0x4BCCBA4))(this);
	}
	template <typename T = int32_t> T get_EmulatorResHeight() {
		return ((T (*)(EmulatorManager*))(Il2CppBase() + 0x4BCCBAC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(EmulatorManager*))(Il2CppBase() + 0x4BCCBB4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(EmulatorManager*, float))(Il2CppBase() + 0x4BCCE00))(this, deltaTime);
	}
	template <typename T = bool> T IsEmulator() {
		return ((T (*)(EmulatorManager*))(Il2CppBase() + 0x4BCD054))(this);
	}
	template <typename T = bool> T EnableDeviceWarning() {
		return ((T (*)(EmulatorManager*))(Il2CppBase() + 0x4BCD0FC))(this);
	}
	template <typename T = void> T InitEmulatorParam() {
		return ((T (*)(EmulatorManager*))(Il2CppBase() + 0x4BCCC64))(this);
	}
	template <typename T = void> T UpdateEmulatorType(bool wait) {
		return ((T (*)(EmulatorManager*, bool))(Il2CppBase() + 0x4BCCEFC))(this, wait);
	}
	template <typename T = bool> T IsValidEmulatorOrDevice() {
		return ((T (*)(EmulatorManager*))(Il2CppBase() + 0x4BCD280))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EmulatorManager*))(Il2CppBase() + 0x4BCD358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(EmulatorManager*, float))(Il2CppBase() + 0x4BCD360))(this, P0);
	}

};

}
