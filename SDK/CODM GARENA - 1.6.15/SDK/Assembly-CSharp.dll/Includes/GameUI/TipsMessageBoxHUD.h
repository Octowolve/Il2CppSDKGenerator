#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TipsMessageBoxHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TipsMessageBoxHUD"));
	}

	template <typename T = uintptr_t> T& m_TipsView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventHandlers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContentAndBGDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TipsMessageBoxHUD*))(Il2CppBase() + 0x29BA910))(this);
	}
	template <typename T = void> T RegisterEventHandlers() {
		return ((T (*)(TipsMessageBoxHUD*))(Il2CppBase() + 0x29BAB10))(this);
	}
	template <typename T = void> T OnShowTips(uintptr_t Msg) {
		return ((T (*)(TipsMessageBoxHUD*, uintptr_t))(Il2CppBase() + 0x29BAC18))(this, Msg);
	}
	template <typename T = void> T SetContentAndBGDepth(int32_t contentDepth, int32_t BGdepth) {
		return ((T (*)(TipsMessageBoxHUD*, int32_t, int32_t))(Il2CppBase() + 0x29BB82C))(this, contentDepth, BGdepth);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TipsMessageBoxHUD*))(Il2CppBase() + 0x29BB934))(this);
	}

};

}
