#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CustomSettingWidgetMappingConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CustomSettingWidgetMappingConfig"));
	}

	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsGameHud() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& MappingType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LocID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(CustomSettingWidgetMappingConfig*))(Il2CppBase() + 0x463C3D0))(this);
	}
	template <typename T = Il2CppString*> T get_Type() {
		return ((T (*)(CustomSettingWidgetMappingConfig*))(Il2CppBase() + 0x463C470))(this);
	}
	template <typename T = void> T set_Type(Il2CppString* value) {
		return ((T (*)(CustomSettingWidgetMappingConfig*, Il2CppString*))(Il2CppBase() + 0x463C478))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(CustomSettingWidgetMappingConfig*))(Il2CppBase() + 0x463C480))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(CustomSettingWidgetMappingConfig*, Il2CppString*))(Il2CppBase() + 0x463C488))(this, value);
	}
	template <typename T = bool> T get_IsGameHud() {
		return ((T (*)(CustomSettingWidgetMappingConfig*))(Il2CppBase() + 0x463C490))(this);
	}
	template <typename T = void> T set_IsGameHud(bool value) {
		return ((T (*)(CustomSettingWidgetMappingConfig*, bool))(Il2CppBase() + 0x463C498))(this, value);
	}
	template <typename T = Il2CppString*> T get_MappingType() {
		return ((T (*)(CustomSettingWidgetMappingConfig*))(Il2CppBase() + 0x463C4A0))(this);
	}
	template <typename T = void> T set_MappingType(Il2CppString* value) {
		return ((T (*)(CustomSettingWidgetMappingConfig*, Il2CppString*))(Il2CppBase() + 0x463C4A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocID() {
		return ((T (*)(CustomSettingWidgetMappingConfig*))(Il2CppBase() + 0x463C4B0))(this);
	}
	template <typename T = void> T set_LocID(Il2CppString* value) {
		return ((T (*)(CustomSettingWidgetMappingConfig*, Il2CppString*))(Il2CppBase() + 0x463C4B8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CustomSettingWidgetMappingConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463C4C0))(this, bytes, position);
	}

};

}
