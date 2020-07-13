#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class RestoreRadio
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "RestoreRadio"));
	}

	template <typename T = uintptr_t> T& TabType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OnObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OnLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& OffObj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& OffLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mIsSelected() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRadio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRadioStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRadioClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsSelected() {
		return ((T (*)(RestoreRadio*))(Il2CppBase() + 0x255417C))(this);
	}
	template <typename T = void> T set_IsSelected(bool value) {
		return ((T (*)(RestoreRadio*, bool))(Il2CppBase() + 0x2554184))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RestoreRadio*))(Il2CppBase() + 0x25542A4))(this);
	}
	template <typename T = void> T InitRadio(uintptr_t tType, Il2CppString* name) {
		return ((T (*)(RestoreRadio*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x25543B8))(this, tType, name);
	}
	template <typename T = void> T ResetRadioStatus() {
		return ((T (*)(RestoreRadio*))(Il2CppBase() + 0x255418C))(this);
	}
	template <typename T = void> T OnRadioClick(uintptr_t obj) {
		return ((T (*)(RestoreRadio*, uintptr_t))(Il2CppBase() + 0x25544EC))(this, obj);
	}

};

}
