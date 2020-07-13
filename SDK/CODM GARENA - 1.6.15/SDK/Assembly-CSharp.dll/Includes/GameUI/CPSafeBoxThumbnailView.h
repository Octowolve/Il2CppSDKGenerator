#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CPSafeBoxThumbnailView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CPSafeBoxThumbnailView"));
	}

	template <typename T = uintptr_t> T& label_leftTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& leftTimeObj() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& leftTimeBackSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& label_currentValue() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& reachValueLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& fullValueLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& IsFullState() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& unLockedObj() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LockedObj() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& IsSoldOutObj() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ProgressSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& enterMainViewBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& fullAni() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& UnlockAni() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& IncrementAni() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& UpdateState() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& fStateInterval() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& fIncementInterval() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& fPlayAniTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& uSelfFadeAni() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& MPFadeOffset() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& PVEFadeOffset() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& BRFadeOffset() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& settleMentFadeOffset() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& adaptedSFXs() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppList<void*>*> T& sfxLocalScales() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& coinSFXObjs() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplaySFX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSFX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Owner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T DisplaySFX(bool bDisplay) {
		return ((T (*)(CPSafeBoxThumbnailView*, bool))(Il2CppBase() + 0x3DF7940))(this, bDisplay);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CPSafeBoxThumbnailView*))(Il2CppBase() + 0x3DF7A78))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CPSafeBoxThumbnailView*))(Il2CppBase() + 0x3DF7BA0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CPSafeBoxThumbnailView*))(Il2CppBase() + 0x3DF7F48))(this);
	}
	template <typename T = void> T ResetSFX() {
		return ((T (*)(CPSafeBoxThumbnailView*))(Il2CppBase() + 0x3DF7C5C))(this);
	}
	template <typename T = bool> T IsInRect(uintptr_t clipRegon, Il2CppVector3 target) {
		return ((T (*)(CPSafeBoxThumbnailView*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x3DF8070))(this, clipRegon, target);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CPSafeBoxThumbnailView*))(Il2CppBase() + 0x3DF819C))(this);
	}
	template <typename T = uintptr_t> T Owner() {
		return ((T (*)(CPSafeBoxThumbnailView*))(Il2CppBase() + 0x3DF8494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CPSafeBoxThumbnailView*))(Il2CppBase() + 0x3DF8594))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(CPSafeBoxThumbnailView*))(Il2CppBase() + 0x3DF859C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(CPSafeBoxThumbnailView*))(Il2CppBase() + 0x3DF85A4))(this);
	}

};

}
