#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CrossHairView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CrossHairView"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_CrossHairViewList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_curCrossHairView() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_CrossHairHit() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& mCurCrossHairType() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& mLastCrossHairType() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_OldCrossHairType() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_OldCrossHairActiveState() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_OldCrossHairParams() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SubCrossHairViewList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_curSubCrossHairView() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& mCurSubCrossHairType() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_CurrentCorssAngleZ() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterSubCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCrossHairViewBaseType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrossHairView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSubCrossHairView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurCrossHairActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurCrossHairType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurCrossHairParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeCrossHairType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnableCrosshairDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDisplayByObserverMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeSubCrossHairType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnableSubCrosshairDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLastHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCorssAngleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSetCrossAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RevertLastCrossHairType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DF86B0))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DF86B8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DF8778))(this);
	}
	template <typename T = void> T RegisterCrossHair(uintptr_t CrossHairType, uintptr_t CrossHairClass, uintptr_t assetID) {
		return ((T (*)(CrossHairView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DF8F70))(this, CrossHairType, CrossHairClass, assetID);
	}
	template <typename T = void> T RegisterSubCrossHair(uintptr_t CrossHairType, uintptr_t CrossHairClass, uintptr_t assetID) {
		return ((T (*)(CrossHairView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DF9300))(this, CrossHairType, CrossHairClass, assetID);
	}
	template <typename T = bool> T IsCrossHairViewBaseType(uintptr_t type) {
		return ((T (*)(CrossHairView*, uintptr_t))(Il2CppBase() + 0x3DF988C))(this, type);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DF99EC))(this);
	}
	template <typename T = uintptr_t> T GetCrossHairView(uintptr_t inCrossHairType) {
		return ((T (*)(CrossHairView*, uintptr_t))(Il2CppBase() + 0x3DF95DC))(this, inCrossHairType);
	}
	template <typename T = uintptr_t> T GetSubCrossHairView(uintptr_t inCrossHairType) {
		return ((T (*)(CrossHairView*, uintptr_t))(Il2CppBase() + 0x3DF9AF4))(this, inCrossHairType);
	}
	template <typename T = bool> T IsCurCrossHairActive() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DF9C6C))(this);
	}
	template <typename T = uintptr_t> T GetCurCrossHairType() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DF9DB4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCurCrossHairParams() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DF9ED4))(this);
	}
	template <typename T = void> T OnChangeCrossHairType(uintptr_t Msg) {
		return ((T (*)(CrossHairView*, uintptr_t))(Il2CppBase() + 0x3DFA084))(this, Msg);
	}
	template <typename T = void> T OnEnableCrosshairDisplay(uintptr_t Msg) {
		return ((T (*)(CrossHairView*, uintptr_t))(Il2CppBase() + 0x3DFACF8))(this, Msg);
	}
	template <typename T = bool> T CheckDisplayByObserverMode(bool show) {
		return ((T (*)(CrossHairView*, bool))(Il2CppBase() + 0x3DF974C))(this, show);
	}
	template <typename T = void> T OnChangeSubCrossHairType(uintptr_t Msg) {
		return ((T (*)(CrossHairView*, uintptr_t))(Il2CppBase() + 0x3DFB2D0))(this, Msg);
	}
	template <typename T = void> T OnEnableSubCrosshairDisplay(uintptr_t Msg) {
		return ((T (*)(CrossHairView*, uintptr_t))(Il2CppBase() + 0x3DFB888))(this, Msg);
	}
	template <typename T = void> T OnNotifyLastHair(uintptr_t Msg) {
		return ((T (*)(CrossHairView*, uintptr_t))(Il2CppBase() + 0x3DFBB64))(this, Msg);
	}
	template <typename T = void> T OnCorssAngleChanged(uintptr_t Msg) {
		return ((T (*)(CrossHairView*, uintptr_t))(Il2CppBase() + 0x3DFBCFC))(this, Msg);
	}
	template <typename T = void> T DoSetCrossAngle() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DFAB74))(this);
	}
	template <typename T = void> T RevertLastCrossHairType() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DFBE14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DFBFF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(CrossHairView*))(Il2CppBase() + 0x3DFBFFC))(this);
	}

};

}
