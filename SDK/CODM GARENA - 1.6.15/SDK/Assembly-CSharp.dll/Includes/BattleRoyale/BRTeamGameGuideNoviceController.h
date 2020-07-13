#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameGuideNoviceController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameGuideNoviceController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitShowGuidePicture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRTeamGameGuideNoviceController*))(Il2CppBase() + 0x261FDB8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTeamGameGuideNoviceController*))(Il2CppBase() + 0x261FE5C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRTeamGameGuideNoviceController*))(Il2CppBase() + 0x261FFC4))(this);
	}
	template <typename T = void> T OnExitShowGuidePicture() {
		return ((T (*)(BRTeamGameGuideNoviceController*))(Il2CppBase() + 0x26200E4))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(BRTeamGameGuideNoviceController*))(Il2CppBase() + 0x2620198))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(BRTeamGameGuideNoviceController*))(Il2CppBase() + 0x2620334))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRTeamGameGuideNoviceController*))(Il2CppBase() + 0x2620454))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTeamGameGuideNoviceController*))(Il2CppBase() + 0x262045C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRTeamGameGuideNoviceController*))(Il2CppBase() + 0x2620464))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(BRTeamGameGuideNoviceController*))(Il2CppBase() + 0x262046C))(this);
	}

};

}
