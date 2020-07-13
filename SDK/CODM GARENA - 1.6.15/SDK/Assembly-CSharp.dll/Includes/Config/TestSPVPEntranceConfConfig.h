#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class TestSPVPEntranceConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "TestSPVPEntranceConfConfig"));
	}

	template <typename T = uintptr_t> T& EModeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& RANDOM_MAP_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& ModeType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MapID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& MapName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& MapResource() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& MapDesc() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MapRandomWeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MapRandomWeightInSet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMapList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomMapId_InSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T GetMapList(uintptr_t modeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30EEAE0))(0, modeType);
	}
	template <typename T = int32_t> static T GetRandomMapId(uintptr_t modeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30EECA0))(0, modeType);
	}
	template <typename T = int32_t> static T GetRandomMapId_InSet(uintptr_t modeType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x30EEFE4))(0, modeType);
	}
	template <typename T = Il2CppString*> T get_ModeType() {
		return ((T (*)(TestSPVPEntranceConfConfig*))(Il2CppBase() + 0x30EF320))(this);
	}
	template <typename T = void> T set_ModeType(Il2CppString* value) {
		return ((T (*)(TestSPVPEntranceConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF328))(this, value);
	}
	template <typename T = int32_t> T get_MapID() {
		return ((T (*)(TestSPVPEntranceConfConfig*))(Il2CppBase() + 0x30EEFD4))(this);
	}
	template <typename T = void> T set_MapID(int32_t value) {
		return ((T (*)(TestSPVPEntranceConfConfig*, int32_t))(Il2CppBase() + 0x30EF330))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapName() {
		return ((T (*)(TestSPVPEntranceConfConfig*))(Il2CppBase() + 0x30EF338))(this);
	}
	template <typename T = void> T set_MapName(Il2CppString* value) {
		return ((T (*)(TestSPVPEntranceConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF340))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapResource() {
		return ((T (*)(TestSPVPEntranceConfConfig*))(Il2CppBase() + 0x30EF348))(this);
	}
	template <typename T = void> T set_MapResource(Il2CppString* value) {
		return ((T (*)(TestSPVPEntranceConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF350))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapDesc() {
		return ((T (*)(TestSPVPEntranceConfConfig*))(Il2CppBase() + 0x30EF358))(this);
	}
	template <typename T = void> T set_MapDesc(Il2CppString* value) {
		return ((T (*)(TestSPVPEntranceConfConfig*, Il2CppString*))(Il2CppBase() + 0x30EF360))(this, value);
	}
	template <typename T = int32_t> T get_MapRandomWeight() {
		return ((T (*)(TestSPVPEntranceConfConfig*))(Il2CppBase() + 0x30EEFDC))(this);
	}
	template <typename T = void> T set_MapRandomWeight(int32_t value) {
		return ((T (*)(TestSPVPEntranceConfConfig*, int32_t))(Il2CppBase() + 0x30EF368))(this, value);
	}
	template <typename T = int32_t> T get_MapRandomWeightInSet() {
		return ((T (*)(TestSPVPEntranceConfConfig*))(Il2CppBase() + 0x30EF318))(this);
	}
	template <typename T = void> T set_MapRandomWeightInSet(int32_t value) {
		return ((T (*)(TestSPVPEntranceConfConfig*, int32_t))(Il2CppBase() + 0x30EF370))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(TestSPVPEntranceConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EF378))(this, bytes, position);
	}

};

}
