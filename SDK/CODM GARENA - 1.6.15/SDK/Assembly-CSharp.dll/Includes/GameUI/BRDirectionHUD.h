#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRDirectionHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRDirectionHUD"));
	}

	template <typename T = float> T& FullAngle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& OriginalZeroAngle() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BarTexture() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SoundTipsSpriteList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LeftFarSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& RightFarSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Marks() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MarkDistances() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<float>*> T& m_cacheDistances() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& mScreenScale() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CurDirection() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_brGameInfo() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& UpdateInterValTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& m_lastUpdateTime() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& mLastOffset() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& mLastAngle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> static T& MinUpdateAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_SHOW_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& Near_Distance() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& Near_Distance_Scale() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& Mid_Distance() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& Mid_Distance_Scale() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& Far_Distance() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& Far_Distance_Scale() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& CutOffAngle() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_needToShowList() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_cacheVisibleInfoList() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMarkAddOrRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMarkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSoundVisibleInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNeedToShowDictionary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSoundTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDictionaryData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D87DB4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D87DBC))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D87DCC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D87DD4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D8861C))(this);
	}
	template <typename T = void> T OnMarkAddOrRemove(uintptr_t MSG) {
		return ((T (*)(BRDirectionHUD*, uintptr_t))(Il2CppBase() + 0x2D8875C))(this, MSG);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BRDirectionHUD*, float))(Il2CppBase() + 0x2D88A00))(this, dt);
	}
	template <typename T = void> T UpdateDirection() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D88B28))(this);
	}
	template <typename T = void> T SetCurrentDirection(int32_t angle) {
		return ((T (*)(BRDirectionHUD*, int32_t))(Il2CppBase() + 0x2D89AB4))(this, angle);
	}
	template <typename T = void> T UpdateMarkInfo() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D88F48))(this);
	}
	template <typename T = void> T UpdateSoundVisibleInfo() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D899C4))(this);
	}
	template <typename T = void> T GetNeedToShowDictionary() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D89D48))(this);
	}
	template <typename T = void> T UpdateSoundTips() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D8A924))(this);
	}
	template <typename T = float> T GetAngle(Il2CppVector3 cacheVisibleInfoPosition, Il2CppVector3 camPos, Il2CppVector3 cameraToward) {
		return ((T (*)(BRDirectionHUD*, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2D8B188))(this, cacheVisibleInfoPosition, camPos, cameraToward);
	}
	template <typename T = void> T UpdateSpriteInfo(float angle, Il2CppVector3 cacheVisibleInfoPosition, Il2CppVector3 camPos, uintptr_t soundVisibleSprite, bool shoudPlayAnimation) {
		return ((T (*)(BRDirectionHUD*, float, Il2CppVector3, Il2CppVector3, uintptr_t, bool))(Il2CppBase() + 0x2D8B3C8))(this, angle, cacheVisibleInfoPosition, camPos, soundVisibleSprite, shoudPlayAnimation);
	}
	template <typename T = void> T UpdateDictionaryData() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D8A080))(this);
	}
	template <typename T = bool> static T UpdateDictionaryDatam__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D8B870))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D8B880))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRDirectionHUD*))(Il2CppBase() + 0x2D8B884))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRDirectionHUD*, float))(Il2CppBase() + 0x2D8B888))(this, P0);
	}

};

}
