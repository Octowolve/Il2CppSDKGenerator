#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class PluginManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "PluginManager"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& pluginCollection() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlugin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Add(uintptr_t plugin) {
		return ((T (*)(PluginManager*, uintptr_t))(Il2CppBase() + 0x4430A58))(this, plugin);
	}
	template <typename T = uintptr_t> T GetPlugin(Il2CppString* name) {
		return ((T (*)(PluginManager*, Il2CppString*))(Il2CppBase() + 0x4430FAC))(this, name);
	}
	template <typename T = uintptr_t> T GetCurrentPlugin() {
		return ((T (*)(PluginManager*))(Il2CppBase() + 0x4431150))(this);
	}

};

}
