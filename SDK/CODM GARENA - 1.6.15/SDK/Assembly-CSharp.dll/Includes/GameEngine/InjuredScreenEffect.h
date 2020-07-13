#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class InjuredScreenEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "InjuredScreenEffect"));
	}

	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& meshMt() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& OriginWidth() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& OriginHeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> static T& Duration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& SpeedCurve() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& MaxDissolveTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& Paramenter1FromValue() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& Paramenter1ToValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& Paramenter1Name() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Paramenter2FromValue() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& Paramenter2ToValue() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& Paramenter2Name() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_TimeLine() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TempParamenter1() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TempParamenter2() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& targetCurveTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& currentCurveTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& upperStoped() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& realStoped() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = int32_t> T& m_LastTimeHP() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& m_CurDuration() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurveMaxHealthBlood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaterialParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMaterialFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPawnRespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeadReplayBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RealStopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMaterialParameterWithoutRestoreHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = float> T GetMaxHealth() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x370E8A4))(this);
	}
	template <typename T = float> T GetCurveMaxHealthBlood() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x370E948))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x370E9EC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x370ED34))(this);
	}
	template <typename T = void> T UpdateMaterialParameter(float deltaTime) {
		return ((T (*)(InjuredScreenEffect*, float))(Il2CppBase() + 0x370F324))(this, deltaTime);
	}
	template <typename T = void> T SetMaterialFloat(Il2CppString* paraName, float value) {
		return ((T (*)(InjuredScreenEffect*, Il2CppString*, float))(Il2CppBase() + 0x370F85C))(this, paraName, value);
	}
	template <typename T = void> T OnRoundStart() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x370FB18))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x370FE00))(this);
	}
	template <typename T = void> T OnLocalPawnRespawn() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x370FF64))(this);
	}
	template <typename T = void> T OnDeadReplayBegin() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x3710018))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x37100CC))(this);
	}
	template <typename T = void> T RealStopEffect() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x370F788))(this);
	}
	template <typename T = void> T ClearEffect() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x370FC8C))(this);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x37102E8))(this);
	}
	template <typename T = void> T UpdateMaterialParameterWithoutRestoreHP(float deltaTime) {
		return ((T (*)(InjuredScreenEffect*, float))(Il2CppBase() + 0x370EEC4))(this, deltaTime);
	}
	template <typename T = float> T xLuaBaseProxy_GetMaxHealth() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x37103B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x3710460))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x3710468))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x371046C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEffect() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x3710470))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEffect() {
		return ((T (*)(InjuredScreenEffect*))(Il2CppBase() + 0x3710474))(this);
	}

};

}
