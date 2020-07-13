#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class BRSignOperateController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "BRSignOperateController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewGuideInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDisableInRider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkItemInWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSignOperateController*))(Il2CppBase() + 0x38E1A4C))(this);
	}
	template <typename T = uintptr_t> T GetNewGuideInterface() {
		return ((T (*)(BRSignOperateController*))(Il2CppBase() + 0x38E1AF0))(this);
	}
	template <typename T = bool> T IsDisableInRider() {
		return ((T (*)(BRSignOperateController*))(Il2CppBase() + 0x38E1BE4))(this);
	}
	template <typename T = void> T MarkItemInWorld(int32_t ActorID, int32_t ItemID, bool IsInBox) {
		return ((T (*)(BRSignOperateController*, int32_t, int32_t, bool))(Il2CppBase() + 0x38E1E88))(this, ActorID, ItemID, IsInBox);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSignOperateController*))(Il2CppBase() + 0x38E231C))(this);
	}

};

}
