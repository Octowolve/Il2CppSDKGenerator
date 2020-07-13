#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildIconItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildIconItemController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildIconItemController*))(Il2CppBase() + 0x3BC0F64))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildIconItemController*))(Il2CppBase() + 0x3BC1008))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(GuildIconItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3BC117C))(this, list, index, data);
	}
	template <typename T = void> T OnSelect(bool flag) {
		return ((T (*)(GuildIconItemController*, bool))(Il2CppBase() + 0x3BC0B34))(this, flag);
	}
	template <typename T = Il2CppString*> T GetIconName() {
		return ((T (*)(GuildIconItemController*))(Il2CppBase() + 0x3BC0C40))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildIconItemController*))(Il2CppBase() + 0x3BC12F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildIconItemController*))(Il2CppBase() + 0x3BC12FC))(this);
	}

};

}
