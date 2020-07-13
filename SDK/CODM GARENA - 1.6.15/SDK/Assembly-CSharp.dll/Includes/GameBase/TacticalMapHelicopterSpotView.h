#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMapHelicopterSpotView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMapHelicopterSpotView"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_NameList() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppVector3> T& m_NameOffset() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& HelicopterSpotWidth() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& HelicopterSpotHeight() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppVector2> T& m_TexCenterOffset() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_SpotPoint() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& SpotSprite() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = int32_t> T& m_AlphaCheck() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> T& m_CurrentItemID() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppString*> static T& HELICOPTER_SPOT_SPRITE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AIRSTRIKE_SPOT_SPRITE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsLockSwitchBtn() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppVector3> T& m_WorldPosSpot() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintDebugInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSpotSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayDisplaySelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenPosToMapUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapUIPosToScreenUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldPosition2MapUIPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapUIToWorldPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerAirstrikeBombing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = bool> T Startup(uintptr_t inGPS) {
		return ((T (*)(TacticalMapHelicopterSpotView*, uintptr_t))(Il2CppBase() + 0x277F580))(this, inGPS);
	}
	template <typename T = void> static T PrintDebugInfo(uintptr_t tex) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x277F950))(0, tex);
	}
	template <typename T = bool> T CheckResource() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x27803D0))(this);
	}
	template <typename T = bool> T InitResources() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2780678))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2780F04))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x27811B4))(this);
	}
	template <typename T = void> T SetSpotSprite(int32_t itemID) {
		return ((T (*)(TacticalMapHelicopterSpotView*, int32_t))(Il2CppBase() + 0x277EC88))(this, itemID);
	}
	template <typename T = bool> T GamepadMark() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x278137C))(this);
	}
	template <typename T = void> T OnClickSwitch(uintptr_t gameObject, bool isPressed) {
		return ((T (*)(TacticalMapHelicopterSpotView*, uintptr_t, bool))(Il2CppBase() + 0x278215C))(this, gameObject, isPressed);
	}
	template <typename T = void> T OnClickPosition(Il2CppVector3 touchPos) {
		return ((T (*)(TacticalMapHelicopterSpotView*, Il2CppVector3))(Il2CppBase() + 0x2781484))(this, touchPos);
	}
	template <typename T = void> T DelayDisplaySelf() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2782750))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2782F8C))(this);
	}
	template <typename T = Il2CppVector2> T ScreenPosToMapUIPos(Il2CppVector2 inScreenPos) {
		return ((T (*)(TacticalMapHelicopterSpotView*, Il2CppVector2))(Il2CppBase() + 0x278307C))(this, inScreenPos);
	}
	template <typename T = Il2CppVector2> T MapUIPosToScreenUIPos(Il2CppVector2 inMapUIPos) {
		return ((T (*)(TacticalMapHelicopterSpotView*, Il2CppVector2))(Il2CppBase() + 0x2782504))(this, inMapUIPos);
	}
	template <typename T = Il2CppVector2> T WorldPosition2MapUIPosition(Il2CppVector3 inSpeicifyLoc) {
		return ((T (*)(TacticalMapHelicopterSpotView*, Il2CppVector3))(Il2CppBase() + 0x27832A8))(this, inSpeicifyLoc);
	}
	template <typename T = Il2CppVector3> T MapUIToWorldPos(Il2CppVector3 localPos) {
		return ((T (*)(TacticalMapHelicopterSpotView*, Il2CppVector3))(Il2CppBase() + 0x2782334))(this, localPos);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x27833B4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x278395C))(this);
	}
	template <typename T = bool> T IsLocalPlayerAirstrikeBombing() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2782C44))(this);
	}
	template <typename T = int32_t> static T PrintDebugInfom__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2783C30))(0, x);
	}
	template <typename T = int32_t> static T PrintDebugInfom__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2783C38))(0, x);
	}
	template <typename T = bool> T xLuaBaseProxy_Startup(uintptr_t P0) {
		return ((T (*)(TacticalMapHelicopterSpotView*, uintptr_t))(Il2CppBase() + 0x2783C40))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckResource() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2783C44))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_InitResources() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2783CE8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2783CEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2783CF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClickSwitch(uintptr_t P0, bool P1) {
		return ((T (*)(TacticalMapHelicopterSpotView*, uintptr_t, bool))(Il2CppBase() + 0x2783CFC))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2783F7C))(this);
	}
	template <typename T = Il2CppVector2> T xLuaBaseProxy_WorldPosition2MapUIPosition(Il2CppVector3 P0) {
		return ((T (*)(TacticalMapHelicopterSpotView*, Il2CppVector3))(Il2CppBase() + 0x278409C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2784194))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(TacticalMapHelicopterSpotView*))(Il2CppBase() + 0x2784198))(this);
	}

};

}
