#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MysteryWeaponBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MysteryWeaponBox"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& defaultWeaponIdList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& aniTimeCurve() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& timeCurveScale() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& timeCurveStep() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& WeaponObject() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BoxObject() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& LightObject() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BoxLightObject() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& weaponRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& boxAni() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& weaponAni() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& AudioPlayer() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& OpenBoxPlayerId() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& openSound() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& closeSound() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& flySound() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& currentWeaponList() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponModelList() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& finalWeaponId() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& WeaponPrice() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& weaponRotation() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& currentShowWeaponIndex() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_RandomWeaponIndexList() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& nextShowWeaponTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& aniStep() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uint32_t> T& cacheAniState() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& bFinalWeapon() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& bRandomWeaponAniFinish() {
		return *(T*)((uintptr_t)this + 0xF5);
	}
	template <typename T = int32_t> T& NormalWeaponNum() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& VeryLowWeaponNum() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& showWeaponIdList() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponModelRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRandomWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetMysteryWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelObjectType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetButtonMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetPlayerIdMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsinList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponModelLoadFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestoryWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRandomWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRandomList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNextWeaponInList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickListWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShowWeaponIdList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoActiveBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoOpenBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCloseBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLeaveBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyInteractiveContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPlayerSoundId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AniExitCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = uintptr_t> T get_audioPlayer() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2712C90))(this);
	}
	template <typename T = void> T ResetWeaponModelRotation() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2712DD0))(this);
	}
	template <typename T = void> T ResetRandomWeapon() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2713080))(this);
	}
	template <typename T = void> T ShowWeaponBox(bool show) {
		return ((T (*)(MysteryWeaponBox*, bool))(Il2CppBase() + 0x27132D4))(this, show);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x271354C))(this);
	}
	template <typename T = void> T OnChangeState(int32_t value) {
		return ((T (*)(MysteryWeaponBox*, int32_t))(Il2CppBase() + 0x2713670))(this, value);
	}
	template <typename T = void> T OnGetMysteryWeapon(int32_t WeaponId) {
		return ((T (*)(MysteryWeaponBox*, int32_t))(Il2CppBase() + 0x2714904))(this, WeaponId);
	}
	template <typename T = uintptr_t> T GetLevelObjectType() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2714E80))(this);
	}
	template <typename T = void> T OnGetButtonMessage(int32_t price) {
		return ((T (*)(MysteryWeaponBox*, int32_t))(Il2CppBase() + 0x2714F20))(this, price);
	}
	template <typename T = void> T OnGetPlayerIdMessage(int32_t PlayerId) {
		return ((T (*)(MysteryWeaponBox*, int32_t))(Il2CppBase() + 0x2714FCC))(this, PlayerId);
	}
	template <typename T = bool> T CheckIsinList(int32_t weaponId) {
		return ((T (*)(MysteryWeaponBox*, int32_t))(Il2CppBase() + 0x2715074))(this, weaponId);
	}
	template <typename T = void> T LoadWeaponModel(int32_t weaponId) {
		return ((T (*)(MysteryWeaponBox*, int32_t))(Il2CppBase() + 0x2714A48))(this, weaponId);
	}
	template <typename T = void> T OnWeaponModelLoadFinish(int32_t weaponId) {
		return ((T (*)(MysteryWeaponBox*, int32_t))(Il2CppBase() + 0x271530C))(this, weaponId);
	}
	template <typename T = void> T DestoryWeaponList() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x27155D0))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_RandomWeaponIndexList() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2715848))(this);
	}
	template <typename T = void> T ResetRandomWeaponList() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x27158F8))(this);
	}
	template <typename T = bool> T SetRandomList() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x27159E8))(this);
	}
	template <typename T = bool> T ShowNextWeaponInList() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2715C8C))(this);
	}
	template <typename T = void> T TickListWeapon(float deltaTime) {
		return ((T (*)(MysteryWeaponBox*, float))(Il2CppBase() + 0x271638C))(this, deltaTime);
	}
	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2716570))(this);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(MysteryWeaponBox*, float))(Il2CppBase() + 0x2716578))(this, fDeltaTime);
	}
	template <typename T = void> T InitShowWeaponIdList() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2716644))(this);
	}
	template <typename T = void> T SetShowWeaponList(int32_t listNum) {
		return ((T (*)(MysteryWeaponBox*, int32_t))(Il2CppBase() + 0x2716734))(this, listNum);
	}
	template <typename T = void> T OnButtonClick() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2716A50))(this);
	}
	template <typename T = void> T DoActiveBox() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2713C90))(this);
	}
	template <typename T = void> T DoOpenBox() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x27142AC))(this);
	}
	template <typename T = void> T DoCloseBox() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2713ECC))(this);
	}
	template <typename T = void> T DoLeaveBox() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x2714550))(this);
	}
	template <typename T = void> T NotifyInteractiveContext(bool show) {
		return ((T (*)(MysteryWeaponBox*, bool))(Il2CppBase() + 0x2716C14))(this, show);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(MysteryWeaponBox*, uintptr_t, bool))(Il2CppBase() + 0x2716E28))(this, p, enter);
	}
	template <typename T = int32_t> T GetWeaponPlayerSoundId() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x27172F0))(this);
	}
	template <typename T = void> T AniExitCallBack() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x27122B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x27174E4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetLevelObjectType() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x27174EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(MysteryWeaponBox*, float))(Il2CppBase() + 0x27174F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnButtonClick() {
		return ((T (*)(MysteryWeaponBox*))(Il2CppBase() + 0x27174FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyInteractiveContext(bool P0) {
		return ((T (*)(MysteryWeaponBox*, bool))(Il2CppBase() + 0x2717504))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerEnterExit(uintptr_t P0, bool P1) {
		return ((T (*)(MysteryWeaponBox*, uintptr_t, bool))(Il2CppBase() + 0x271750C))(this, P0, P1);
	}

};

}
