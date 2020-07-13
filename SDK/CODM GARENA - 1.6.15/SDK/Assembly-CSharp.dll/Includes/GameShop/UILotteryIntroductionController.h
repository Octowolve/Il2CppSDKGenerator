#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class UILotteryIntroductionController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "UILotteryIntroductionController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUILotteryIntroductionView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UILotteryIntroductionController*))(Il2CppBase() + 0x2D5FD90))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UILotteryIntroductionController*))(Il2CppBase() + 0x2D60654))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UILotteryIntroductionController*))(Il2CppBase() + 0x2D606F8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UILotteryIntroductionController*))(Il2CppBase() + 0x2D60BF4))(this);
	}
	template <typename T = void> T OnBtnCloseClick() {
		return ((T (*)(UILotteryIntroductionController*))(Il2CppBase() + 0x2D61014))(this);
	}
	template <typename T = void> T UpdateUILotteryIntroductionView(uintptr_t res) {
		return ((T (*)(UILotteryIntroductionController*, uintptr_t))(Il2CppBase() + 0x2D610C8))(this, res);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UILotteryIntroductionController*))(Il2CppBase() + 0x2D61778))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UILotteryIntroductionController*))(Il2CppBase() + 0x2D6177C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UILotteryIntroductionController*))(Il2CppBase() + 0x2D61784))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UILotteryIntroductionController*))(Il2CppBase() + 0x2D61788))(this);
	}

};

}
