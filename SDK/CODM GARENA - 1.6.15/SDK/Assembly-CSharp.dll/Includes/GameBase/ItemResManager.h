#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ItemResManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ItemResManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ItemResDataDictionary() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetResDataForResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemResData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetResDataForResource(int32_t resType) {
		return ((T (*)(ItemResManager*, int32_t))(Il2CppBase() + 0x2E144C4))(this, resType);
	}
	template <typename T = uintptr_t> T GetItemResData(int32_t resourceID) {
		return ((T (*)(ItemResManager*, int32_t))(Il2CppBase() + 0x2E14634))(this, resourceID);
	}

};

}
