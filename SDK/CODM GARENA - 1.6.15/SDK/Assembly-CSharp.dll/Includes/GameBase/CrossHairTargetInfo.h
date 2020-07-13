#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CrossHairTargetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CrossHairTargetInfo"));
	}

	template <typename T = uintptr_t> T& m_ChoosePlayerInfo() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_LabelEnemyName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_Enemy() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_LowerHPFX() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_EnemyLevelSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_EnemyLevelLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_EnemyArenaSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& FarFontSize() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& NearFontSize() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_Panel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_FixedHeadNameOffset() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_FadeOutTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_FXLifeTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_LastTarget() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_LastDisplayHP() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> static T& FurthestScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mImpactInfo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& deltaTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppVector3> T& m_HPFXPos() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& bloodFX() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Precache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPlayerLoginOrLogoutMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayAvatarInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetArenaSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustLevelSpriteLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcBloomPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOutOrIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMatchOB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayAttackableTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBloodValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHPFX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_ParentPanel() {
		return ((T (*)(CrossHairTargetInfo*))(Il2CppBase() + 0x40D1860))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CrossHairTargetInfo*))(Il2CppBase() + 0x40D1868))(this);
	}
	template <typename T = void> T Precache() {
		return ((T (*)(CrossHairTargetInfo*))(Il2CppBase() + 0x40D1934))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CrossHairTargetInfo*))(Il2CppBase() + 0x40D1B28))(this);
	}
	template <typename T = void> T ProcessPlayerLoginOrLogoutMsg(uintptr_t killInfo) {
		return ((T (*)(CrossHairTargetInfo*, uintptr_t))(Il2CppBase() + 0x40D1C14))(this, killInfo);
	}
	template <typename T = void> T DisplayAvatarInfo(uintptr_t TargetPawn, bool bIsEnemy) {
		return ((T (*)(CrossHairTargetInfo*, uintptr_t, bool))(Il2CppBase() + 0x40D1E18))(this, TargetPawn, bIsEnemy);
	}
	template <typename T = Il2CppString*> T GetLevelSpriteName() {
		return ((T (*)(CrossHairTargetInfo*))(Il2CppBase() + 0x40D3544))(this);
	}
	template <typename T = int32_t> T GetLevelText(uintptr_t targetPawn) {
		return ((T (*)(CrossHairTargetInfo*, uintptr_t))(Il2CppBase() + 0x40D35FC))(this, targetPawn);
	}
	template <typename T = Il2CppString*> T GetArenaSpriteName(uintptr_t targetPawn) {
		return ((T (*)(CrossHairTargetInfo*, uintptr_t))(Il2CppBase() + 0x40D3748))(this, targetPawn);
	}
	template <typename T = uintptr_t> T GetGameMode() {
		return ((T (*)(CrossHairTargetInfo*))(Il2CppBase() + 0x40D2FCC))(this);
	}
	template <typename T = void> T AdjustLevelSpriteLocation(uintptr_t targetPawn) {
		return ((T (*)(CrossHairTargetInfo*, uintptr_t))(Il2CppBase() + 0x40D3A34))(this, targetPawn);
	}
	template <typename T = void> T CalcBloomPosition(uintptr_t TargetPawn) {
		return ((T (*)(CrossHairTargetInfo*, uintptr_t))(Il2CppBase() + 0x40D2388))(this, TargetPawn);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CrossHairTargetInfo*))(Il2CppBase() + 0x40D3E7C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CrossHairTargetInfo*, float))(Il2CppBase() + 0x40D3E84))(this, dt);
	}
	template <typename T = void> T FadeOutOrIn(uintptr_t rect, bool isActive) {
		return ((T (*)(CrossHairTargetInfo*, uintptr_t, bool))(Il2CppBase() + 0x40D2B38))(this, rect, isActive);
	}
	template <typename T = bool> T IsMatchOB() {
		return ((T (*)(CrossHairTargetInfo*))(Il2CppBase() + 0x40D4638))(this);
	}
	template <typename T = void> T DisplayAttackableTargetInfo(uintptr_t target, bool isEnemy) {
		return ((T (*)(CrossHairTargetInfo*, uintptr_t, bool))(Il2CppBase() + 0x40D42EC))(this, target, isEnemy);
	}
	template <typename T = void> T SetBloodValue(uintptr_t target) {
		return ((T (*)(CrossHairTargetInfo*, uintptr_t))(Il2CppBase() + 0x40D311C))(this, target);
	}
	template <typename T = void> T PlayHPFX(Il2CppVector3 pos) {
		return ((T (*)(CrossHairTargetInfo*, Il2CppVector3))(Il2CppBase() + 0x40D46E0))(this, pos);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CrossHairTargetInfo*))(Il2CppBase() + 0x40D4B20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(CrossHairTargetInfo*))(Il2CppBase() + 0x40D4B28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CrossHairTargetInfo*, float))(Il2CppBase() + 0x40D4B30))(this, P0);
	}

};

}
