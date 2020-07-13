#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIContainer"));
	}

	template <typename T = uint32_t> static T& m_GlobleWindowContollerInstanceID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetControllerKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetControllerKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T CreateController(uintptr_t t, int32_t userContext, uintptr_t assetId) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3AD41CC))(0, t, userContext, assetId);
	}
	template <typename T = uintptr_t> static T CreateController_1(int32_t userContext) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3354BF4))(0, userContext);
	}
	template <typename T = Il2CppString*> static T GetControllerKey(int32_t userContext) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1E770A0))(0, userContext);
	}
	template <typename T = Il2CppString*> static T GetControllerKey_1(Il2CppString* controllerTypeFullName, int32_t userContext, uintptr_t assetId) {
		return ((T (*)(void *, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x3AD44C0))(0, controllerTypeFullName, userContext, assetId);
	}
	template <typename T = Il2CppString*> static T GetViewKey(int32_t assetId, int32_t userContext) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3AD46D8))(0, assetId, userContext);
	}

};

}
