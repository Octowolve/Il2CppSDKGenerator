#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class JumpBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "JumpBtnController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClimbFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ChangeClimbFlag(bool open) {
		return ((T (*)(JumpBtnController*, bool))(Il2CppBase() + 0x2E1BDE0))(this, open);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(JumpBtnController*))(Il2CppBase() + 0x2E1FE20))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(JumpBtnController*))(Il2CppBase() + 0x2E1FEC4))(this);
	}

};

}
