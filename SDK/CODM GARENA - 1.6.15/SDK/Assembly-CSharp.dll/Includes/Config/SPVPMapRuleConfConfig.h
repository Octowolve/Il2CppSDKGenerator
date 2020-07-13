#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SPVPMapRuleConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SPVPMapRuleConfConfig"));
	}

	template <typename T = uintptr_t> T& EModeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EFireMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& GameModeType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& FireMode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& FireModeEnum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& Open() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MarkerID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MapTag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& MapPage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MapPostion() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& PageEarthAngle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& MapEarthx() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& MapEarthy() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& MapEarthz() {
		return *(T*)((uintptr_t)this + 0x44);
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

	template <typename T = void> T PostInit() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9D88))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9EA4))(this);
	}
	template <typename T = int32_t> T get_MapID() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9F44))(this);
	}
	template <typename T = void> T set_MapID(int32_t value) {
		return ((T (*)(SPVPMapRuleConfConfig*, int32_t))(Il2CppBase() + 0x30E9F4C))(this, value);
	}
	template <typename T = Il2CppString*> T get_GameModeType() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9E94))(this);
	}
	template <typename T = void> T set_GameModeType(Il2CppString* value) {
		return ((T (*)(SPVPMapRuleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E9F54))(this, value);
	}
	template <typename T = Il2CppString*> T get_FireMode() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9F5C))(this);
	}
	template <typename T = void> T set_FireMode(Il2CppString* value) {
		return ((T (*)(SPVPMapRuleConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E9F64))(this, value);
	}
	template <typename T = int32_t> T get_FireModeEnum() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9E9C))(this);
	}
	template <typename T = void> T set_FireModeEnum(int32_t value) {
		return ((T (*)(SPVPMapRuleConfConfig*, int32_t))(Il2CppBase() + 0x30E9F6C))(this, value);
	}
	template <typename T = bool> T get_Open() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9F74))(this);
	}
	template <typename T = void> T set_Open(bool value) {
		return ((T (*)(SPVPMapRuleConfConfig*, bool))(Il2CppBase() + 0x30E9F7C))(this, value);
	}
	template <typename T = int32_t> T get_MarkerID() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9F84))(this);
	}
	template <typename T = void> T set_MarkerID(int32_t value) {
		return ((T (*)(SPVPMapRuleConfConfig*, int32_t))(Il2CppBase() + 0x30E9F8C))(this, value);
	}
	template <typename T = int32_t> T get_MapTag() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9F94))(this);
	}
	template <typename T = void> T set_MapTag(int32_t value) {
		return ((T (*)(SPVPMapRuleConfConfig*, int32_t))(Il2CppBase() + 0x30E9F9C))(this, value);
	}
	template <typename T = int32_t> T get_MapPage() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9FA4))(this);
	}
	template <typename T = void> T set_MapPage(int32_t value) {
		return ((T (*)(SPVPMapRuleConfConfig*, int32_t))(Il2CppBase() + 0x30E9FAC))(this, value);
	}
	template <typename T = int32_t> T get_MapPostion() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9FB4))(this);
	}
	template <typename T = void> T set_MapPostion(int32_t value) {
		return ((T (*)(SPVPMapRuleConfConfig*, int32_t))(Il2CppBase() + 0x30E9FBC))(this, value);
	}
	template <typename T = float> T get_PageEarthAngle() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9FC4))(this);
	}
	template <typename T = void> T set_PageEarthAngle(float value) {
		return ((T (*)(SPVPMapRuleConfConfig*, float))(Il2CppBase() + 0x30E9FCC))(this, value);
	}
	template <typename T = float> T get_MapEarthx() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9FD4))(this);
	}
	template <typename T = void> T set_MapEarthx(float value) {
		return ((T (*)(SPVPMapRuleConfConfig*, float))(Il2CppBase() + 0x30E9FDC))(this, value);
	}
	template <typename T = float> T get_MapEarthy() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9FE4))(this);
	}
	template <typename T = void> T set_MapEarthy(float value) {
		return ((T (*)(SPVPMapRuleConfConfig*, float))(Il2CppBase() + 0x30E9FEC))(this, value);
	}
	template <typename T = float> T get_MapEarthz() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30E9FF4))(this);
	}
	template <typename T = void> T set_MapEarthz(float value) {
		return ((T (*)(SPVPMapRuleConfConfig*, float))(Il2CppBase() + 0x30E9FFC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SPVPMapRuleConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EA004))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SPVPMapRuleConfConfig*))(Il2CppBase() + 0x30EA234))(this);
	}

};

}
