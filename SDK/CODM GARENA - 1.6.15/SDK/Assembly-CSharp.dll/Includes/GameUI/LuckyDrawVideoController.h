#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LuckyDrawVideoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LuckyDrawVideoController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& luckyDrawGoodId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& isCloseWhenSkip() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContinuBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenLuckyDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshVideoView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCloseWhenSkip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F8B854))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F8B8F8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F8BA04))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F8BBA8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F8BD48))(this);
	}
	template <typename T = void> T OnSkipBtnClick() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F8BEC4))(this);
	}
	template <typename T = void> T OnContinuBtnClick() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F8C41C))(this);
	}
	template <typename T = void> T OpenLuckyDraw() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F935D0))(this);
	}
	template <typename T = void> T RefreshVideoView(bool SkipBtnShow, uint32_t luckyDrawGoodId, Il2CppString* videoName, Il2CppString* videoBGName) {
		return ((T (*)(LuckyDrawVideoController*, bool, uint32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1F8974C))(this, SkipBtnShow, luckyDrawGoodId, videoName, videoBGName);
	}
	template <typename T = void> T SetCloseWhenSkip(bool isCloseWhenSkip) {
		return ((T (*)(LuckyDrawVideoController*, bool))(Il2CppBase() + 0x1F89978))(this, isCloseWhenSkip);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F93830))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F93838))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F93840))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F93848))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LuckyDrawVideoController*))(Il2CppBase() + 0x1F93850))(this);
	}

};

}
