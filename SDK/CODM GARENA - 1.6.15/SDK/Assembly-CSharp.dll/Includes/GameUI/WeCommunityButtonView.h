#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WeCommunityButtonView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WeCommunityButtonView"));
	}

	template <typename T = uintptr_t> T& CommunityNormalBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CommunityVideoBtn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CommunityVideoSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& WeCommunityUrl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& CdnUrlPre() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeCommunityButtonView*))(Il2CppBase() + 0x2A31540))(this);
	}
	template <typename T = void> T RefreshView(uint32_t ItemId) {
		return ((T (*)(WeCommunityButtonView*, uint32_t))(Il2CppBase() + 0x2A316BC))(this, ItemId);
	}
	template <typename T = void> T OnBtnClick(uintptr_t obj) {
		return ((T (*)(WeCommunityButtonView*, uintptr_t))(Il2CppBase() + 0x2A317C4))(this, obj);
	}

};

}
