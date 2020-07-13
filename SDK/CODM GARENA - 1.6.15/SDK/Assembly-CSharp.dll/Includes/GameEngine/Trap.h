#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Trap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Trap"));
	}

	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& DurationExtend() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& AttachToDoor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& NotActiveLight() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GreenLights() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RedLights() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SwitchSticksAnim() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& OpenShow() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& bCurrentLightGreen() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTrapType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayStickAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncCoolingDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerUsabilityChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrapLightStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppString*> T get_ButtonMessageLocID() {
		return ((T (*)(Trap*))(Il2CppBase() + 0x343B270))(this);
	}
	template <typename T = Il2CppString*> T get_BtnSpriteName() {
		return ((T (*)(Trap*))(Il2CppBase() + 0x343B2E8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Trap*))(Il2CppBase() + 0x343B360))(this);
	}
	template <typename T = uintptr_t> T GetTrapType() {
		return ((T (*)(Trap*))(Il2CppBase() + 0x343B520))(this);
	}
	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(Trap*))(Il2CppBase() + 0x343B5C0))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(Trap*, uintptr_t, bool))(Il2CppBase() + 0x343B660))(this, p, enter);
	}
	template <typename T = void> T OnStateChanged(bool bOn) {
		return ((T (*)(Trap*, bool))(Il2CppBase() + 0x343B954))(this, bOn);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(Trap*))(Il2CppBase() + 0x343BEA8))(this);
	}
	template <typename T = void> T PlayStickAnim(bool bOn) {
		return ((T (*)(Trap*, bool))(Il2CppBase() + 0x343BAA4))(this, bOn);
	}
	template <typename T = void> T OnSyncCoolingDown(bool bCoolingDown) {
		return ((T (*)(Trap*, bool))(Il2CppBase() + 0x343C104))(this, bCoolingDown);
	}
	template <typename T = void> T OnTriggerUsabilityChange(bool bUsable) {
		return ((T (*)(Trap*, bool))(Il2CppBase() + 0x343C36C))(this, bUsable);
	}
	template <typename T = void> T TrapLightStateChange(bool bGreen) {
		return ((T (*)(Trap*, bool))(Il2CppBase() + 0x343BBE4))(this, bGreen);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(Trap*))(Il2CppBase() + 0x343C434))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(Trap*))(Il2CppBase() + 0x343C43C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerEnterExit(uintptr_t P0, bool P1) {
		return ((T (*)(Trap*, uintptr_t, bool))(Il2CppBase() + 0x343C444))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateChanged(bool P0) {
		return ((T (*)(Trap*, bool))(Il2CppBase() + 0x343C44C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnButtonClick() {
		return ((T (*)(Trap*))(Il2CppBase() + 0x343C454))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncCoolingDown(bool P0) {
		return ((T (*)(Trap*, bool))(Il2CppBase() + 0x343C45C))(this, P0);
	}

};

}
