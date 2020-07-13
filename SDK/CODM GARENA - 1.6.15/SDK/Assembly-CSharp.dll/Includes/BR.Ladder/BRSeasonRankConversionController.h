#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BR.Ladder {

class BRSeasonRankConversionController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BR.Ladder", "BRSeasonRankConversionController"));
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
		return ((T (*)(BRSeasonRankConversionController*))(Il2CppBase() + 0x35C08F0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSeasonRankConversionController*))(Il2CppBase() + 0x35C09FC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSeasonRankConversionController*))(Il2CppBase() + 0x35C0AA0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSeasonRankConversionController*))(Il2CppBase() + 0x35C0BD4))(this);
	}
	template <typename T = void> T OnBtnNextClick() {
		return ((T (*)(BRSeasonRankConversionController*))(Il2CppBase() + 0x35C0CF0))(this);
	}
	template <typename T = void> T ShowRankConversion(int32_t old_rank, int32_t new_rank) {
		return ((T (*)(BRSeasonRankConversionController*, int32_t, int32_t))(Il2CppBase() + 0x35C0EBC))(this, old_rank, new_rank);
	}
	template <typename T = void> static T CheckSeasonRankConversion() {
		return ((T (*)(void *))(Il2CppBase() + 0x35C0FA0))(0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSeasonRankConversionController*))(Il2CppBase() + 0x35C1464))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSeasonRankConversionController*))(Il2CppBase() + 0x35C146C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSeasonRankConversionController*))(Il2CppBase() + 0x35C1474))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSeasonRankConversionController*))(Il2CppBase() + 0x35C147C))(this);
	}

};

}
