#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class TipsParentTypesData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "TipsParentTypesData"));
	}

	template <typename T = Il2CppList<void*>*> static T& TipsParentList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareTipsParentData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTipsParentData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllTipsParentList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTipsSubTypeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTipsParentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T PrepareTipsParentData() {
		return ((T (*)(void *))(Il2CppBase() + 0x29BBD60))(0);
	}
	template <typename T = void> static T AddTipsParentData(uintptr_t tipsType, uintptr_t parentTipsType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x29BBE8C))(0, tipsType, parentTipsType);
	}
	template <typename T = Il2CppList<void*>*> static T GetAllTipsParentList() {
		return ((T (*)(void *))(Il2CppBase() + 0x29BC01C))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetTipsSubTypeList(uintptr_t tipsType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29B9A28))(0, tipsType);
	}
	template <typename T = uintptr_t> static T GetTipsParentType(uintptr_t tipsType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x29B9854))(0, tipsType);
	}

};

}
