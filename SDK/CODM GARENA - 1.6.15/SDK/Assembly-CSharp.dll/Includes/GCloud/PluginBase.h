#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class PluginBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "PluginBase"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateResponseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePayResponseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePayResponseAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T Install() {
		return ((T (*)(PluginBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetPluginName() {
		return ((T (*)(PluginBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T CreateResponseInfo(int32_t action) {
		return ((T (*)(PluginBase*, int32_t))(Il2CppBase() + 0x4430CAC))(this, action);
	}
	template <typename T = uintptr_t> T CreatePayResponseInfo(int32_t action) {
		return ((T (*)(PluginBase*, int32_t))(Il2CppBase() + 0x4430D54))(this, action);
	}
	template <typename T = uintptr_t> T CreatePayResponseAction(int32_t action) {
		return ((T (*)(PluginBase*, int32_t))(Il2CppBase() + 0x4430DFC))(this, action);
	}

};

}
