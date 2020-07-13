#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareWindowAvatarDescComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareWindowAvatarDescComponent"));
	}

	template <typename T = uintptr_t> T& _mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _nameLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _descLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _numLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _numDescLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _numDescLabel2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeGetUILabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Reset(uintptr_t data) {
		return ((T (*)(ShareWindowAvatarDescComponent*, uintptr_t))(Il2CppBase() + 0x3C845F0))(this, data);
	}
	template <typename T = void> T Initialize(uintptr_t root, uintptr_t mode) {
		return ((T (*)(ShareWindowAvatarDescComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C84214))(this, root, mode);
	}
	template <typename T = void> T ResetLayout() {
		return ((T (*)(ShareWindowAvatarDescComponent*))(Il2CppBase() + 0x3C84928))(this);
	}
	template <typename T = uintptr_t> T SafeGetUILabel(Il2CppString* name) {
		return ((T (*)(ShareWindowAvatarDescComponent*, Il2CppString*))(Il2CppBase() + 0x3C84370))(this, name);
	}

};

}
