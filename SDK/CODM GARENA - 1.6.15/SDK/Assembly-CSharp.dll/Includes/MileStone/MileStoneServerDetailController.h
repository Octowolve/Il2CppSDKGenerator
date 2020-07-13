#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneServerDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneServerDetailController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUseContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T RefreshDataStore() {
		return ((T (*)(MileStoneServerDetailController*))(Il2CppBase() + 0x41E4760))(this);
	}
	template <typename T = int32_t> T GetUseContext() {
		return ((T (*)(MileStoneServerDetailController*))(Il2CppBase() + 0x41E4AD8))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(MileStoneServerDetailController*))(Il2CppBase() + 0x41E4B78))(this);
	}
	template <typename T = bool> T RefreshDataStorem__0(uintptr_t task) {
		return ((T (*)(MileStoneServerDetailController*, uintptr_t))(Il2CppBase() + 0x41E4CF4))(this, task);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshDataStore() {
		return ((T (*)(MileStoneServerDetailController*))(Il2CppBase() + 0x41E4CF8))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetUseContext() {
		return ((T (*)(MileStoneServerDetailController*))(Il2CppBase() + 0x41E4CFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView() {
		return ((T (*)(MileStoneServerDetailController*))(Il2CppBase() + 0x41E4D00))(this);
	}

};

}
