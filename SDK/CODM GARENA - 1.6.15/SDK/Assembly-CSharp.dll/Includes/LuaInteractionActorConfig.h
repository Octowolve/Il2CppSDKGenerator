#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuaInteractionActorConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuaInteractionActorConfig"));
	}

	template <typename T = uintptr_t> T& model() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& boxCol() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& buttonSpriteName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& buttonMessageLocID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& buttonContentLocID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLuaExportProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T GetLuaExportProperty(uintptr_t propertyList) {
		return ((T (*)(LuaInteractionActorConfig*, uintptr_t))(Il2CppBase() + 0x43533A8))(this, propertyList);
	}
	template <typename T = void> T xLuaBaseProxy_GetLuaExportProperty(uintptr_t P0) {
		return ((T (*)(LuaInteractionActorConfig*, uintptr_t))(Il2CppBase() + 0x4353928))(this, P0);
	}

};

}
