#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareWindowAvatarDescCNComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareWindowAvatarDescCNComponent"));
	}

	template <typename T = uintptr_t> T& _descLabel2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Initialize(uintptr_t root, uintptr_t mode) {
		return ((T (*)(ShareWindowAvatarDescCNComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C84120))(this, root, mode);
	}
	template <typename T = void> T Reset(uintptr_t data) {
		return ((T (*)(ShareWindowAvatarDescCNComponent*, uintptr_t))(Il2CppBase() + 0x3C844D8))(this, data);
	}
	template <typename T = void> T ResetLayout() {
		return ((T (*)(ShareWindowAvatarDescCNComponent*))(Il2CppBase() + 0x3C84764))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Initialize(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(ShareWindowAvatarDescCNComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C849C0))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(ShareWindowAvatarDescCNComponent*, uintptr_t))(Il2CppBase() + 0x3C849C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ResetLayout() {
		return ((T (*)(ShareWindowAvatarDescCNComponent*))(Il2CppBase() + 0x3C849C8))(this);
	}

};

}
