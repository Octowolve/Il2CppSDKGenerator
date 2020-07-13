#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UIRichMarker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UIRichMarker"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnAwake() {
		return ((T (*)(UIRichMarker*))(Il2CppBase() + 0x49FA710))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(UIRichMarker*))(Il2CppBase() + 0x49FA7A8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIRichMarker*))(Il2CppBase() + 0x49FA840))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIRichMarker*))(Il2CppBase() + 0x49FA8D8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIRichMarker*))(Il2CppBase() + 0x49FA970))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIRichMarker*))(Il2CppBase() + 0x49FAA20))(this);
	}

};

}
