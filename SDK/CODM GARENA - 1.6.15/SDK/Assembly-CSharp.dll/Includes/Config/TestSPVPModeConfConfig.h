#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class TestSPVPModeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "TestSPVPModeConfConfig"));
	}

	template <typename T = Il2CppString*> T& ModePatter() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ModeType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ModeTypeName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ModeResource() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& DefaultMapType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ModeUplimit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ModeDownLimit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& LOCID_ModeDesc() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& LOCID_ModeBriefDesc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& SubMode_0() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& SubMode0Weight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& SubMode_1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& SubMode1Weight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& SubMode_2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& SubMode2Weight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_ModePatter() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF668))(this);
	}
	template <typename T = void> T set_ModePatter(Il2CppString* value) {
		return ((T (*)(TestSPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF670))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeType() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF678))(this);
	}
	template <typename T = void> T set_ModeType(Il2CppString* value) {
		return ((T (*)(TestSPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF680))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeTypeName() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF688))(this);
	}
	template <typename T = void> T set_ModeTypeName(Il2CppString* value) {
		return ((T (*)(TestSPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF690))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeResource() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF698))(this);
	}
	template <typename T = void> T set_ModeResource(Il2CppString* value) {
		return ((T (*)(TestSPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF6A0))(this, value);
	}
	template <typename T = int32_t> T get_DefaultMapType() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF6A8))(this);
	}
	template <typename T = void> T set_DefaultMapType(int32_t value) {
		return ((T (*)(TestSPVPModeConfConfig*, int32_t))(Il2CppBase() + 0x30EF6B0))(this, value);
	}
	template <typename T = int32_t> T get_ModeUplimit() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF6B8))(this);
	}
	template <typename T = void> T set_ModeUplimit(int32_t value) {
		return ((T (*)(TestSPVPModeConfConfig*, int32_t))(Il2CppBase() + 0x30EF6C0))(this, value);
	}
	template <typename T = int32_t> T get_ModeDownLimit() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF6C8))(this);
	}
	template <typename T = void> T set_ModeDownLimit(int32_t value) {
		return ((T (*)(TestSPVPModeConfConfig*, int32_t))(Il2CppBase() + 0x30EF6D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_ModeDesc() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF6D8))(this);
	}
	template <typename T = void> T set_LOCID_ModeDesc(Il2CppString* value) {
		return ((T (*)(TestSPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF6E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeDesc() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF6E8))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_ModeBriefDesc() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF6F8))(this);
	}
	template <typename T = void> T set_LOCID_ModeBriefDesc(Il2CppString* value) {
		return ((T (*)(TestSPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF700))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModeBriefDesc() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF708))(this);
	}
	template <typename T = Il2CppString*> T get_SubMode_0() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF718))(this);
	}
	template <typename T = void> T set_SubMode_0(Il2CppString* value) {
		return ((T (*)(TestSPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF720))(this, value);
	}
	template <typename T = int32_t> T get_SubMode0Weight() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF728))(this);
	}
	template <typename T = void> T set_SubMode0Weight(int32_t value) {
		return ((T (*)(TestSPVPModeConfConfig*, int32_t))(Il2CppBase() + 0x30EF730))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubMode_1() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF738))(this);
	}
	template <typename T = void> T set_SubMode_1(Il2CppString* value) {
		return ((T (*)(TestSPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF740))(this, value);
	}
	template <typename T = int32_t> T get_SubMode1Weight() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF748))(this);
	}
	template <typename T = void> T set_SubMode1Weight(int32_t value) {
		return ((T (*)(TestSPVPModeConfConfig*, int32_t))(Il2CppBase() + 0x30EF750))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubMode_2() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF758))(this);
	}
	template <typename T = void> T set_SubMode_2(Il2CppString* value) {
		return ((T (*)(TestSPVPModeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF760))(this, value);
	}
	template <typename T = int32_t> T get_SubMode2Weight() {
		return ((T (*)(TestSPVPModeConfConfig*))(Il2CppBase() + 0x30EF768))(this);
	}
	template <typename T = void> T set_SubMode2Weight(int32_t value) {
		return ((T (*)(TestSPVPModeConfConfig*, int32_t))(Il2CppBase() + 0x30EF770))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(TestSPVPModeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EF778))(this, bytes, position);
	}

};

}
