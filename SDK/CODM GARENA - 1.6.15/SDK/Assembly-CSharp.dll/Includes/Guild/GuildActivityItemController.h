#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildActivityItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildActivityItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildActivityItemController*))(Il2CppBase() + 0x3E383A0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildActivityItemController*))(Il2CppBase() + 0x3E38444))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(GuildActivityItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3E38550))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildActivityItemController*))(Il2CppBase() + 0x3E3875C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildActivityItemController*))(Il2CppBase() + 0x3E38764))(this);
	}

};

}
