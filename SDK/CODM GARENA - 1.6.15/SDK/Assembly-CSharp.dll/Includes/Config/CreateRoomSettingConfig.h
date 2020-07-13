#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CreateRoomSettingConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CreateRoomSettingConfig"));
	}

	template <typename T = int32_t> T& Game_mode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Score_limit_default() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Score_limit_lower() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Score_limit_upper() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Time_limit_default() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Time_limit_lower() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Time_limit_upper() {
		return *(T*)((uintptr_t)this + 0x28);
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

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(CreateRoomSettingConfig*))(Il2CppBase() + 0x463B82C))(this);
	}
	template <typename T = int32_t> T get_Game_mode() {
		return ((T (*)(CreateRoomSettingConfig*))(Il2CppBase() + 0x463B8CC))(this);
	}
	template <typename T = void> T set_Game_mode(int32_t value) {
		return ((T (*)(CreateRoomSettingConfig*, int32_t))(Il2CppBase() + 0x463B8D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(CreateRoomSettingConfig*))(Il2CppBase() + 0x463B8DC))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(CreateRoomSettingConfig*, Il2CppString*))(Il2CppBase() + 0x463B8E4))(this, value);
	}
	template <typename T = int32_t> T get_Score_limit_default() {
		return ((T (*)(CreateRoomSettingConfig*))(Il2CppBase() + 0x463B8EC))(this);
	}
	template <typename T = void> T set_Score_limit_default(int32_t value) {
		return ((T (*)(CreateRoomSettingConfig*, int32_t))(Il2CppBase() + 0x463B8F4))(this, value);
	}
	template <typename T = int32_t> T get_Score_limit_lower() {
		return ((T (*)(CreateRoomSettingConfig*))(Il2CppBase() + 0x463B8FC))(this);
	}
	template <typename T = void> T set_Score_limit_lower(int32_t value) {
		return ((T (*)(CreateRoomSettingConfig*, int32_t))(Il2CppBase() + 0x463B904))(this, value);
	}
	template <typename T = int32_t> T get_Score_limit_upper() {
		return ((T (*)(CreateRoomSettingConfig*))(Il2CppBase() + 0x463B90C))(this);
	}
	template <typename T = void> T set_Score_limit_upper(int32_t value) {
		return ((T (*)(CreateRoomSettingConfig*, int32_t))(Il2CppBase() + 0x463B914))(this, value);
	}
	template <typename T = int32_t> T get_Time_limit_default() {
		return ((T (*)(CreateRoomSettingConfig*))(Il2CppBase() + 0x463B91C))(this);
	}
	template <typename T = void> T set_Time_limit_default(int32_t value) {
		return ((T (*)(CreateRoomSettingConfig*, int32_t))(Il2CppBase() + 0x463B924))(this, value);
	}
	template <typename T = int32_t> T get_Time_limit_lower() {
		return ((T (*)(CreateRoomSettingConfig*))(Il2CppBase() + 0x463B92C))(this);
	}
	template <typename T = void> T set_Time_limit_lower(int32_t value) {
		return ((T (*)(CreateRoomSettingConfig*, int32_t))(Il2CppBase() + 0x463B934))(this, value);
	}
	template <typename T = int32_t> T get_Time_limit_upper() {
		return ((T (*)(CreateRoomSettingConfig*))(Il2CppBase() + 0x463B93C))(this);
	}
	template <typename T = void> T set_Time_limit_upper(int32_t value) {
		return ((T (*)(CreateRoomSettingConfig*, int32_t))(Il2CppBase() + 0x463B944))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CreateRoomSettingConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463B94C))(this, bytes, position);
	}

};

}
