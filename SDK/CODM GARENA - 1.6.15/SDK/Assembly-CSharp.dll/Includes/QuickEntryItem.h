#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuickEntryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuickEntryItem"));
	}

	template <typename T = uintptr_t> T& EntryIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EntryName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ColliderWidget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Default_Icon_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEntryClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(QuickEntryItem*))(Il2CppBase() + 0x3DB8DA8))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(QuickEntryItem*, uintptr_t))(Il2CppBase() + 0x3DB8F20))(this, data);
	}
	template <typename T = void> T OnEntryClick(uintptr_t go) {
		return ((T (*)(QuickEntryItem*, uintptr_t))(Il2CppBase() + 0x3DB9160))(this, go);
	}

};

}
