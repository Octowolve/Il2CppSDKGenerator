#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideItemFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuideItemFactory"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateNewGuideItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateNewGuideItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3172444))(0);
	}
	template <typename T = uintptr_t> T CreateNewGuideItem(uintptr_t config, uintptr_t mgr) {
		return ((T (*)(PVENewGuideItemFactory*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3175F40))(this, config, mgr);
	}
	template <typename T = uintptr_t> T CreateNewGuideItem_1(uintptr_t ItemType, uintptr_t config, uintptr_t mgr) {
		return ((T (*)(PVENewGuideItemFactory*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x31725A0))(this, ItemType, config, mgr);
	}

};

}
