#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerListItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerListItem"));
	}

	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& label() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& normal() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& select() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& normalText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& selectText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& OnServerItemClick() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Select() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUINormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIHighLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T BindData(Il2CppString* name) {
		return ((T (*)(ServerListItem*, Il2CppString*))(Il2CppBase() + 0x3C0A1FC))(this, name);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(ServerListItem*))(Il2CppBase() + 0x3C0A2F4))(this);
	}
	template <typename T = void> T SetClickFunc(void* func) {
		return ((T (*)(ServerListItem*, void*))(Il2CppBase() + 0x3C0A4C4))(this, func);
	}
	template <typename T = void> T Select() {
		return ((T (*)(ServerListItem*))(Il2CppBase() + 0x3C0A3C8))(this);
	}
	template <typename T = void> T SetUINormal() {
		return ((T (*)(ServerListItem*))(Il2CppBase() + 0x3C0A59C))(this);
	}
	template <typename T = void> T SetUIHighLight() {
		return ((T (*)(ServerListItem*))(Il2CppBase() + 0x3C0A7C4))(this);
	}

};

}
