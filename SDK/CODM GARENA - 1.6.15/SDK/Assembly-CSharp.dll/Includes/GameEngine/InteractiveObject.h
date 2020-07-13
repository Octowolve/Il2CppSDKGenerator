#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InteractiveObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InteractiveObject"));
	}

	template <typename T = int32_t> T& costBuffID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& costPoints() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& coolDownTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TriggerGroups() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& triggers() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& btnSpriteName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& textDesc() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& btnContent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LookAtPoint() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& RealLookAtPoint() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& insideTriggerVolume() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& ServerUsability() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = Il2CppString*> T& BtnSpriteName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& ButtonMessageLocID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& ButtonContentLocID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& InVolumeLocalPawn() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_InteractiveHUD() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& CurrentShowingCommonTips() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_EnterHasClick() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetButtonMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetButtonContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUsability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncCoolingDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyInteractiveContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTriggerVolumes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCommonTipsCtrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckBeforeInteractive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_SyncInteractiveEvent() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E4DC))(this);
	}
	template <typename T = bool> T get_ServerUsability() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E4E4))(this);
	}
	template <typename T = void> T set_ServerUsability(bool value) {
		return ((T (*)(InteractiveObject*, bool))(Il2CppBase() + 0x245E4EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_BtnSpriteName() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E4F4))(this);
	}
	template <typename T = void> T set_BtnSpriteName(Il2CppString* value) {
		return ((T (*)(InteractiveObject*, Il2CppString*))(Il2CppBase() + 0x245E4FC))(this, value);
	}
	template <typename T = float> T get_BtnSpriteScale() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E504))(this);
	}
	template <typename T = Il2CppVector3> T get_BtnSpriteOffset() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E50C))(this);
	}
	template <typename T = Il2CppString*> T get_ButtonMessageLocID() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E524))(this);
	}
	template <typename T = void> T set_ButtonMessageLocID(Il2CppString* value) {
		return ((T (*)(InteractiveObject*, Il2CppString*))(Il2CppBase() + 0x245E52C))(this, value);
	}
	template <typename T = Il2CppString*> T GetButtonMessage() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E534))(this);
	}
	template <typename T = Il2CppString*> T get_ButtonContentLocID() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E6B4))(this);
	}
	template <typename T = void> T set_ButtonContentLocID(Il2CppString* value) {
		return ((T (*)(InteractiveObject*, Il2CppString*))(Il2CppBase() + 0x245E6BC))(this, value);
	}
	template <typename T = Il2CppString*> T GetButtonContent() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E6C4))(this);
	}
	template <typename T = int32_t> T get_UnlockItemId() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E844))(this);
	}
	template <typename T = uintptr_t> T get_Action() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E84C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245E854))(this);
	}
	template <typename T = void> T OnSyncUsability(bool available) {
		return ((T (*)(InteractiveObject*, bool))(Il2CppBase() + 0x245EDBC))(this, available);
	}
	template <typename T = void> T OnSyncCoolingDown(bool bCoolingDown) {
		return ((T (*)(InteractiveObject*, bool))(Il2CppBase() + 0x245EF60))(this, bCoolingDown);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(InteractiveObject*, uintptr_t, bool))(Il2CppBase() + 0x245F000))(this, p, enter);
	}
	template <typename T = void> T NotifyInteractiveContext(bool show) {
		return ((T (*)(InteractiveObject*, bool))(Il2CppBase() + 0x245F104))(this, show);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTriggerVolumes() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245ECF4))(this);
	}
	template <typename T = uintptr_t> T CreateCommonTipsCtrl(Il2CppVector3 pos) {
		return ((T (*)(InteractiveObject*, Il2CppVector3))(Il2CppBase() + 0x245F4A8))(this, pos);
	}
	template <typename T = bool> T OnCheckBeforeInteractive() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245F614))(this);
	}
	template <typename T = bool> T NeedCheckBeforeInteractive() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245F6B4))(this);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245F754))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(InteractiveObject*, float))(Il2CppBase() + 0x245F75C))(this, fDeltaTime);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245FBDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(InteractiveObject*))(Il2CppBase() + 0x245FE80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncUsability(bool P0) {
		return ((T (*)(InteractiveObject*, bool))(Il2CppBase() + 0x245FE84))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(InteractiveObject*, float))(Il2CppBase() + 0x245FE88))(this, P0);
	}

};

}
