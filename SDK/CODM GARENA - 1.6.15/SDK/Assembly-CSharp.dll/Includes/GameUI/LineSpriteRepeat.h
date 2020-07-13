#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LineSpriteRepeat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LineSpriteRepeat"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& SpriteList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& MoveRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& LineWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& bInitOk() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& mCachePosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& mCacheIdx() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& mMovePosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LineSpriteRepeat*))(Il2CppBase() + 0x233C164))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LineSpriteRepeat*))(Il2CppBase() + 0x233C4C4))(this);
	}
	template <typename T = void> T ResetPosition() {
		return ((T (*)(LineSpriteRepeat*))(Il2CppBase() + 0x233C258))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LineSpriteRepeat*))(Il2CppBase() + 0x233C574))(this);
	}

};

}
