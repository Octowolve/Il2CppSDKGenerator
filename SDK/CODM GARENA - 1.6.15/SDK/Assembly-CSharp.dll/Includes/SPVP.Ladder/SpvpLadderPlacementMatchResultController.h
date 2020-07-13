#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class SpvpLadderPlacementMatchResultController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "SpvpLadderPlacementMatchResultController"));
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
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301130))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301A28))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301ACC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301B74))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301C1C))(this);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301CBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301E58))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301E60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301E68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301E70))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301E78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnMaskClick() {
		return ((T (*)(SpvpLadderPlacementMatchResultController*))(Il2CppBase() + 0x4301E80))(this);
	}

};

}
