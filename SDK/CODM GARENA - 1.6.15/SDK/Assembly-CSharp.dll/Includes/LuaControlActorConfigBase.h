#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaControlActorConfigBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaControlActorConfigBase"));
	}

	template <typename T = Il2CppString*> T& nameLocID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuaExportProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_AssetID() {
		return ((T (*)(LuaControlActorConfigBase*))(Il2CppBase() + 0x43502CC))(this);
	}
	template <typename T = void> T GetLuaExportProperty(uintptr_t propertyList) {
		return ((T (*)(LuaControlActorConfigBase*, uintptr_t))(Il2CppBase() + 0x4350404))(this, propertyList);
	}

};

}
