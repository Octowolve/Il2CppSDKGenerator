#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMBossBloodHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMBossBloodHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Candidate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Particle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BossIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BossName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ParticleSystem() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Bar_One_First() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& Bar_Two_First() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Bar_Two_Second() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& Bar_Three_First() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Bar_Three_Second() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& Bar_Three_Third() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DebuffLayer() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_LayerCount() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_OrderBarList() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& First() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Second() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& Third() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_Value() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_NetWorkBossAIPawn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> static T& kShowEffectThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_PawnBuffMgr() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BuffGrid() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& DeBuffGrid() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BuffItemList() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& BuffItemTemplate() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_LastPlayEffectTime() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_ThumbTransform() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> static T& kRage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BossShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyChangeBossNameAndIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffectPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeParticleShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsParticleShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDebuffLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBossDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateBuffItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A3F5F8))(this);
	}
	template <typename T = void> T ShowRoot(bool bShow) {
		return ((T (*)(ZMBossBloodHUD*, bool))(Il2CppBase() + 0x2A3F840))(this, bShow);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A3F9D4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A3F9DC))(this);
	}
	template <typename T = void> T BossShow(uintptr_t netWorkBossAIPawn) {
		return ((T (*)(ZMBossBloodHUD*, uintptr_t))(Il2CppBase() + 0x2A3F9E8))(this, netWorkBossAIPawn);
	}
	template <typename T = void> T SetValue(float value, bool force) {
		return ((T (*)(ZMBossBloodHUD*, float, bool))(Il2CppBase() + 0x2A40240))(this, value, force);
	}
	template <typename T = void> T Show(uintptr_t netWorkBossAIPawn) {
		return ((T (*)(ZMBossBloodHUD*, uintptr_t))(Il2CppBase() + 0x2A3FA98))(this, netWorkBossAIPawn);
	}
	template <typename T = void> T OnNotifyChangeBossNameAndIcon(uintptr_t Msg) {
		return ((T (*)(ZMBossBloodHUD*, uintptr_t))(Il2CppBase() + 0x2A40B14))(this, Msg);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A40F38))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ZMBossBloodHUD*, float))(Il2CppBase() + 0x2A40F40))(this, dt);
	}
	template <typename T = void> T UpdateBuff() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A416C4))(this);
	}
	template <typename T = void> T PlayEffect(uintptr_t thumbTransform) {
		return ((T (*)(ZMBossBloodHUD*, uintptr_t))(Il2CppBase() + 0x2A4093C))(this, thumbTransform);
	}
	template <typename T = void> T UpdateEffectPosition() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A414D4))(this);
	}
	template <typename T = void> T ChangeParticleShow(bool wantShow) {
		return ((T (*)(ZMBossBloodHUD*, bool))(Il2CppBase() + 0x2A413FC))(this, wantShow);
	}
	template <typename T = bool> T IsParticleShow() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A41340))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A41CE0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A41EB4))(this);
	}
	template <typename T = void> T OnNotifyDebuffLayer(uintptr_t msg) {
		return ((T (*)(ZMBossBloodHUD*, uintptr_t))(Il2CppBase() + 0x2A41F8C))(this, msg);
	}
	template <typename T = void> T OnNotifyRage(uintptr_t Msg) {
		return ((T (*)(ZMBossBloodHUD*, uintptr_t))(Il2CppBase() + 0x2A42328))(this, Msg);
	}
	template <typename T = void> T OnNotifyBossDie(uintptr_t Msg) {
		return ((T (*)(ZMBossBloodHUD*, uintptr_t))(Il2CppBase() + 0x2A42600))(this, Msg);
	}
	template <typename T = uintptr_t> T GenerateBuffItem(bool bDebuff) {
		return ((T (*)(ZMBossBloodHUD*, bool))(Il2CppBase() + 0x2A41A78))(this, bDebuff);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A426B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ZMBossBloodHUD*, float))(Il2CppBase() + 0x2A426BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A426C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMBossBloodHUD*))(Il2CppBase() + 0x2A426CC))(this);
	}

};

}
