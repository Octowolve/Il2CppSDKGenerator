#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVEGameTeamInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVEGameTeamInfoView"));
	}

	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TeamInfoItemTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Items() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTeamInfoItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeamInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHasTeamInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVEGameTeamInfoView*))(Il2CppBase() + 0x3AA0800))(this);
	}
	template <typename T = int32_t> T SortGrid(uintptr_t a, uintptr_t b) {
		return ((T (*)(PVEGameTeamInfoView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3AA0970))(this, a, b);
	}
	template <typename T = void> T AddTeamInfoItem(uintptr_t pi) {
		return ((T (*)(PVEGameTeamInfoView*, uintptr_t))(Il2CppBase() + 0x3AA0B68))(this, pi);
	}
	template <typename T = void> T UpdateTeamInfo(uint32_t Id, int32_t score) {
		return ((T (*)(PVEGameTeamInfoView*, uint32_t, int32_t))(Il2CppBase() + 0x3AA0FA4))(this, Id, score);
	}
	template <typename T = bool> T IsHasTeamInfo(uint32_t PlayerId) {
		return ((T (*)(PVEGameTeamInfoView*, uint32_t))(Il2CppBase() + 0x3AA0E5C))(this, PlayerId);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVEGameTeamInfoView*))(Il2CppBase() + 0x3AA11D4))(this);
	}

};

}
