#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildWelfareDetailItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildWelfareDetailItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatClaimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildWelfareDetailItemController*))(Il2CppBase() + 0x4748664))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildWelfareDetailItemController*))(Il2CppBase() + 0x4748708))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(GuildWelfareDetailItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4748814))(this, list, index, data);
	}
	template <typename T = Il2CppString*> T FormatClaimTime(uint32_t time) {
		return ((T (*)(GuildWelfareDetailItemController*, uint32_t))(Il2CppBase() + 0x47491AC))(this, time);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildWelfareDetailItemController*))(Il2CppBase() + 0x47492CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildWelfareDetailItemController*))(Il2CppBase() + 0x47492D4))(this);
	}

};

}
