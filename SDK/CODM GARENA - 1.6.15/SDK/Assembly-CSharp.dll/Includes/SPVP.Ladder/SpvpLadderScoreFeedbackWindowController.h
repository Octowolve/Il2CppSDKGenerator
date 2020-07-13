#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderScoreFeedbackWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderScoreFeedbackWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x4305748))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x4305854))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x43058F8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x43059A0))(this);
	}
	template <typename T = void> T UpdateView(int32_t lastScore, int32_t changeScore) {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*, int32_t, int32_t))(Il2CppBase() + 0x4305A48))(this, lastScore, changeScore);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x4306394))(this);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x43064F0))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x430668C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x430672C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x4306734))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x430673C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x4306744))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x430674C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnMaskClick() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x4306754))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(SpvpLadderScoreFeedbackWindowController*))(Il2CppBase() + 0x430675C))(this);
	}

};

}
