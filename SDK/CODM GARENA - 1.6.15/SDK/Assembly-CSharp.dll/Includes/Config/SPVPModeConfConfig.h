#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SPVPModeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SPVPModeConfConfig"));
	}

	template <typename T = uintptr_t> T& EStyle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ModeID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MarkerID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Style() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Code() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_EStyle() {
		return ((T (*)(SPVPModeConfConfig*))(Il2CppBase() + 0x30EA324))(this);
	}
	template <typename T = void> T set_EStyle(uintptr_t value) {
		return ((T (*)(SPVPModeConfConfig*, uintptr_t))(Il2CppBase() + 0x30EA32C))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(SPVPModeConfConfig*))(Il2CppBase() + 0x30EA334))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SPVPModeConfConfig*))(Il2CppBase() + 0x30EA3E0))(this);
	}
	template <typename T = int32_t> T get_ModeID() {
		return ((T (*)(SPVPModeConfConfig*))(Il2CppBase() + 0x30EA480))(this);
	}
	template <typename T = void> T set_ModeID(int32_t value) {
		return ((T (*)(SPVPModeConfConfig*, int32_t))(Il2CppBase() + 0x30EA488))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(SPVPModeConfConfig*))(Il2CppBase() + 0x30EA490))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(SPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EA498))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SPVPModeConfConfig*))(Il2CppBase() + 0x30EA4A0))(this);
	}
	template <typename T = int32_t> T get_MarkerID() {
		return ((T (*)(SPVPModeConfConfig*))(Il2CppBase() + 0x30EA4B0))(this);
	}
	template <typename T = void> T set_MarkerID(int32_t value) {
		return ((T (*)(SPVPModeConfConfig*, int32_t))(Il2CppBase() + 0x30EA4B8))(this, value);
	}
	template <typename T = int32_t> T get_Style() {
		return ((T (*)(SPVPModeConfConfig*))(Il2CppBase() + 0x30EA3D8))(this);
	}
	template <typename T = void> T set_Style(int32_t value) {
		return ((T (*)(SPVPModeConfConfig*, int32_t))(Il2CppBase() + 0x30EA4C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Code() {
		return ((T (*)(SPVPModeConfConfig*))(Il2CppBase() + 0x30EA4C8))(this);
	}
	template <typename T = void> T set_Code(Il2CppString* value) {
		return ((T (*)(SPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EA4D0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SPVPModeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EA4D8))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SPVPModeConfConfig*))(Il2CppBase() + 0x30EA694))(this);
	}

};

}
