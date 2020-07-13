#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITabTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITabTemplate"));
	}

	template <typename T = uintptr_t> T& ClickBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ClickBtnCollider() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ActiveRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ActiveSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ActiveLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& InactiveRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& InactiveSprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& InactiveLabel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TagLock() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& TagRedpoint() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ACTIVE_COLOR() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& mClickCallback() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mClickParam() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(Il2CppString* text, Il2CppString* activeLogo, Il2CppString* inacriveLogo, void* clickCallback, uintptr_t clickParam) {
		return ((T (*)(UITabTemplate*, Il2CppString*, Il2CppString*, Il2CppString*, void*, uintptr_t))(Il2CppBase() + 0x3B173C8))(this, text, activeLogo, inacriveLogo, clickCallback, clickParam);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UITabTemplate*))(Il2CppBase() + 0x3B17690))(this);
	}
	template <typename T = void> T OnClickBtn(uintptr_t obj) {
		return ((T (*)(UITabTemplate*, uintptr_t))(Il2CppBase() + 0x3B177B4))(this, obj);
	}

};

}
