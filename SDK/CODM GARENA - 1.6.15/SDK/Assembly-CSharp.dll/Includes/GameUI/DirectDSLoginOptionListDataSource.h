#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DirectDSLoginOptionListDataSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DirectDSLoginOptionListDataSource"));
	}

	template <typename T = uintptr_t> T& m_DataSource() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_List() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColumnCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowControllerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T GetColumnCount() {
		return ((T (*)(DirectDSLoginOptionListDataSource*))(Il2CppBase() + 0x46ED1A0))(this);
	}
	template <typename T = int32_t> T GetItemsCount() {
		return ((T (*)(DirectDSLoginOptionListDataSource*))(Il2CppBase() + 0x46ED2D4))(this);
	}
	template <typename T = uintptr_t> T GetItemData(int32_t index) {
		return ((T (*)(DirectDSLoginOptionListDataSource*, int32_t))(Il2CppBase() + 0x46ED408))(this, index);
	}
	template <typename T = int32_t> T GetItemWidth(int32_t index) {
		return ((T (*)(DirectDSLoginOptionListDataSource*, int32_t))(Il2CppBase() + 0x46ED548))(this, index);
	}
	template <typename T = int32_t> T GetItemHeight(int32_t index) {
		return ((T (*)(DirectDSLoginOptionListDataSource*, int32_t))(Il2CppBase() + 0x46ED688))(this, index);
	}
	template <typename T = uintptr_t> T GetShowControllerType(int32_t index) {
		return ((T (*)(DirectDSLoginOptionListDataSource*, int32_t))(Il2CppBase() + 0x46ED7C8))(this, index);
	}

};

}
