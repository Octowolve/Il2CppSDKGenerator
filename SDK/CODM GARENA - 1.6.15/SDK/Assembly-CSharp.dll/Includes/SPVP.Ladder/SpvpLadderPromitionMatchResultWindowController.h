#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderPromitionMatchResultWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderPromitionMatchResultWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x4303320))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x4303D0C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x4303DB0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x4303E58))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x4303F00))(this);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x4303FA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x430413C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x4304144))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x430414C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x4304154))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x430415C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnMaskClick() {
		return ((T (*)(SpvpLadderPromitionMatchResultWindowController*))(Il2CppBase() + 0x4304164))(this);
	}

};

}
