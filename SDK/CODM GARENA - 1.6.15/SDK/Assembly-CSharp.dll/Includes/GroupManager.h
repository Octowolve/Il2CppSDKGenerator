#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GroupManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GroupManager"));
	}

	template <typename T = uintptr_t> T& Wrapper() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& titleHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& itemHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DataList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ItemList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& LastGroup() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWrapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitializeItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostSetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = float> T GetHeight(bool bFromTitleCenter) {
		return ((T (*)(GroupManager*, bool))(Il2CppBase() + 0x3E2DF4C))(this, bFromTitleCenter);
	}
	template <typename T = void> T InitGroup(uintptr_t lastGroup, int32_t titleHeight, int32_t itemHeight) {
		return ((T (*)(GroupManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3E2E05C))(this, lastGroup, titleHeight, itemHeight);
	}
	template <typename T = void> T SetData(Il2CppList<uintptr_t>* data, bool bResetScrollView) {
		return ((T (*)(GroupManager*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x3E2E12C))(this, data, bResetScrollView);
	}
	template <typename T = void> T InitWrapper() {
		return ((T (*)(GroupManager*))(Il2CppBase() + 0x3E2E4C0))(this);
	}
	template <typename T = void> T InitItems() {
		return ((T (*)(GroupManager*))(Il2CppBase() + 0x3E2E64C))(this);
	}
	template <typename T = void> T OnInitializeItem(uintptr_t go, int32_t wrapIndex, int32_t realIndex) {
		return ((T (*)(GroupManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3E2EBE8))(this, go, wrapIndex, realIndex);
	}
	template <typename T = void> T PostSetData() {
		return ((T (*)(GroupManager*))(Il2CppBase() + 0x3E2ECA4))(this);
	}

};

}
