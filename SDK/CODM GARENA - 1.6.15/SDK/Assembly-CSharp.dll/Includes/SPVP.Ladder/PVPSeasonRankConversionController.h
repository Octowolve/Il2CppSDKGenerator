#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SPVP.Ladder {

class PVPSeasonRankConversionController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SPVP.Ladder", "PVPSeasonRankConversionController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNextClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankConversion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSeasonRankConversion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVPSeasonRankConversionController*))(Il2CppBase() + 0x42FF9A0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPSeasonRankConversionController*))(Il2CppBase() + 0x42FFAAC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPSeasonRankConversionController*))(Il2CppBase() + 0x42FFB50))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPSeasonRankConversionController*))(Il2CppBase() + 0x42FFC84))(this);
	}
	template <typename T = void> T OnBtnNextClick() {
		return ((T (*)(PVPSeasonRankConversionController*))(Il2CppBase() + 0x42FFDA0))(this);
	}
	template <typename T = void> T ShowRankConversion(int32_t old_rank, int32_t new_rank) {
		return ((T (*)(PVPSeasonRankConversionController*, int32_t, int32_t))(Il2CppBase() + 0x42FFF6C))(this, old_rank, new_rank);
	}
	template <typename T = void> static T CheckSeasonRankConversion() {
		return ((T (*)(void *))(Il2CppBase() + 0x4300050))(0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPSeasonRankConversionController*))(Il2CppBase() + 0x43004DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPSeasonRankConversionController*))(Il2CppBase() + 0x43004E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPSeasonRankConversionController*))(Il2CppBase() + 0x43004EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPSeasonRankConversionController*))(Il2CppBase() + 0x43004F4))(this);
	}

};

}
