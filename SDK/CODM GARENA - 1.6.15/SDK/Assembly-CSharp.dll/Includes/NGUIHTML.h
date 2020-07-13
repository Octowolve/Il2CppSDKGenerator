#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NGUIHTML
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NGUIHTML"));
	}

	template <typename T = Il2CppString*> T& _html() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& maxLineWidth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& autoScroll() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& currentRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& changed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& compiler() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& htmlBoxcollider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetHtml() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppString*> T get_html() {
		return ((T (*)(NGUIHTML*))(Il2CppBase() + 0x43B9D1C))(this);
	}
	template <typename T = void> T set_html(Il2CppString* value) {
		return ((T (*)(NGUIHTML*, Il2CppString*))(Il2CppBase() + 0x43B9D24))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NGUIHTML*))(Il2CppBase() + 0x43B9F50))(this);
	}
	template <typename T = void> T UpdateRoot() {
		return ((T (*)(NGUIHTML*))(Il2CppBase() + 0x43BA0F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NGUIHTML*))(Il2CppBase() + 0x43BA308))(this);
	}
	template <typename T = void> T UpdateImpl() {
		return ((T (*)(NGUIHTML*))(Il2CppBase() + 0x43B9E60))(this);
	}
	template <typename T = void> T ResetHtml() {
		return ((T (*)(NGUIHTML*))(Il2CppBase() + 0x43BA3DC))(this);
	}
	template <typename T = float> T GetHeight() {
		return ((T (*)(NGUIHTML*))(Il2CppBase() + 0x43BA954))(this);
	}
	template <typename T = float> T GetWidth() {
		return ((T (*)(NGUIHTML*))(Il2CppBase() + 0x43BAAB8))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(NGUIHTML*))(Il2CppBase() + 0x43BAC1C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NGUIHTML*))(Il2CppBase() + 0x43BACF0))(this);
	}

};

}
