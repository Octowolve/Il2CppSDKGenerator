#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsPhraseDragDropItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsPhraseDragDropItem"));
	}

	template <typename T = uintptr_t> T& itemView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragDropEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnDragDropEnd() {
		return ((T (*)(SettingsPhraseDragDropItem*))(Il2CppBase() + 0x28B0CD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragDropEnd() {
		return ((T (*)(SettingsPhraseDragDropItem*))(Il2CppBase() + 0x28B0EC0))(this);
	}

};

}
