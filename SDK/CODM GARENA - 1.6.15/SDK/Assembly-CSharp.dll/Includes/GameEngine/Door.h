#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class Door
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "Door"));
	}

	template <typename T = bool> T& controlledByLua() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& initialOpen() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& linkedZones() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& auto_() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& autoCloseDelay() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& alwaysKeepCollision() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> static T& kDoorSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kKeySpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kZMKeySpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_signTargetVolume() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& signBoardAttachObj() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& BoardNearDisapear() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& BoardFarDisapear() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& BoardHeightDisapear() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& cacheEnableState() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(Door*))(Il2CppBase() + 0x41BDD74))(this);
	}
	template <typename T = Il2CppString*> T get_BtnSpriteName() {
		return ((T (*)(Door*))(Il2CppBase() + 0x41BDE14))(this);
	}
	template <typename T = Il2CppString*> T get_ButtonMessageLocID() {
		return ((T (*)(Door*))(Il2CppBase() + 0x41BDF80))(this);
	}
	template <typename T = int32_t> T get_UnlockItemId() {
		return ((T (*)(Door*))(Il2CppBase() + 0x41BE1A4))(this);
	}
	template <typename T = void> T OnStateChanged(bool bOn) {
		return ((T (*)(Door*, bool))(Il2CppBase() + 0x41BE1AC))(this, bOn);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(Door*))(Il2CppBase() + 0x41BE288))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Door*))(Il2CppBase() + 0x41BE4F0))(this);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(Door*))(Il2CppBase() + 0x41BE6DC))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(Door*, float))(Il2CppBase() + 0x41BE6E4))(this, fDeltaTime);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(Door*))(Il2CppBase() + 0x41BE88C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateChanged(bool P0) {
		return ((T (*)(Door*, bool))(Il2CppBase() + 0x41BE894))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnButtonClick() {
		return ((T (*)(Door*))(Il2CppBase() + 0x41BE89C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(Door*))(Il2CppBase() + 0x41BE8A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(Door*, float))(Il2CppBase() + 0x41BE8AC))(this, P0);
	}

};

}
