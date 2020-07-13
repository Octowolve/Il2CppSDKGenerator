#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DeviceUIAdaptConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DeviceUIAdaptConfigConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& DeviceModel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Resolution() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& LeftOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& RightOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& TopOffset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& BottomOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& EnableGyroscope() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeviceUIAdaptConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEditorDeviceModelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T GetDeviceUIAdaptConfig(Il2CppString* deviceModelName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4641648))(0, deviceModelName);
	}
	template <typename T = Il2CppString*> static T GetEditorDeviceModelName() {
		return ((T (*)(void *))(Il2CppBase() + 0x46418F4))(0);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(DeviceUIAdaptConfigConfig*))(Il2CppBase() + 0x4641B90))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(DeviceUIAdaptConfigConfig*))(Il2CppBase() + 0x4641C60))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(DeviceUIAdaptConfigConfig*, int32_t))(Il2CppBase() + 0x4641C68))(this, value);
	}
	template <typename T = Il2CppString*> T get_DeviceModel() {
		return ((T (*)(DeviceUIAdaptConfigConfig*))(Il2CppBase() + 0x4641B88))(this);
	}
	template <typename T = void> T set_DeviceModel(Il2CppString* value) {
		return ((T (*)(DeviceUIAdaptConfigConfig*, Il2CppString*))(Il2CppBase() + 0x4641C70))(this, value);
	}
	template <typename T = Il2CppString*> T get_Resolution() {
		return ((T (*)(DeviceUIAdaptConfigConfig*))(Il2CppBase() + 0x4641C78))(this);
	}
	template <typename T = void> T set_Resolution(Il2CppString* value) {
		return ((T (*)(DeviceUIAdaptConfigConfig*, Il2CppString*))(Il2CppBase() + 0x4641C80))(this, value);
	}
	template <typename T = int32_t> T get_LeftOffset() {
		return ((T (*)(DeviceUIAdaptConfigConfig*))(Il2CppBase() + 0x4641C88))(this);
	}
	template <typename T = void> T set_LeftOffset(int32_t value) {
		return ((T (*)(DeviceUIAdaptConfigConfig*, int32_t))(Il2CppBase() + 0x4641C90))(this, value);
	}
	template <typename T = int32_t> T get_RightOffset() {
		return ((T (*)(DeviceUIAdaptConfigConfig*))(Il2CppBase() + 0x4641C98))(this);
	}
	template <typename T = void> T set_RightOffset(int32_t value) {
		return ((T (*)(DeviceUIAdaptConfigConfig*, int32_t))(Il2CppBase() + 0x4641CA0))(this, value);
	}
	template <typename T = int32_t> T get_TopOffset() {
		return ((T (*)(DeviceUIAdaptConfigConfig*))(Il2CppBase() + 0x4641CA8))(this);
	}
	template <typename T = void> T set_TopOffset(int32_t value) {
		return ((T (*)(DeviceUIAdaptConfigConfig*, int32_t))(Il2CppBase() + 0x4641CB0))(this, value);
	}
	template <typename T = int32_t> T get_BottomOffset() {
		return ((T (*)(DeviceUIAdaptConfigConfig*))(Il2CppBase() + 0x4641CB8))(this);
	}
	template <typename T = void> T set_BottomOffset(int32_t value) {
		return ((T (*)(DeviceUIAdaptConfigConfig*, int32_t))(Il2CppBase() + 0x4641CC0))(this, value);
	}
	template <typename T = int32_t> T get_EnableGyroscope() {
		return ((T (*)(DeviceUIAdaptConfigConfig*))(Il2CppBase() + 0x4641CC8))(this);
	}
	template <typename T = void> T set_EnableGyroscope(int32_t value) {
		return ((T (*)(DeviceUIAdaptConfigConfig*, int32_t))(Il2CppBase() + 0x4641CD0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(DeviceUIAdaptConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4641CD8))(this, bytes, position);
	}

};

}
