#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SignOutOfViewTipsItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SignOutOfViewTipsItem"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TipsItemDescLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& SignCountStringCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& IconSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ArrowSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SignOutOfViewTipsItem*))(Il2CppBase() + 0x3C97418))(this);
	}
	template <typename T = void> T UpdateIcon(Il2CppString* iconSpriteName, Il2CppString* arrowSpriteName) {
		return ((T (*)(SignOutOfViewTipsItem*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3C975A4))(this, iconSpriteName, arrowSpriteName);
	}
	template <typename T = void> T UpdateView(int32_t SignCount) {
		return ((T (*)(SignOutOfViewTipsItem*, int32_t))(Il2CppBase() + 0x3C97814))(this, SignCount);
	}

};

}
