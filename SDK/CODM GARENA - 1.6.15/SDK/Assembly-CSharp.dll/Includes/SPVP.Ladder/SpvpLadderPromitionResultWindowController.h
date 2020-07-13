#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderPromitionResultWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderPromitionResultWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x43042C0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x43043C8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x430446C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x4304510))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x43045B4))(this);
	}
	template <typename T = uintptr_t> T get_ReturnMessage() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x4304654))(this);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x430465C))(this);
	}
	template <typename T = void> T UpdateView(bool success) {
		return ((T (*)(SpvpLadderPromitionResultWindowController*, bool))(Il2CppBase() + 0x4304808))(this, success);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x43049E0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x43049E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x43049E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x43049EC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x43049F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnMaskClick() {
		return ((T (*)(SpvpLadderPromitionResultWindowController*))(Il2CppBase() + 0x4304A94))(this);
	}

};

}
