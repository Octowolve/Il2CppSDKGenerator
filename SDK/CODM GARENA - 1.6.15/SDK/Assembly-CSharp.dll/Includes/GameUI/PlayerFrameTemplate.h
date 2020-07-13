#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PlayerFrameTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PlayerFrameTemplate"));
	}

	template <typename T = uintptr_t> T& HeadIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& InfoTable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LevelLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LadderSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& ClickCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ClickParam() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerFrameClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFrameEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlayerFrameTemplate*))(Il2CppBase() + 0x3A921BC))(this);
	}
	template <typename T = void> T OnPlayerFrameClick(uintptr_t obj) {
		return ((T (*)(PlayerFrameTemplate*, uintptr_t))(Il2CppBase() + 0x3A922EC))(this, obj);
	}
	template <typename T = void> T SetClickCallback(void* cb, uintptr_t p) {
		return ((T (*)(PlayerFrameTemplate*, void*, uintptr_t))(Il2CppBase() + 0x3A923BC))(this, cb, p);
	}
	template <typename T = void> T SetData(uintptr_t playerInfo) {
		return ((T (*)(PlayerFrameTemplate*, uintptr_t))(Il2CppBase() + 0x3A92480))(this, playerInfo);
	}
	template <typename T = void> T SetData_1(uintptr_t picInfo, Il2CppString* nameText, int32_t peakLevel, int32_t normalLevel, uint32_t ladder, uintptr_t ladderType, uint64_t playerID) {
		return ((T (*)(PlayerFrameTemplate*, uintptr_t, Il2CppString*, int32_t, int32_t, uint32_t, uintptr_t, uint64_t))(Il2CppBase() + 0x3A92634))(this, picInfo, nameText, peakLevel, normalLevel, ladder, ladderType, playerID);
	}
	template <typename T = void> T SetFrameEffectActive(bool bShow) {
		return ((T (*)(PlayerFrameTemplate*, bool))(Il2CppBase() + 0x3A92C5C))(this, bShow);
	}

};

}
