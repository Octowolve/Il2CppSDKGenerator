#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRBuffIconItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRBuffIconItemView"));
	}

	template <typename T = uintptr_t> T& Picture() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SubScriptSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& itemID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& itemConfig() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isActive() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPicture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBackgroundColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSubScriptSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRBuffIconItemView*))(Il2CppBase() + 0x24E4130))(this);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(BRBuffIconItemView*))(Il2CppBase() + 0x24E4128))(this);
	}
	template <typename T = void> T SetData(int32_t id, uintptr_t config) {
		return ((T (*)(BRBuffIconItemView*, int32_t, uintptr_t))(Il2CppBase() + 0x24E3F4C))(this, id, config);
	}
	template <typename T = void> T SetVisible(bool active) {
		return ((T (*)(BRBuffIconItemView*, bool))(Il2CppBase() + 0x24E4024))(this, active);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(BRBuffIconItemView*))(Il2CppBase() + 0x24E41EC))(this);
	}
	template <typename T = void> T RefreshPicture() {
		return ((T (*)(BRBuffIconItemView*))(Il2CppBase() + 0x24E42C4))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultBackgroundSpriteName() {
		return ((T (*)(BRBuffIconItemView*))(Il2CppBase() + 0x24E44C0))(this);
	}
	template <typename T = void> T RefreshBackgroundColor() {
		return ((T (*)(BRBuffIconItemView*))(Il2CppBase() + 0x24E4538))(this);
	}
	template <typename T = Il2CppString*> T get_DefaultSubScriptSpriteName() {
		return ((T (*)(BRBuffIconItemView*))(Il2CppBase() + 0x24E4744))(this);
	}
	template <typename T = void> T RefreshSubScriptSprite() {
		return ((T (*)(BRBuffIconItemView*))(Il2CppBase() + 0x24E47F4))(this);
	}

};

}
