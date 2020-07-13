#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CompoundConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CompoundConfConfig"));
	}

	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Frage1id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Frage1num() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Frage2id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Frage2num() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Frage3id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Frage3num() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Itemid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Itemnum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCompoundIdByChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNeedChipCountByChipId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T GetCompoundIdByChip(uint32_t chipId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x462EE50))(0, chipId);
	}
	template <typename T = int32_t> static T GetNeedChipCountByChipId(uint32_t chipId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x462EFB0))(0, chipId);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F114))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F1BC))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(CompoundConfConfig*, Il2CppString*))(Il2CppBase() + 0x462F1C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F1CC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F1DC))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(CompoundConfConfig*, Il2CppString*))(Il2CppBase() + 0x462F1E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F1EC))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F1B4))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(CompoundConfConfig*, int32_t))(Il2CppBase() + 0x462F1FC))(this, value);
	}
	template <typename T = int32_t> T get_Frage1id() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462EFA8))(this);
	}
	template <typename T = void> T set_Frage1id(int32_t value) {
		return ((T (*)(CompoundConfConfig*, int32_t))(Il2CppBase() + 0x462F204))(this, value);
	}
	template <typename T = int32_t> T get_Frage1num() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F10C))(this);
	}
	template <typename T = void> T set_Frage1num(int32_t value) {
		return ((T (*)(CompoundConfConfig*, int32_t))(Il2CppBase() + 0x462F20C))(this, value);
	}
	template <typename T = int32_t> T get_Frage2id() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F214))(this);
	}
	template <typename T = void> T set_Frage2id(int32_t value) {
		return ((T (*)(CompoundConfConfig*, int32_t))(Il2CppBase() + 0x462F21C))(this, value);
	}
	template <typename T = int32_t> T get_Frage2num() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F224))(this);
	}
	template <typename T = void> T set_Frage2num(int32_t value) {
		return ((T (*)(CompoundConfConfig*, int32_t))(Il2CppBase() + 0x462F22C))(this, value);
	}
	template <typename T = int32_t> T get_Frage3id() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F234))(this);
	}
	template <typename T = void> T set_Frage3id(int32_t value) {
		return ((T (*)(CompoundConfConfig*, int32_t))(Il2CppBase() + 0x462F23C))(this, value);
	}
	template <typename T = int32_t> T get_Frage3num() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F244))(this);
	}
	template <typename T = void> T set_Frage3num(int32_t value) {
		return ((T (*)(CompoundConfConfig*, int32_t))(Il2CppBase() + 0x462F24C))(this, value);
	}
	template <typename T = int32_t> T get_Itemid() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F254))(this);
	}
	template <typename T = void> T set_Itemid(int32_t value) {
		return ((T (*)(CompoundConfConfig*, int32_t))(Il2CppBase() + 0x462F25C))(this, value);
	}
	template <typename T = int32_t> T get_Itemnum() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F264))(this);
	}
	template <typename T = void> T set_Itemnum(int32_t value) {
		return ((T (*)(CompoundConfConfig*, int32_t))(Il2CppBase() + 0x462F26C))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(CompoundConfConfig*))(Il2CppBase() + 0x462F274))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(CompoundConfConfig*, int32_t))(Il2CppBase() + 0x462F27C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CompoundConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x462F284))(this, bytes, position);
	}

};

}
