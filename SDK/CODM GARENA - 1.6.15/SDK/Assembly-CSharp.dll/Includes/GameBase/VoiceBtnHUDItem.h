#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VoiceBtnHUDItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VoiceBtnHUDItem"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& VoiceBtnList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& ClickCallback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mCacheChannel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mCacheHold() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitVoiceBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VoiceBtnHUDItem*))(Il2CppBase() + 0x27E83A4))(this);
	}
	template <typename T = void> T OnBtnClick(uintptr_t obj) {
		return ((T (*)(VoiceBtnHUDItem*, uintptr_t))(Il2CppBase() + 0x27E86D0))(this, obj);
	}
	template <typename T = void> T InitVoiceBtn(uintptr_t mode, bool isHold, void* callback) {
		return ((T (*)(VoiceBtnHUDItem*, uintptr_t, bool, void*))(Il2CppBase() + 0x27E6564))(this, mode, isHold, callback);
	}
	template <typename T = void> T Refresh(uintptr_t mode, bool isHold) {
		return ((T (*)(VoiceBtnHUDItem*, uintptr_t, bool))(Il2CppBase() + 0x27E8828))(this, mode, isHold);
	}

};

}
